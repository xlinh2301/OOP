#pragma once
#ifndef _MANG1C
#define _MANG1C
#include <iostream>

using namespace std;

class MANG1C {
private:
	int n;
	int* a;
public:
	~MANG1C();
	/*MANG1C();
	MANG1C(int);
	MANG1C(int, int);*/
	MANG1C(int = 0, int = 0);
	MANG1C(const MANG1C&);
	int GetN();
	int* GetA();
	friend istream& operator>>(istream&, MANG1C&);
	friend ostream& operator<<(ostream&, const MANG1C&);
	MANG1C& operator=(const MANG1C&);
};
#endif 
