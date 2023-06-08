#include "DIEM.h"
#include "HCN.h"
int HCN::dem = 0;
HCN::~HCN() {
	cout << "Da huy 1 HCN => Con " << --dem << " HCN\n";
}
HCN::HCN(): A(0,0), B(0,0){
	dem++;
}
HCN::HCN(const DIEM& A, const DIEM& B) : A(A), B(B) {
	dem++;
}
HCN::HCN(double xA, double yA, double xB, double yB) : A(xA, xB), B(yA, yB) {
	dem++;
}
int HCN::GetDem() {
	return dem;
}
void HCN::Nhap() {
	cout << "Nhap 2 duong cheo cua HCN:\n";
	A.Nhap();
	B.Nhap();
}
void HCN::Xuat() const{
	cout << "Duong cheo cua HCN di qua 2 diem:\n";
	cout << "A("; A.Xuat(); cout << ") \n";
	cout << "B("; B.Xuat(); cout << ") \n";
}