#include "HINHTRON.h"

int main() {
	cout << "Co tat ca " << HT::GetDem() << " HT\n";
	HT htron;
	htron.Nhap();
	cout << "Co tat ca " << HT::GetDem() << " HT\n";
	htron.Xuat();
	cout << "Chu vi cua hinh tron la: " << htron.TinhChuVi() << endl;
	cout << "Dien tich cua hinh tron la: " << htron.TinhDienTich() << endl;
	cout << "----------------------------------------------------\n";
	double dx, dy;
	cout << "Nhap khoang cach di chuyen theo truc x: ";
	cin >> dx;
	cout << "Nhap khoang cach di chuyen theo truc y: ";
	cin >> dy;
	htron.DiChuyen(dx, dy);
	cout << "Sau khi di chuyen:\n";
	htron.Xuat();
	cout << "Chu vi cua hinh tron la: " << htron.TinhChuVi() << endl;
	cout << "Dien tich cua hinh tron la: " << htron.TinhDienTich() << endl;
	cout << "----------------------------------------------------\n";
}