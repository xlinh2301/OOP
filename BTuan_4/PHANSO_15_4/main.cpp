#include "PHANSO.h"
#include "PHANSO.cpp"
int main() {
	PHANSO ps1, ps2(-3), ps3(2, 5), A;
	cout << "ps1 = " << ps1 << endl << "ps2 = " << ps2 << endl << "ps3 = " << ps3 << endl;
	cout << "Nhap lai ps1, ps2, ps3:\n";
	cin >> ps1 >> ps2 >> ps3;
	A = 1 + ps1;
	cout << A;
}
