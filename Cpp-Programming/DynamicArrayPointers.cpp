// Create a class called Book that represents a book. It should have private member variables for the book title, author, and publisher. The class should have a constructor that takes the book title, author, and publisher as arguments. It should also have a method to print the book details.
#include <iostream>
using namespace std;

class Book
{
    string name;
    string authore;
    string pub;

public:
    Book(string name, string authore, string pub) : name(name), authore(authore), pub(pub) {}
    string getName() { return name; }
    string getAuthore() { return authore; }
    string getPub() { return pub; }
};

class Detail
{
    string name;
    string authore;
    string pub;
    int cap;
    int num;
    Book **books;

public:
    Detail(string n, string a, string p, int c) : name(n), authore(a), pub(p), cap(c)
    {
        num = 0;
        books = new Book *[cap];
    }
    ~Detail()
    {
        delete[] books;
    }

    void add(Book *book)
    {
        if (num < cap)
        {
            books[num] = book;
            num++;
        }
        else
        {
            cout << "wrong index" << endl;
        }
    }

    void Remove(Book *book)
    {
        for (int i = 0; i < num; i++)
        {
            if (books[i] == book)
            {
                for (int j = i; j < num - 1; j++)
                {
                    books[j] = books[j + 1];
                }
                num--;
                break;
            }
        }
    }

    void print()
    {
        for (int i = 0; i < num; i++)
        {
            cout << "Title: " << books[i]->getName() << endl
                 << "Authore: " << books[i]->getAuthore() << endl
                 << "Publisher: " << books[i]->getPub() << endl
                 << endl;
        }
    }
};

int main()
{
    Detail d("Ali", "Ahmed", "Hassan", 5);
    Book *b1 = new Book("abdullah", "saim", "ahmed");
    Book *b2 = new Book("he", "ho", "lu");
    Book *b3 = new Book("tt", "ss", "uu");

    d.add(b1);
    d.add(b2);
    d.add(b3);
    d.print();
    d.Remove(b1);
    d.print();
    delete b1;
    delete b2;
    delete b3;
}