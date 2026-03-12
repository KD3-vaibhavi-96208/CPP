#include <iostream>
using namespace std;

struct Date
{
    int day;
    int month;
    int year;
};

void initDate(Date *ptr)
{
    ptr->day = 1;
    ptr->month = 1;
    ptr->year = 2000;
}

void printDateOnConsole(Date *ptr)
{
    cout << "Date : " << ptr->day << "/" << ptr->month << "/" << ptr->year << endl;
}

void acceptDateFromConsole(Date *ptr)
{
    cout << "Enter Day : ";
    cin >> ptr->day;

    cout << "Enter Month : ";
    cin >> ptr->month;

    cout << "Enter Year : ";
    cin >> ptr->year;
}

bool isLeapYear(Date *ptr)
{
    if((ptr->year % 4 == 0 && ptr->year % 100 != 0) || (ptr->year % 400 == 0))
        return true;
    else
        return false;
}

int main()
{
    Date d;
    int choice;

    do
    {
        cout << "\n----- MENU -----\n";
        cout << "1. Initialize Date\n";
        cout << "2. Accept Date\n";
        cout << "3. Print Date\n";
        cout << "4. Check Leap Year\n";
        cout << "0. Exit\n";
        cout << "Enter choice : ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                initDate(&d);
                break;

            case 2:
                acceptDateFromConsole(&d);
                break;

            case 3:
                printDateOnConsole(&d);
                break;

            case 4:
                if(isLeapYear(&d))
                    cout << "It is Leap Year\n";
                else
                    cout << "Not a Leap Year\n";
                break;

            case 0:
                cout << "Program Ended\n";
                break;

            default:
                cout << "Invalid Choice\n";
        }

    } while(choice != 0);

    return 0;
}