#ifndef MANG1C_H
#define MANG1C_H
#pragma once
#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime> 
using namespace std;

class Mang1C {
private:
    int n;
    int* a;

public:
    Mang1C();
    Mang1C(int size);
    Mang1C(const Mang1C& other);
    ~Mang1C();
    void Nhap();
    void Xuat();
    void LietKeSoNguyenTo();
    int DemSoChinhPhuong();
    int TinhTongSoHoanThien();
    float TBCongSoDoiXung();
    bool KiemTraMangLe();
    int TimGiaTriChanBeNhat();
    void SapXepTang();
    void SapXepGiam();
    void XoaPhanTu(int pos);
    void ThemPhanTu(int pos, int value);
    int TimKiemPhanTu(int value);
    void PhatSinhMangNgauNhien(int minValue, int maxValue);
    bool LaSoNguyenTo(int num);
    bool LaSoChinhPhuong(int num);
    bool LaSoHoanThien(int num);
    bool LaSoDoiXung(int num);
};

#endif  // MANG1C_H
