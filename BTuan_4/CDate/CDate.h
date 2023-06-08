#ifndef CDATE_H
#define CDATE_H
#include <iostream>
using namespace std;

#pragma once

class CDate {
private:
    int day;
    int month;
    int year;

public:
    CDate(int = 1, int = 1, int = 1970);
    CDate operator+(int);
    CDate operator-(int);
    CDate operator++();
    CDate operator--();
    int operator-(const CDate&);
    friend ostream& operator<<(ostream&, const CDate&);
    friend istream& operator>>(istream&, CDate&) ;
    bool isLeapYear(int); // kt nam nhuan
    int daysInMonth(int, int) ; // ham tra ve so ngay trong thang
};

#endif