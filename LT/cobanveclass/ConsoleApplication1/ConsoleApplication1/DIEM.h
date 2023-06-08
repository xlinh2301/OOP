#pragma once
#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;
#ifndef _DIEM
class DIEM {
private:
	double x, y;
	static int Demdiem;

public:
	//~DIEM();
	/*DIEM();
	DIEM(double);
	DIEM(double, double);*/
	DIEM(double = 0, double = 0);
	/*void KhoiTao();
	void KhoiTao(double);
	void KhoiTao(double, double);*/
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
	double TinhChuViTamGiac(const DIEM&, const DIEM&) const;
	double TinhDienTichTamGiac(const DIEM&, const DIEM&) const;
	string PhanLoaiTamGiac(const DIEM&, const DIEM&) const;
};
#endif 
