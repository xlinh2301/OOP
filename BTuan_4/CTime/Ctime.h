#pragma once
#ifndef _CTime
#include <iostream>
using namespace std;

class CTime {
private:
	int hour, min, sec;
public:
	~CTime();
	CTime();
	CTime(int);
	CTime(int, int);
	CTime(int, int, int);
	friend istream& operator>>(istream&, CTime&);
	friend ostream& operator<<(ostream&, CTime&);
	friend CTime operator+(const CTime&, const CTime&);
	friend CTime operator-(const CTime&, const CTime&);
	CTime operator++();
	CTime operator--();
};

#endif // !_CTime

