#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Define the Library class
class Library
{
private:
    string name;
    string location;
    int workingHours;
    vector<Book> books;     // List of books in the library
    vector<Member> members; // List of members in the library

public:
    Library(string name, string location, int workingHours)
    {
        this->name = name;
        this->location = location;
        this->workingHours = workingHours;
    }

    // Getter and Setter methods for the Library class
    string getName() const
    {
        return name;
    }
    void setName(const string &name)
    {
        this->name = name;
    }

    string getLocation() const
    {
        return location;
    }
    void setLocation(const string &location)
    {
        this->location = location;
    }

    int getWorkingHours() const
    {
        return workingHours;
    }
    void setWorkingHours(int hours)
    {
        this->workingHours = hours;
    }

    void addBook(const Book &book)
    {
        books.push_back(book);
    }
    const vector<Book> &getBooks() const
    {
        return books;
    }

    void addMember(const Member &member)
    {
        members.push_back(member);
    }
    const vector<Member> &getMembers() const
    {
        return members;
    }
};

// Define the Book class
class Book
{
private:
    string title;
    string author;
    int isbn;
    string publicationDate;
    int edition;

public:
    Book(string title, string author, int isbn, string publicationDate, int edition)
    {
        this->title = title;
        this->author = author;
        this->isbn = isbn;
        this->publicationDate = publicationDate;
        this->edition = edition;
    }

    // Getter and Setter methods for the Book class
    string getTitle() const
    {
        return title;
    }
    void setTitle(const string &title)
    {
        this->title = title;
    }

    string getAuthor() const
    {
        return author;
    }
    void setAuthor(const string &author)
    {
        this->author = author;
    }

    int getISBN() const
    {
        return isbn;
    }
    void setISBN(int isbn)
    {
        this->isbn = isbn;
    }

    string getPublicationDate() const
    {
        return publicationDate;
    }
    void setPublicationDate(const string &date)
    {
        this->publicationDate = date;
    }

    int getEdition() const
    {
        return edition;
    }
    void setEdition(int edition)
    {
        this->edition = edition;
    }
};

// Define the Member class
class Member
{
private:
    string name;
    string address;
    string phoneNumber;
    string email;
    string membershipStatus;

public:
    Member(string name, string address, string phoneNumber, string email, string membershipStatus)
    {
        this->name = name;
        this->address = address;
        this->phoneNumber = phoneNumber;
        this->email = email;
        this->membershipStatus = membershipStatus;
    }

    // Getter and Setter methods for the Member class
    string getName() const
    {
        return name;
    }
    void setName(const string &name)
    {
        this->name = name;
    }

    string getAddress() const
    {
        return address;
    }
    void setAddress(const string &address)
    {
        this->address = address;
    }

    string getPhoneNumber() const
    {
        return phoneNumber;
    }
    void setPhoneNumber(const string &phoneNumber)
    {
        this->phoneNumber = phoneNumber;
    }

    string getEmail() const
    {
        return email;
    }
    void setEmail(const string &email)
    {
        this->email = email;
    }

    string getMembershipStatus() const
    {
        return membershipStatus;
    }
    void setMembershipStatus(const string &status)
    {
        this->membershipStatus = status;
    }
};

int main()
{
    Library library("IUT Library", "Building 2", 15);

    // Add 10 books with information to the library
    for (int i = 1; i <= 10; i++)
    {
        Book book("Book " + to_string(i), "Author " + to_string(i), i, "01/01/200" + to_string(i), i);
        library.addBook(book);
    }

    // Add 5 members with information to the library
    for (int i = 1; i <= 5; i++)
    {
        Member member("Member " + to_string(i), "Address " + to_string(i), "Phone " + to_string(i),
                      "email" + to_string(i) + "@example.com", "Student Member");
        library.addMember(member);
    }

    // Display library information, books, and members
    cout << "Library Name: " << library.getName() << endl;
    cout << "Location: " << library.getLocation() << endl;
    cout << "Working Hours: " << library.getWorkingHours() << " hours" << endl;

    cout << "\nBooks in the Library:" << endl;
    const vector<Book> books = library.getBooks();
    for (const Book &book : books)
    {
        cout << "Title: " << book.getTitle() << ", Author: " << book.getAuthor() << ", ISBN: " << book.getISBN() << endl;
    }

    cout << "\nLibrary Members:" << endl;
    const vector<Member> members = library.getMembers();
    for (const Member &member : members)
    {
        cout << "Name: " << member.getName() << ", Membership Status: " << member.getMembershipStatus() << endl;
    }

    return 0;
}
