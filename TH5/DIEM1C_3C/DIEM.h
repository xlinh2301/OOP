#pragma once
#ifndef _DIEM
#include <bits/stdc++.h>
using namespace std;

class DIEM {
protected:
	double x, y;
	static int dem;
public:
	~DIEM();
	DIEM();
	DIEM(double);
	DIEM(double, double);
	DIEM(const DIEM&);
	void SetX(double);
	void SetY(double);
	void SetXY(double, double);
	double GetX() const;
	double GetY() const;
	static int GetDem();
	void Nhap();
	void Xuat() const;
	void DiChuyen(double, double);
	bool KiemTraTrung(const DIEM&) const;
	double TinhKhoangCach(const DIEM&) const;
	DIEM TimDoiXung() const;
	bool KiemTraTamGiacHopLe(const DIEM&, const DIEM&) const;
	double TinhChuViTamGiac(const DIEM&, const DIEM&) const;
	double TinhDienTichTamGiac(const DIEM&, const DIEM&) const;
	string PhanLoaiTamGiac(const DIEM&, const DIEM&) const;
	friend istream& operator>>(istream&, DIEM&);
	friend ostream& operator<<(ostream&, DIEM&);
};
#endif
