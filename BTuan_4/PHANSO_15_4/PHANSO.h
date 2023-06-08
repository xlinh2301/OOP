#ifndef PHANSO_H
#define PHANSO_H
#pragma once
#include <iostream>
#include <math.h>
using namespace std;


class PHANSO
{
private:
    int ts, ms;
    static int dem;
public:
    PHANSO();
    PHANSO(int);
    PHANSO(int ,int);
    PHANSO(const PHANSO&);
    void Nhap();
    void Xuat();
    void SetTS();
    void SetMS();
    void SetPS();
    int GetTS();
    int GetMS();
    int TimUSCLN(int, int);
    void RutGon();
    static int GetDem();
    friend PHANSO operator+(const PHANSO&, const PHANSO&);
    friend PHANSO operator-(const PHANSO&, const PHANSO&);
    friend PHANSO operator*(const PHANSO&, const PHANSO&);
    friend PHANSO operator/(const PHANSO&, const PHANSO&);
    PHANSO operator++();
    PHANSO operator++(int);
    PHANSO operator--();
    PHANSO operator--(int);
    // operator double() const;
    friend bool operator==(const PHANSO&, const PHANSO&);
    friend bool operator!=(const PHANSO&, const PHANSO&);
    friend bool operator<=(const PHANSO&, const PHANSO&);
    friend bool operator<(const PHANSO&, const PHANSO&);
    friend bool operator>=(const PHANSO&, const PHANSO&);
    friend bool operator>(const PHANSO&, const PHANSO&);
    friend istream& operator>>(istream&, PHANSO&);
    friend ostream& operator<<(ostream&, PHANSO&);
};

#endif