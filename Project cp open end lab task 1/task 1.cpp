#include <iostream>
#include <string>
#include<stdio.h>
using namespace std;

int main()
{
    int date, fine, number_of_days, choice;
    string book;


    cout << "Press \'2\' to borrow or press \'4\' to return a book : ";
    cin >> choice;

    if (choice == 2)
    {
        cout << "Enter The book you want: ";
        getline(cin, book);
        cin.ignore();

        cout << "The book has been issued. " << endl;
        cout << "\nPlease follow the instructions given below:\nIf you failed to return the book on time,you will be fined." << endl;
        cout << "The fine is imposed $1 per day after the given time is exceeded." << endl;
        cout << "The book must be returned in 7 days time.";

    }
    else if (choice == 4)
    {
        cout << "\nYou can return the book you want." << endl;
        cout << "\nEnter the number of days you had the book for:";
        cin >> number_of_days;
        cout << "\nkindly wait until we check the time of the borrowed book." << endl;
        if (number_of_days > 7)
        {
            cout << "The given time was exceeded, ";
            cout << " The fine is Rs " << number_of_days - 7;
        }
        else
            cout << "You returned the book on time, thanks. ";
    }

}