#ifndef _DIEM
#include <bits/stdc++.h>
#define epsilon 0.0000000000001
using namespace std;

class DIEM {
protected:
	double x, y;
	static int dem;
public:
	~DIEM() {
		cout << "Da huy 1 diem => Con " << --dem << " diem\n";
	}
	DIEM(double x = 0, double y = 0) : x(x), y(y) {
		cout << "Da tao 1 diem => Co " << ++dem << " diem 2C\n";
	}
	DIEM(const DIEM& d) : x(d.x), y(d.y) {
		cout << "Da tao 1 diem => Co " << ++dem << " diem 2C\n";
	}
	void SetX(double x) {
		this->x = x;
	}
	void SetY(double y) {
		this->y = y;
	}
	void SetXY(double x, double y) {
		this->x = x;
		this->y = y;
	}
	double GetX() const
	{
		return x;
	}
	double GetY() const
	{
		return y;
	}
	int GetDem()
	{
		return dem;
	}
	void Nhap() {
		cout << "Nhap hoanh do: "; cin >> x;
		cout << "Nhap tung do: "; cin >> y;
	}
	void Xuat() const
	{
		cout << x << ", " << y;
	}
	void DiChuyen(double dx, double dy)
	{
		x += dx;
		y += dy;
	}
	bool KiemTraTrung(const DIEM& d) const
	{
		return this->x == d.x && this->y == d.y;
	}
	double TinhKhoangCach(const DIEM& d) const
	{
		return sqrt(pow(x - d.x, 2) + pow(y - d.y, 2));
	}
	DIEM TimDoiXung() const
	{
		return DIEM(-x == 0 ? x : -x, -y == 0 ? y : -y);
	}
	bool KiemTraTamGiacHopLe(const DIEM& d1, const DIEM& d2) const
	{
		double a = this->TinhKhoangCach(d1);
		double b = d1.TinhKhoangCach(d2);
		double c = d2.TinhKhoangCach(*this);
		return a > 0 && b > 0 && c > 0 && a + b > c && b + c > a && c + a > b;
	}
	double TinhChuViTamGiac(const DIEM& d1, const DIEM& d2) const
	{
		double a = this->TinhKhoangCach(d1);
		double b = d1.TinhKhoangCach(d2);
		double c = d2.TinhKhoangCach(*this);

		return a + b + c;
	}
	double TinhDienTichTamGiac(const DIEM& d1, const DIEM& d2) const
	{
		double a = TinhKhoangCach(d1);
		double b = d1.TinhKhoangCach(d2);
		double c = d2.TinhKhoangCach(*this);
		double p = (a + b + c) / 2;
		return sqrt(p * (p - a) * (p - b) * (p - c));
	}
	string PhanLoaiTamGiac(const DIEM& d1, const DIEM& d2) const
	{
		double a = TinhKhoangCach(d1);
		double b = d1.TinhKhoangCach(d2);
		double c = d2.TinhKhoangCach(*this);
		string chuoikq = "";
		if (!KiemTraTamGiacHopLe(d1, d2))
			chuoikq = "TG khong hop le";
		else if (a == b && b == c)
			chuoikq = "TG deu";
		else if (a == b || b == c || c == a)
			if (abs(a * a + b * b - c * c) <= epsilon || abs(a * a + c * c - b * b) <= epsilon || abs(b * b + c * c - a * a <= epsilon))
				chuoikq = "TG vuong can";
			else
				chuoikq = "TG can";
		else if (abs(a * a + b * b - c * c) <= epsilon || abs(a * a + c * c - b * b) <= epsilon || abs(b * b + c * c - a * a <= epsilon))
			chuoikq = "TG vuong";
		return chuoikq;
	}
	friend istream& operator>>(istream& is, DIEM& d) {
		cout << "Nhap hoanh do: ";
		is >> d.x;
		cout << "Nhap tung do: ";
		is >> d.y;
		return is;
	}
	friend ostream& operator<<(ostream& os, DIEM& d) {
		os << d.x << ", " << d.y;
		return os;
	}
};
int DIEM::dem = 0;
#endif
