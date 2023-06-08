#pragma once
#ifndef _Money
#include <iostream>
using namespace std;

class MONEY {
private:
	double dollar, cent;
	static int dem;
public:
	~MONEY();
	MONEY();
	MONEY(double);
	MONEY(double, double);
	static int GetDem();
	double GetDollar();
	double GetCent();
	void SetDollar(double);
	void SetCent(double);
	void SetMoney(double, double);
	friend istream& operator>>(istream&, MONEY&);
	friend ostream& operator<<(ostream&, MONEY&);
	friend double ChuyenMoneySangVND(MONEY&,double);
	friend MONEY operator++(MONEY&);
};
#endif // !_Money
