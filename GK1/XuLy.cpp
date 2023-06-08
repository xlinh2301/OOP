#include "Money.h"
int MONEY::dem = 0;
MONEY::~MONEY() {
	cout << "Da huy 1 money => Con " << --dem << " money\n";
}
MONEY::MONEY() : dollar(0), cent(0) {
	dem++;
}
MONEY::MONEY(double dollar) : dollar(dollar), cent(0) {
	dem++;
}
MONEY::MONEY(double dollar, double cent) {
	this->dollar = dollar;
	this->cent = cent;
	if (cent >= 100) {
		dollar += (int)(cent/100) ;
		cent = cent - (int)(cent / 100) * 100;
	}
	dem++;
}
MONEY::MONEY(const MONEY& m) : dollar(m.dollar), cent(m.cent) {
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
	if (m.cent >= 100) {
		m.dollar += (int)(m.cent / 100);
		m.cent = m.cent - (int)(m.cent / 100) * 100;
	}
	if (m.dollar < 0 || m.cent < 0) os << "So tien khong hop le !\n";
	else
		os << "So tien la: " << m.dollar << " dollars " << m.cent << " cents" << endl;
	return os;
}
long long MONEY::ChuyenMoneySangVND(MONEY& m, double tygia) {
	long double VND = (m.GetDollar() * tygia) + (m.GetCent() * tygia / 100);
	return VND;
}
MONEY operator++(MONEY& money) {
	money.cent++;
	if (money.cent >= 100) {
		money.dollar += (int)(money.cent / 100);
		money.cent = money.cent - (int)(money.cent / 100) * 100;
	}
	return money;
}