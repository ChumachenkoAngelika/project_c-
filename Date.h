#ifndef DATE_H
#define DATE_H

struct Date {
    int day, month, year;
    Date(int d, int m, int y) : day(d), month(m), year(y) {}
};

#endif