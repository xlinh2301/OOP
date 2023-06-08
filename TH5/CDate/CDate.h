#ifndef CDATE_H
#define CDATE_H
#include <bits/stdc++.h>
using namespace std;

#pragma once

class CDate
{
private:
    int ngay, thang, nam;
public:
    CDate();
    CDate(int);
    CDate(int, int);
    CDate(int, int, int);
    ~CDate();
    void SetNgay(int);
    void SetThang(int);
    void SetNam(int);
    int GetNgay();
    int GetThang();
    int GetNam();
    friend istream& operator>>(istream&, CDate&);
    friend ostream& operator<<(ostream&, CDate);
    CDate& operator++();
    CDate operator++(int);
    CDate& operator--();
    CDate operator--(int);
};

#endif