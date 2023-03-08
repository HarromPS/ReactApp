package chapter_08;
// import java.util.Scanner;

// Unsolved
class Library2 {
    String[] books;
    int noOfBooks;
    public Library2()
    {
        books = new String[100];
        this.noOfBooks =0;   // initailly zero books
    }

    public void addBook(String book)
    {
        this.books[noOfBooks]=book;
        noOfBooks++;
        System.out.println(book+" book is added");
    }
    public void showAvailableBooks()
    {
        System.out.println("Available books are: ");
        for (String str : this.books) {
            if(str==null)
            {
                continue;
            }
            System.out.println("* "+str);
        }
    }

    public void issueBooks(String book)
    {
        for(int i=0;i<this.books.length;i++)
        {
            if(this.books[i].equals(book))
            {
                System.out.println("This book is now issued");
                this.books[i]=null;
                return;
            }
        }
        System.out.println("This book is not available");
    }

    public void returnBook(String book)
    {
        this.addBook(book);
    }
};

public class exercise_04 {
    public static void main(String[] args) {
        // Implement a library using a Java Class Library
        // Methods: issueBooks, returnBook,addBook,availableBooks
        // Properties: Array to store the avaible books,
        Library2 b=new Library2();
        b.addBook("Maths");
        b.addBook("Science");
        b.addBook("Hindi");
        b.addBook("History");
        b.showAvailableBooks();
        b.issueBooks("Maths");
        b.showAvailableBooks();
        b.returnBook("Maths");
        b.showAvailableBooks();
        

    }       
};
