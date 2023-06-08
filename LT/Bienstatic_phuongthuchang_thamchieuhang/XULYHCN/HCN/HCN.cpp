#include "HCN.h"
int main() {
    cout << "Co tat ca " << HCN::GetDem() << " duong cheo\n";
    HCN hcn;
    cout << "Nhap toa do 2 dinh cua HCN:\n";
    cin >> hcn;
    cout << "Co tat ca " << HCN::GetDem() << " duong cheo\n";
    cout << "Thong tin HCN:\n";
    cout << hcn;

    double dx, dy;
    cout << "Nhap khoang cach di chuyen theo truc x: ";
    cin >> dx;
    cout << "Nhap khoang cach di chuyen theo truc y: ";
    cin >> dy;
    hcn.diChuyen(dx, dy);
    cout << "Sau khi di chuyen:\n";
    cout << hcn;
    cout << "Chu vi cua HCN la: " << hcn.chuVi() << endl;
    cout << "Dien tich cua HCN la: " << hcn.dienTich() << endl;

    return 0;
}