#include "ClassPhanSo.h"

int main() {
	PHANSO ps1, ps2(-3), ps3(-2, 5), A;
	cout << "ps1 = " << ps1 << endl << "ps2 = " << ps2 << endl << "ps3 = " << ps3 << endl;
	cin >> ps1 >> ps2 >> ps3;
	A = (PHANSO)1 + ++ps2 + ps3-- - (PHANSO)2;
	cout << "ps1 = " << ps1 << endl << "ps2 = " << ps2 << endl << "ps3 = " << ps3 << endl;
	PHANSO B = ps3 + (PHANSO)2;
	cout << "B = " << B << endl;
	if (A == B)
		cout << A << " == " << B << endl;
	else
		cout << A << " != " << B << endl;
	double C = (double)A + 0.5;
	cout << "C = " << C << endl;
	return 0;
 }