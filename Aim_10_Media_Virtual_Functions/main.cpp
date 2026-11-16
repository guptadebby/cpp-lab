#include <iostream>
#include <string>
#include <iomanip>
#include <limits>
using namespace std;

// Base class
class Media
{
protected:
    string title, publication;

public:
    // Virtual function to read data
    virtual void read()
    {
        cout << "Enter title: ";
        getline(cin >> ws, title);

        cout << "Enter publication: ";
        getline(cin, publication);
    }

    // Virtual function to display data
    virtual void show() const
    {
        cout << "Title       : " << title << endl;
        cout << "Publication : " << publication << endl;
    }

    virtual ~Media() {}
};

// Derived class Book
class Book : public Media
{
private:
    int pages;

public:
    void read() override
    {
        cout << "\n--- Enter Book Details ---\n";

        Media::read();

        cout << "Enter number of pages: ";

        while (!(cin >> pages) || pages <= 0)
        {
            cout << "Invalid input. Enter a positive number of pages: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
    }

    void show() const override
    {
        cout << "\n--- Book Details ---\n";

        Media::show();

        cout << "Number of Pages: " << pages << endl;
    }
};

// Derived class Tape
class Tape : public Media
{
private:
    double playingTime;

public:
    void read() override
    {
        cout << "\n--- Enter Tape Details ---\n";

        Media::read();

        cout << "Enter playing time per day (in hours): ";

        while (!(cin >> playingTime) || playingTime < 0)
        {
            cout << "Invalid input. Enter a non-negative value: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
    }

    void show() const override
    {
        cout << "\n--- Tape Details ---\n";

        Media::show();

        cout << "Playing Time: "
             << playingTime << " hours/day" << endl;
    }
};

int main()
{
    Book book;
    Tape tape;

    // Base class pointers
    Media *ptr[2];

    ptr[0] = &book;
    ptr[1] = &tape;

    cout << "===== BOOKSHOP MANAGEMENT SYSTEM =====\n";

    // Reading details using base class pointers
    for (int i = 0; i < 2; i++)
    {
        ptr[i]->read();
    }

    // Displaying details using base class pointers
    cout << "\n===== MEDIA DETAILS =====\n";

    for (int i = 0; i < 2; i++)
    {
        ptr[i]->show();
    }

    return 0;
}
