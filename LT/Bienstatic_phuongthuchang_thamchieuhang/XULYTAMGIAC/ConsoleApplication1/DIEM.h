#pragma once
#ifndef _DIEM
#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;
#define epsilon 0.0000000000000000001
class DIEM{
private:
	double x, y;
	static int dem;
public:
	~DIEM();
	DIEM();
	DIEM(double);
	DIEM(double = 0, double = 0);
	DIEM(const DIEM&);
	static int GetDem();
	double GetX() const;
	double GetY() const;
	void SetX(double);
	void SetY(double);
	void SetXY(double, double);
	void Nhap();
	void Xuat() const;
	void DiChuyen(double, double);
	bool KiemTraTrung(const DIEM&) const;
	double TinhKhoangCach(const DIEM&) const;
	DIEM TimDoiXung() const;
	bool KiemTraTamGiacHopLe(const DIEM&, const DIEM&) const;
	bool KiemTraTamGiacHopLe(double, double, double) const;
	double TinhChuViTamGiac(const DIEM&, const DIEM&) const;
	double TinhDienTichTamGiac(const DIEM&, const DIEM&) const;
	string PhanLoaiTamGiac(const DIEM&, const DIEM&) const;
}; 
#endif 
