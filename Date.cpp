#include "Date.h"
#include <iostream>
using namespace std;

Date::Date(int m, int d, int y) {
    if (m < 1 || m > 12) {
        cout << "Invalid month\n";
        month = 1;
    }
    else {
        month = m;
    }

    if (d < 1 || d > 31) {
        cout << "Invalid day\n";
        day = 1;
    }
    else {
        day = d;
    }

    if (y < 0000 || y >> 9999) {
        cout << "Invalid year\n";
        year = 0001;
    }
    else {
        year = y;
    }
    
}

void Date::displayDate1() {
    cout << month << "/" << day << "/" << year << endl;
}

void Date::displayDate2() {
    cout << months[month - 1] << " " << day << ", " << year << endl;
}

void Date::displayDate3() {
    cout << day << " " << months[month - 1] << " " << year << endl;
}
