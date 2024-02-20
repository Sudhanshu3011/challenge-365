class Library:

    def __init__(self):
        self.books=[]
        self.number=0

    def libdetail(self):
        print(f"There are total {self.number} books in library.")
        for book in self.books:
            print(book)

    def newbook(self,bookname):
        self.books.append(bookname)
        self.number=len(self.books)


l1=Library()
l1.newbook("To Kill a Mockingbird")
l1.newbook("1984")
l1.newbook("The Great Gatsby")
l1.newbook("One Hundred Years of Solitude")
l1.newbook("Pride and Prejudice")
l1.newbook("The Catcher in the Rye")
l1.newbook("The Lord of the Rings")
l1.newbook("Harry Potter and the Philosopher's Stone")
l1.newbook("The Bible")
l1.newbook("The Quran")
l1.newbook("The Odyssey")
l1.newbook("The Brothers Karamazov")
l1.newbook("The Diary of Anne Frank")
l1.newbook("Crime and Punishment")
l1.newbook("Moby-Dick")
l1.newbook("War and Peace")
l1.newbook("The Little Prince")
l1.newbook("Frankenstein")
l1.newbook("The Chronicles of Narnia")
l1.newbook("Brave New World")

l1.libdetail()

