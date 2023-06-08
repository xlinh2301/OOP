#ifndef _MaTran
#define _MaTran
#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
using namespace std;

class MATRAN{
private:
    int n; 
    int **p;
public:
    MATRAN(); // thiet lap khong tham so
    MATRAN(int); // thiet lap truyen 2 tham so d, c
    MATRAN(const MATRAN&); // thiet lap sao chep
    ~MATRAN(); // HUY
    void Nhap();
    void Xuat();
    void PhatSinhMangNgauNhien(int minValue, int maxValue);
    // Liệt kê giá trị các phần tử lẻ nằm trên đường chéo chính của ma trận.
    void LietKe();
    //Đếm số lượng các phần tử có ký số cuối là 3 nằm trên đường chéo phụ của ma trận.
    int Dem();
    //Kiểm tra xem có tồn tại phần tử âm ở nửa mảng vuông phía trên đường chéo chính hay không?
    bool KtraAm();
    //Tìm phần tử chẵn đầu tiên ở nửa mảng vuông phía dưới đường chéo phụ của ma trận.
    int TimPhanTuChanDauTien();
    void SapXepGiamDan(); // sx tang dan cac phan tu tren dong k 
};
#endif