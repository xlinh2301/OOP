// Viet chuong tr�nh nhap ho t�n, diem to�n, diem van cua mot hoc sinh. T�nh diem trung b�nh v� xuat ket qua.
#include <iostream>
#include <string.h>
using namespace std;
typedef struct HocSinh{
	string hoten;
	float toan, van; // diem toan va diem van
}HS;

int main() {
	HS a;
	cout <<"Nhap ho ten: ";
	getline(cin, a.hoten);
	cout << "Nhap diem toan: ";
	cin >> a.toan;
	cout << "Nhap diem van: ";
	cin >> a.van;
	float gt = (a.toan + a.van)/2;
	cout << "Diem trung binh la: "<< gt;
	return 0;
}
