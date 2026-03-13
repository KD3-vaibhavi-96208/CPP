#include <iostream>
using namespace std;

class Time {
private:
    int hour;
    int minute;
    int second;

public:
    
    Time() {
        hour = 0;
        minute = 0;
        second = 0;
    }

   
    Time(int h, int m, int s) {
        hour = h;
        minute = m;
        second = s;
    }

    
    int getHour() {
        return hour;
    }

    int getMinute() {
        return minute;
    }

    int getSeconds() {
        return second;
    }

    
    void setHour(int h) {
        hour = h;
    }

    void setMinute(int m) {
        minute = m;
    }

    void setSeconds(int s) {
        second = s;
    }

    
    void printTime() {
        cout << hour << ":" << minute << ":" << second << endl;
    }
};

int main() {
    int n;
    cout << "Enter number of Time objects: ";
    cin >> n;

    
    Time *arr = new Time[n];

    int choice;
    int count = 0;

    do {
        cout << "\nMenu\n";
        cout << "1. Add Time\n";
        cout << "2. Display All Time\n";
        cout << "3. Display only hrs of all time objects\n";
        cout << "4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch(choice) {

        case 1:
            if(count < n) {
                int h,m,s;
                cout << "Enter hour minute second: ";
                cin >> h >> m >> s;

                arr[count].setHour(h);
                arr[count].setMinute(m);
                arr[count].setSeconds(s);
                count++;
            }
            else {
                cout << "Array Full\n";
            }
            break;

        case 2:
            for(int i=0;i<count;i++) {
                arr[i].printTime();
            }
            break;

        case 3:
            for(int i=0;i<count;i++) {
                cout << "Hour: " << arr[i].getHour() << endl;
            }
            break;

        case 4:
            cout << "Exiting...\n";
            break;

        default:
            cout << "Invalid choice\n";
        }

    } while(choice != 4);

    // Free memory
    delete[] arr;

    return 0;
}