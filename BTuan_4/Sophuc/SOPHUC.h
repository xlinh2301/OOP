#pragma once
#ifndef _SOPHUC
#include <iostream>
using namespace std;

class SOPHUC {
private:
	double a; // phanthuc
	double b; // phan ao
public:
	~SOPHUC();
	SOPHUC();
	SOPHUC(double);
	SOPHUC(double, double);
	SOPHUC(const SOPHUC&);
	double GetA() {
		return a;
	}
	double GetB() {
		return b;
	}
	void SetA(double a) {
		this->a = a;
	}
	void SetSp(double a, double b) {
		this->a = a;
		this->b = b;
	}
	friend istream& operator>>(istream&, SOPHUC&);
	friend ostream& operator<<(ostream&, const SOPHUC&);
	friend SOPHUC operator+(const SOPHUC&, const SOPHUC&);
	friend SOPHUC operator-(const SOPHUC&, const SOPHUC&);
	friend SOPHUC operator*(const SOPHUC&, const SOPHUC&);
	friend SOPHUC operator/(const SOPHUC&, const SOPHUC&);
	friend bool operator==(const SOPHUC&, const SOPHUC&);
	friend bool operator!=(const SOPHUC&, const SOPHUC&);
	friend bool operator<=(const SOPHUC&, const SOPHUC&);
	friend bool operator<(const SOPHUC&, const SOPHUC&);
	friend bool operator>=(const SOPHUC&, const SOPHUC&);
	friend bool operator>(const SOPHUC&, const SOPHUC&);
};
#endif // !_SOPHUC