#pragma once
#include <string>
using namespace std;

class Date {
public:
    Date(int m, int d, int y);

    void displayDate1();
    void displayDate2();
    void displayDate3();

private:
    int month;
    int day;
    int year;
    string months[12] = {
        "January", "February", "March", "April", "May", "June",
        "July", "August", "September", "October", "November", "December"
    };
};
