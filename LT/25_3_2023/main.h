#pragma once
#include <iostream>
using namespace std;
#ifdef _DIEM
class DIEM{
	private:
		double x, y;
	public:
		~DIEM();
		DIEM(double  = 0, double = 0);
		double GetX();
		double GetY();
		void SetX(double);
		void SetY(double);
		void SetXY(double, double);
		void Nhap();
		void Xuat();
		void DiChuyen(double, double);
		bool KiemTraTrung(const DIEM&);
		double TinhKhoangCach(const DIEM&);
		DIEM TimDoiXung();
};
#endif
