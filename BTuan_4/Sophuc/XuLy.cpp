#include "SOPHUC.h"
SOPHUC::~SOPHUC() {}
SOPHUC::SOPHUC() : a(0), b(0) {}
SOPHUC::SOPHUC(double a) : a(a), b(0) {}
SOPHUC::SOPHUC(double a, double b) : a(a), b(b) {}
SOPHUC::SOPHUC(const SOPHUC& sp): a(sp.a), b(sp.b) {}
istream& operator>>(istream& is, SOPHUC& sp) {
	cout << "Nhap phan thuc: ";
	is >> sp.a;
	cout << "Nhap phan ao: ";
	is >> sp.b;
	return is;
}
ostream& operator<<(ostream& os, const SOPHUC& sp) {
	if (sp.b < 0) {
		os << sp.a << " - " << -sp.b << "i\n";
	}
	else if (sp.b == 0) {
		os << sp.a << endl;
	}
	else if (sp.b == 1) {
		os << sp.a << " + i\n";
	}
	else if (sp.b == -1) {
		os << sp.a << " - i\n";
	}
	else
		os << sp.a << " + " << sp.b << "i\n";
	return os;
}
SOPHUC operator+(const SOPHUC& sp1, const SOPHUC& sp2) {
	return SOPHUC(sp1.a + sp2.a, sp1.b + sp2.b);
}
SOPHUC operator-(const SOPHUC& sp1, const SOPHUC& sp2) {
	return SOPHUC(sp1.a - sp2.a, sp1.b - sp2.b);
}
SOPHUC operator*(const SOPHUC& sp1, const SOPHUC& sp2) {
	return SOPHUC(sp1.a * sp2.a - sp1.b * sp2.b, sp1.a * sp2.b + sp1.b * sp2.a);
}
SOPHUC operator/(const SOPHUC& sp1, const SOPHUC& sp2) {
	return SOPHUC((sp1.a * sp2.a + sp1.b * sp2.b) / (sp2.a * sp2.a + sp2.b * sp2.b), (sp2.a * sp1.b - sp2.b * sp1.a) / (sp2.a * sp2.a + sp2.b * sp2.b));
}
bool operator==(const SOPHUC& sp1, const SOPHUC& sp2) {
	if (sp1.a == sp2.a && sp1.b == sp2.b)
		return true;
	return false;
}
bool operator!=(const SOPHUC& sp1, const SOPHUC& sp2) {
	if (sp1.a != sp2.a || sp1.b != sp2.b) {
		return true;
	}
	return false;
}
bool operator<=(const SOPHUC& sp1, const SOPHUC& sp2) {
	if (sp1.a < sp2.a)
		return true;
	else if (sp1.a == sp2.a) {
		if (sp1.b < sp2.b)
			return true;
		else
			return false;
	}
	else
		return true;
	return false;

}
bool operator<(const SOPHUC& sp1, const SOPHUC& sp2) {
	if (sp1.a < sp2.a)
		return true;
	else if (sp1.a == sp2.a) {
		if (sp1.b < sp2.b)
			return true;
		else
			return false;
	}
	return false;
}
bool operator>=(const SOPHUC& sp1, const SOPHUC& sp2) {
	if (sp1.a > sp2.a)
		return true;
	else if (sp1.a == sp2.a) {
		if (sp1.b > sp2.b)
			return true;
		else
			return false;
	}
	else
		return true;
	return false;
}
bool operator>(const SOPHUC& sp1, const SOPHUC& sp2) {
	if (sp1.a > sp2.a)
		return true;
	else if (sp1.a == sp2.a) {
		if (sp1.b > sp2.b)
			return true;
		else
			return false;
	}
	return false;
}