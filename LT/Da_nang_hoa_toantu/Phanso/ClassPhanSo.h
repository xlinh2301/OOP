#pragma once
#ifndef _PHANSO
#include <iostream>

using namespace std;

class PHANSO {
private:
    int ts, ms;
    static int dem;
public:
    ~PHANSO();
    PHANSO();
    PHANSO(int);
    PHANSO(int, int);
    PHANSO(const PHANSO&);
    void Nhap();
    void Xuat();
    int TimUSCLN(int, int);
    void RutGon();
    int GetTS() const;
    int GetMS() const;
    static int GetDem();
    void SetTS(int);
    void SetMS(int);
    void SetPS(int, int);
    friend PHANSO operator+(const PHANSO&, const PHANSO&);
    friend PHANSO operator-(const PHANSO&, const PHANSO&);
    friend PHANSO operator*(const PHANSO&, const PHANSO&);
    friend PHANSO operator/(const PHANSO&, const PHANSO&);
    PHANSO operator++(); // ++ps_this
    PHANSO operator++(int); // ps_this++
    PHANSO operator--(); // --ps_this
    PHANSO operator--(int); // ps_this--
    operator double() const; // (double)ps_this
    friend bool operator==(const PHANSO&, const PHANSO&);
    friend bool operator!=(const PHANSO&, const PHANSO&);
    friend bool operator<(const PHANSO&, const PHANSO&);
    friend bool operator<=(const PHANSO&, const PHANSO&);
    friend bool operator>(const PHANSO&, const PHANSO&);
    friend bool operator>=(const PHANSO&, const PHANSO&);
    friend istream& operator>>(istream&, PHANSO&);
    friend ostream& operator<<(ostream&, PHANSO&);
};
#endif