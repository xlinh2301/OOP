#pragma once
#include <iostream>
#include <math.h>
using namespace std;
#ifndef _HCN
class HCN {
private:
    int x1, y1, x2, y2;
    static int dem;
public:
    static int GetDem() {
        return dem;
    }
    ~HCN();
    HCN(): x1(0), y1(0), x2(0), y2(0)  {
        dem++;
    }

    HCN(int X1, int Y1, int X2, int Y2): x1(X1), y1(Y1), x2(X2), y2(Y2) {
        dem++;
    }

    void setX1(int X1) {
        x1 = X1;
    }

    int getX1() {
        return x1;
    }

    void setY1(int Y1) {
        y1 = Y1;
    }

    int getY1() {
        return y1;
    }

    void setX2(int X2) {
        x2 = X2;
    }

    int getX2() {
        return x2;
    }

    void setY2(int Y2) {
        y2 = Y2;
    }

    int getY2() {
        return y2;
    }

    void nhap() {
        cout << "Nhap toa do hai dinh la duong cheo cua HCN:\n";
        cout << "Diem A (x1, y1): ";
        cin >> x1 >> y1;
        cout << "Diem B (x2, y2): ";
        cin >> x2 >> y2;
    }

    void xuat() {
        cout << "HCN co toa do hai duong cheo la A(" << x1 << ", " << y1 << ") va B(" << x2 << ", " << y2 << ")\n";
    }

    bool hopLe() {
        if (x1 == x2 || y1 == y2) {
            return false;
        }
        return true;
    }

    double chuVi() {
        double canh1 = abs(x1 - x2); 
        double canh2 = abs(y1 - y2);
        return 2 * (canh1 + canh2);
    }

    double dienTich() {
        double canh1 = abs(x1 - x2);
        double canh2 = abs(y1 - y2);
        return canh1 * canh2;
    }

    void diChuyen(int dx, int dy) {
        x1 += dx;
        y1 += dy;
        x2 += dx;
        y2 += dy;
    }

    friend istream& operator>>(istream& is, HCN& h) {
        is >> h.x1 >> h.y1 >> h.x2 >> h.y2;
        return is;
    }

    friend ostream& operator<<(ostream& os, HCN& h) {
        os << "HCN co toa do dinh hai duong cheo la A(" << h.x1 << ", " << h.y1 << ") va B(" << h.x2 << ", " << h.y2 << ")\n";
        return os;
    }
};
int HCN::dem = 0;
HCN::~HCN() {
    cout << "Da huy 1 duong cheo => Con " << --dem << " duong cheo\n";
}
#endif