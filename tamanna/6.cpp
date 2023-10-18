#include <iostream>
#include <vector>
#include <string>

class Book {
private:
    std::string title;
    std::string author;
    std::string id;
    bool checkedOut;
public:
    Book(std::string title, std::string author, std::string id) {
        this->title = title;
        this->author = author;
        this->id = id;
        this->checkedOut = false;
    }

    std::string getTitle() {
        return title;
    }

    std::string getAuthor() {
        return author;
    }

    std::string getId() {
        return id;
    }

    bool isCheckedOut() {
        return checkedOut;
    }

    void setCheckedOut(bool checkedOut) {
        this->checkedOut = checkedOut;
    }
};

class Patron {
private:
    std::string name;
    std::string id;
    std::vector<Book*> checkedOutBooks;
public:
    Patron(std::string name, std::string id) {
        this->name = name;
        this->id = id;
    }

    std::string getName() {
        return name;
    }

    std::string getId() {
        return id;
    }

    std::vector<Book*> getCheckedOutBooks() {
        return checkedOutBooks;
    }

    void addCheckedOutBook(Book* book) {
        checkedOutBooks.push_back(book);
    }

    void removeCheckedOutBook(Book* book) {
        for (int i = 0; i < checkedOutBooks.size(); i++) {
            if (checkedOutBooks[i] == book) {
                checkedOutBooks.erase(checkedOutBooks.begin() + i);
                break;
            }
        }
    }
};

class Library {
private:
    std::vector<Book*> books;
    std::vector<Patron*> patrons;
public:
    void addBook(Book* book) {
        books.push_back(book);
    }

    void addPatron(Patron* patron) {
        patrons.push_back(patron);
    }

    void checkOutBook(Book* book, Patron* patron) {
        if (book->isCheckedOut()) {
            std::cout << "Book is already checked out.\n";
        } else {
            book->setCheckedOut(true);
            patron->addCheckedOutBook(book);
            std::cout << "Book checked out successfully.\n";
        }
    }

    void returnBook(Book* book, Patron* patron) {
        if (!book->isCheckedOut()) {
            std::cout << "Book is not checked out.\n";
        } else {
            book->setCheckedOut(false);
            patron->removeCheckedOutBook(book);
            std::cout << "Book returned successfully.\n";
        }
    }

    void printBooks() {
        for (int i = 0; i < books.size(); i++) {
            std::cout << "Title: " << books[i]->getTitle() << "\n";
            std::cout << "Author: " << books[i]->getAuthor() << "\n";
            std::cout << "ID: " << books[i]->getId() << "\n";
            std::cout << "Checked out: " << (books[i]->isCheckedOut() ? "Yes" : "No") << "\n\n";
        }
    }

    void printPatrons() {
        for (int i = 0; i < patrons.size(); i++) {
            std::cout << "Name: " << patrons[i]->getName() << "\n";
            std::cout << "ID: " << patrons[i]->getId() << "\n";
            std::cout << "Checked out books:\n";
            std::vector<Book*> checkedOutBooks = patrons[i]->getCheckedOutBooks();
            for (int j = 0; j < checkedOutBooks.size(); j++) {
                std::cout << "Title: " << checkedOutBooks[j]->getTitle() << "\n";
                std::cout << "Author: " << checkedOutBooks[j]->getAuthor() << "\n";
                std::cout << "ID: " << checkedOutBooks[j]->getId() << "\n\n";
            }
        }
    }
};

int main() {
    // Create instances of Book, Patron, and Library classes
    Book book1("The Great Gatsby", "F. Scott Fitzgerald", "1234567890");
    Book book2("To Kill a Mockingbird", "Harper Lee", "0987654321");
    Patron patron1("John Doe", "1234");
    Patron patron2("Jane Smith", "5678");
    Library library;

    // Add books and patrons
    library.addBook(&book1);
    library.addBook(&book2);
    library.addPatron(&patron1);
    library.addPatron(&patron2);

    // Allow patrons to borrow and return books
    library.checkOutBook(&book1, &patron1);
    library.checkOutBook(&book2, &patron2);
    library.returnBook(&book1, &patron1);
    library.checkOutBook(&book1, &patron2);

    // Display the library's book inventory and patron information
    std::cout << "Library's book inventory:\n";
    library.printBooks();
    std::cout << "\nLibrary's patron information:\n";
    library.printPatrons();

    return 0;
}