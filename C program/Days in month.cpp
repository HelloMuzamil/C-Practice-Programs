#include <iostream>
using namespace std;
int main() {
    int month, year;
    cout << "Enter a month (1 for January, 2 for February, etc.): ";
    cin >> month;

    cout << "Enter the year: ";
    cin >> year;
 int daysInMonth;
if (month < 1 || month > 12) {
        cout << "Invalid month entered." << endl;
        return 1; 
    }
 if (month == 4 || month == 6 || month == 9 || month == 11) {
        daysInMonth = 30;
    } else if (month == 2) {
        
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
            
            daysInMonth = 29;
        } else {
            
            daysInMonth = 28;
        }
    } else {
        
        daysInMonth = 31;
    }
cout << "Number of days: " << daysInMonth << endl;
return 0; 
}
