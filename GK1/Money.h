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
	MONEY(const MONEY&);
	static int GetDem();
	double GetDollar();
	double GetCent();
	void SetDollar(double);
	void SetCent(double);
	void SetMoney(double, double);
	friend istream& operator>>(istream&, MONEY&);
	friend ostream& operator<<(ostream&, MONEY&);
	static long long ChuyenMoneySangVND(MONEY& m, double tygia);
	friend MONEY operator++(MONEY&);
};
#endif // !_Money