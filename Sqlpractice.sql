SELECT person-name
FROM Employee;
--Find city of employee whose name is ‘jashu’.

SELECT city
FROM Employee
WHERE person-name = 'jashu';
--Find name and city of all employees who are having salary > 50000.

SELECT person-name, city
FROM Employee
JOIN Works ON Employee.person-name = Works.person-name
WHERE salary > 50000;


--Find total salary of all employees who are working for company ‘HCL’.

SELECT SUM(salary) AS total_salary
FROM Works
JOIN Company ON Works.company-name = Company.company-name
WHERE Company.company-name = 'HCL';