#ifndef MANG1C_H
#define MANG1C_H
#pragma once
#include <iostream>
#include <math.h>
using namespace std;

class Mang1C
{
private:
    int n; //so luong pt trong mang
    int *a; //Con trỏ tới vùng nhớ động chứa các phần tử mảng (int *a)
public:
    ~Mang1C();
    Mang1C();
    Mang1C(int);
    Mang1C(const Mang1C&);
    void Nhap();
    void Xuat();
    void LietKeSNT();
    int DemSCP();
    int SumSHT();
    int TBCongSDX();
    bool KtAllLe();
    int Minchan();
    void MangTang();
    void MangGiam();
    void XoaPhanTuBatKy(int);
    void ThemPhanTu(int);
    int TimKiemPhanTuBK(int);
    void PhatSinhNgauNhien(int , int);
};

#endif