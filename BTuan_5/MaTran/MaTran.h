#ifndef _MaTran
#define _MaTran
#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
using namespace std;

class MATRAN{
private:
    int sd, sc; //so dong va so cot
    int **p;
public:
    MATRAN(); // thiet lap khong tham so
    MATRAN(int, int); // thiet lap truyen 2 tham so d, c
    MATRAN(const MATRAN&); // thiet lap sao chep
    ~MATRAN(); // HUY
    void Nhap();
    void Xuat();
    void PhatSinhMangNgauNhien(int minValue, int maxValue);
    void LietKeSNT();
    void DemSCP(); // dem so chinh phuong
    void SumOfSHT(); // tong so hoan thien tren dong k
    void TbCongSDX(); // tinh TB cong so dx tren cot k cua matran
    void SapXepTangDan(); // sx tang dan cac phan tu tren dong k 
};
#endif