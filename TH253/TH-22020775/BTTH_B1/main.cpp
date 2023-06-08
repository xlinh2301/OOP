/*
	Thiet lap lop PhanSo de bieu dien kh�i niem ph�n so voi hai th�nh ph?n d? li?u
	t? s?, m?u s? v� c�c h�m th�nh ph?n c?ng, tr?, nh�n, chia hai ph�n s?, c�c
	h�m th�nh ph?n xu?t, nh?p, d?nh gi� tr? cho ph�n s?. Vi?t chuong tr�nh cho
	ph�p nh?p v�o hai ph�n s?, in ra k?t qu? c�c ph�p to�n c?ng, tr?, nh�n, chia hai
	ph�n s? k? tr�n.

*/
#include <iostream>
#include <math.h>
using namespace std;

class PS {
private:
	int t;
	int m;
public:
	void KhoiTao();
	void Nhap();
	void Xuat();
	int gcd(int, int);
	PS cong(PS, PS);
	PS tru(PS, PS);
	PS nhan(PS, PS);
	PS chia(PS , PS);
};
void PS::KhoiTao() {
	this->t = 0;
	this->m = 1;
}
void PS::Nhap() {
	cout << "Nhap tu so phan so: ";
	cin >> t;
	do {
		cout << "Nhap mau so phan so: ";
		cin >> m;
	} while (m == 0);
}
void PS::Xuat(){
	if (m < 0)
		cout << "Ket qua phan so la: " << -t << "/" << -m;
	else if (m < 0 && abs(m) == abs(t))
		cout << "Ket qua phan so la: " << -t;
	else if (m > 0 && abs(m) == abs(t))
		cout << "Ket qua phan so la: " << t;
	else if (m == 1)
		cout << "Ket qua phan so la: " << t;
	else if (m == -1)
		cout << "Ket qua phan so la: " << -t;
	else if (m == 0)
		cout << "Phan so khong ton tai";
	else
		cout << "Ket qua phan so la: " << t << "/" << m;
}
int PS::gcd(int a, int b) {
	if (b == 0) {
		return a;
	}
	return gcd(b, a % b);
}
PS PS::cong(PS a, PS b) {
	PS kq;
	kq.t = a.t * b.m + b.t * a.m;
	kq.m = a.m * b.m;
	int ucln = gcd(kq.t, kq.m);
	kq.t /= ucln;
	kq.m /= ucln;
	return kq;
}
PS PS::tru(PS a, PS b){
    PS kq;
    kq.t = a.t * b.m - b.t * a.m;
    kq.m = a.m * b.m;
    int ucln = gcd(kq.t, kq.m);
    kq.t /= ucln;
    kq.m /= ucln;
    return kq;
}
PS PS::nhan(PS a, PS b){
    PS kq;
    kq.t = a.t * b.t;
    kq.m = a.m * b.m;
    int ucln = gcd(kq.t, kq.m);
    kq.t /= ucln;
    kq.m /= ucln;
    return kq;
}
PS PS::chia(PS a, PS b){
    PS kq;
    kq.t = a.t * b.m;
    kq.m = a.m * b.t;
    int ucln = gcd(kq.t, kq.m);
    kq.t /= ucln;
    kq.m /= ucln;
    return kq;
}

int main() {
	PS a, b, c;
	c.KhoiTao();
	a.Nhap();
	b.Nhap();
	PS kq;
	char pheptinh;
	cout << "Nhap phep tinh: ";
	cin >> pheptinh;
	switch (pheptinh) {
        case '+':
        {
            kq = c.cong(a, b);
            break;
        }
        case '-':
        {
            kq = c.tru(a, b);
            break;
        }
        case '*':
        {
            kq = c.nhan(a, b);
            break;
        }
        case '/':
        {
            kq = c.chia(a, b);
            break;
        }
	}
	kq.Xuat();
	return 0;
}


