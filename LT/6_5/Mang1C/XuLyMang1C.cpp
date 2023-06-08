#include "Mang1C.h"
MANG1C::~MANG1C(){
	n = 0;
	delete[]a;
	a = NULL;
	cout << "Da huy mang 1 chieu\n";
}
//MANG1C::MANG1C() : n(0), a(NULL) {}
//MANG1C::MANG1C(int n)
//{
//	while (n <= 0)
//	{
//		cout << "Nhap lai n > 0: ";
//		cin >> n;
//	}
//	this->n = n;
//	a = new int[n];
//	for (int i = 0; i < n; i++) {
//		a[i] = 0;
//	}
//}
MANG1C::MANG1C(int n, int m) 
{
	if (n == 0) {
		this->n = 0;
		a = NULL;
	}
	else {
		while (n <= 0)
		{
			cout << "Nhap lai n > 0: ";
			cin >> n;
		}
		this->n = n;
		a = new int[n];
		for (int i = 0; i < n; i++) {
			a[i] = m;
		}
	}
}
MANG1C::MANG1C(const MANG1C& m) {
	n = m.n;
	a = new int[n];
	for (int i = 0; i < n; i++)
		a[i] = m.a[i];
}
int MANG1C::GetN(){
	return n;
}
int* MANG1C::GetA(){
	return a;
}
istream& operator>>(istream& is, MANG1C& m){
	if (m.a != NULL)
		m.~MANG1C();
	do{
		cout << "Nhap n>0: ";
		is >> m.n;
	} while (m.n <= 0);
	m.a = new int[m.n];
	for (int i = 0; i < m.n; i++) {
		cout << "a[" << i << "] = ";
		is >> m.a[i];
	}
	return is;
}
ostream& operator<<(ostream& os, const MANG1C& m){
	if (m.a == NULL)
		os << "Mang rong";
	else 
		for (int i = 0; i < m.n; i++) {
			os << m.a[i] << " ";
		}
	return os;
}
MANG1C& MANG1C::operator=(const MANG1C& m) {
	n = m.n;
	a = new int[n];
	for (int i = 0; i < n; i++)
		a[i] = m.a[i];
	return *this;
}
