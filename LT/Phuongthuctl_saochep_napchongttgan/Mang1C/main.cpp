#include "Mang1C.h"
#include "Mang1C.cpp"

int main(){
    int n;
    cout << "Nhap so luong phan tu cua mang: ";
    cin >> n;
    Mang1C m1(n);
    m1.Nhap();
    m1.Xuat();
    m1.LietKeSNT();
    return 0;
}