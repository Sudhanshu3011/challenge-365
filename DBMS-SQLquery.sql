-- Create Students table
CREATE TABLE Students (
    student_id INT PRIMARY KEY,
    student_name VARCHAR(255),
    age INT,
    gender VARCHAR(10)
);

-- Create Courses table
CREATE TABLE Courses (
    course_id INT PRIMARY KEY,
    course_name VARCHAR(255),
    credits INT
);

-- Create Enrollments table
CREATE TABLE Enrollments (
    enrollment_id INT PRIMARY KEY,
    student_id INT,
    course_id INT,
    grade FLOAT,
    FOREIGN KEY (student_id) REFERENCES Students(student_id),
    FOREIGN KEY (course_id) REFERENCES Courses(course_id)
);

-- Insert some sample data
INSERT INTO Students VALUES (1, 'Alice', 20, 'Female');
INSERT INTO Students VALUES (2, 'Bob', 22, 'Male');
INSERT INTO Students VALUES (3, 'Charlie', 21, 'Male');

INSERT INTO Courses VALUES (101, 'Mathematics', 4);
INSERT INTO Courses VALUES (102, 'English', 3);
INSERT INTO Courses VALUES (103, 'Computer Science', 4);

INSERT INTO Enrollments VALUES (1, 1, 101, 90);
INSERT INTO Enrollments VALUES (2, 1, 102, 85);
INSERT INTO Enrollments VALUES (3, 2, 101, 88);
INSERT INTO Enrollments VALUES (4, 2, 103, 92);
INSERT INTO Enrollments VALUES (5, 3, 102, 78);


-- Retrieve the names of students who have enrolled in more than two courses.
-- Find the course with the highest average grade.
-- List the students who have not enrolled in any course.
-- Find the total number of courses with at least one student enrolled.
-- Retrieve the names of students who have the same age as 'Alice'.
-- Find the course with the lowest average grade among courses with more than three students enrolled.
-- List the students who have the highest grade in the 'English' course.
-- Find the courses with the same number of credits as the 'Mathematics' course.
-- Retrieve the names of students who have enrolled in all available courses.
-- Find the average age of students who have enrolled in the 'Computer Science' course.



-- 1>
SELECT student_name
FROM Students
WHERE student_id IN (
    SELECT student_id
    FROM Enrollments
    GROUP BY student_id
    HAVING COUNT(DISTINCT course_id) > 2
);

-- 2>
SELECT course_name
FROM courses
WHERE course_id IN (
    SELECT course_id
    FROM Enrollments
    where grade=( SELECT MAX(grade) FROM Enrollments)
);

-- way of approach 2
SELECT course_name
FROM Courses
WHERE course_id IN (
    SELECT course_id
    FROM Enrollments
    GROUP BY course_id
    ORDER BY AVG(grade) DESC
    LIMIT 1
);

-- 3>
SELECT student_name
FROM Students
WHERE student_id NOT IN (
    SELECT DISTINCT student_id
    FROM Enrollments
);

-- 4>
SELECT COUNT(DISTINCT course_id) AS total_courses
FROM Enrollments;

-- 5>
select student_name 
from students 
where age=(select age from students where student_name='Alice');

-- check using this statement that the table is now giving two names
 --update students
--set age=20
--where student_name='Bob';

-- 6>
SELECT course_name
FROM Courses
WHERE course_id IN (
    SELECT course_id
    FROM Enrollments
    GROUP BY course_id
    HAVING COUNT(DISTINCT student_id) > 3
    ORDER BY AVG(grade) ASC
    LIMIT 1
);

-- 7>
select s.student_name
from students s
join enrollments e
on s.student_id=e.student_id
join courses c
on e.course_id=e.course_id
group by c.course_name='English'
order by e.grade
Limit 1;

-- approach 2

SELECT s.student_name
FROM Students s
JOIN Enrollments e ON s.student_id = e.student_id
JOIN Courses c ON e.course_id = c.course_id
WHERE c.course_name = 'English'
      AND e.grade = (SELECT MAX(grade) FROM Enrollments WHERE course_id = c.course_id);

-- 8>
select c.course_name 
from courses c
where c.credits=(select credits from courses where course_name= 'Mathematics');

-- 9>
SELECT s.student_name
FROM Students s
WHERE NOT EXISTS (
    SELECT c.course_id
    FROM Courses c
    WHERE NOT EXISTS (
        SELECT e.enrollment_id
        FROM Enrollments e
        WHERE e.course_id = c.course_id AND e.student_id = s.student_id
    )
);


-- 10>
select avg(age) as AGE
from students s
join enrollments e
on e.student_id=s.student_id
join courses c
on e.course_id=c.course_id
where c.course_name='Computer Science';
