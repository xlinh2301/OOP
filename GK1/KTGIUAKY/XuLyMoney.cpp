#include "Money.h"
int MONEY::dem = 0;
MONEY::~MONEY() {
	cout << "Da huy 1 money => Con " << --dem << " money\n";
}
MONEY::MONEY(): dollar(0), cent(0) {
	dem++;
}
MONEY::MONEY(double dollar): dollar(dollar), cent(0) {
	dem++;
}
MONEY::MONEY(double dollar, double cent) {
	this->dollar = dollar;
	this->cent = cent;
	/*if (this->cent >= 100) {
		this->dollar += this->cent / 100;
		this->cent %= 100;
	}*/
	dem++;
}
int MONEY::GetDem() {
	return dem;
}
double MONEY::GetDollar() {
	return dollar;
}
double MONEY::GetCent() {
	return cent;
}
void MONEY::SetDollar(double dollar) {
	this->dollar = dollar;
}
void MONEY::SetCent(double cent) {
	this->cent = cent;
}
void MONEY::SetMoney(double dollar, double cent) {
	this->dollar = dollar;
	this->cent = cent;
}
istream& operator>>(istream& is, MONEY& m) {
	do {
		cout << "Nhap so tien: ";
		is >> m.dollar >> m.cent;
	} while (m.dollar < 0 || m.cent < 0);
	return is;
}
ostream& operator<<(ostream& os, MONEY& m) {
	if (m.dollar < 0 || m.cent < 0) os << "So tien khong hop le !\n";
	else 
		os << "So tien la: " << m.dollar << " dollars " << m.cent << " cents" << endl;
	return os;
}
double ChuyenDollarSangVND(MONEY& m, double tygia) {
	double VND = (m.GetDollar() * 23000) + (m.GetCent() * 230);
	return VND * tygia;
}
MONEY operator++(MONEY& money) {
	money.cent++;
	if (money.cent >= 100) {
		money.dollar++;
		money.cent = 0;
	}
	return money;
}
