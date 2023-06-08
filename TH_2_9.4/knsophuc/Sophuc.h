#pragma once
#include <iostream>
using namespace std;

#ifndef _SOPHUC_H_
#define _SOPHUC_H_

class Sophuc {
private:
	double a; // phần thực
	double b; // phần ảo
public: 
	Sophuc(double = 0.0 , double = 0.0);	
	void Nhap();
	void Xuat() const;
	Sophuc Cong(const Sophuc&) const;
	Sophuc Tru(const Sophuc&) const;
	Sophuc Nhan(const Sophuc&) const;
	Sophuc Chia(const Sophuc&) const;
};
#endif
