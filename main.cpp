#include "Date.h"
#include <iostream>
using namespace std; 

int main() {
    int m, d, y;

    cout << "Enter month (1-12): ";
    cin >> m;

	cout << "Enter day (1-31): ";
    cin >> d;

    cout << "Enter year: ";
    cin >> y; 

    Date userDate(m, d, y);

	cout << "\nHere are your date formats:\n";
  
    cout << "\nNumeric   : ";
    userDate.displayDate1();

    cout << "\nLong      : ";
    userDate.displayDate2();
  
    cout << "\nLong      : ";
    userDate.displayDate3();


    return 0; 

}
