#include <iostream>
using namespace std;

class Box
{
private:
    int length, breadth, height;

public:
    
    Box()
    {
        length = 1;
        breadth = 1;
        height = 1;
    }

    
    Box(int x)
    {
        length = x;
        breadth = x;
        height = x;
    }

    
    Box(int l, int b, int h)
    {
        length = l;
        breadth = b;
        height = h;
    }

    int calculateVolume()
    {
        return length * breadth * height;
    }

    void printVolume()
    {
        cout << "Volume of Box = " << calculateVolume() << endl;
    }
};

int main()
{
    int choice;
    int l, b, h, x;

    do
    {
        cout << "\nMenu\n";
        cout << "1. Calculate Volume with default values\n";
        cout << "2. Calculate Volume with same length, breadth and height\n";
        cout << "3. Calculate Volume with different length, breadth and height\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            Box b1;
            b1.printVolume();
            break;
        }

        case 2:
        {
            cout << "Enter value: ";
            cin >> x;
            Box b2(x); 
            b2.printVolume();
            break;
        }

        case 3:
        {
            cout << "Enter length breadth height: ";
            cin >> l >> b >> h;
            Box b3(l, b, h); 
            b3.printVolume();
            break;
        }

        case 4:
            cout << "Exiting program...\n";
            break;

        default:
            cout << "Invalid choice\n";
        }

    } while (choice != 4);

    return 0;
}