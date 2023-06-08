#include "Sophuc.h"

Sophuc::Sophuc(double  a, double b) {
	this->a = a;
	this->b = b;
}
void Sophuc::Nhap() {
	cout << "Nhap phan thuc a: ";
	cin >> a;
	cout << "Nhap phan ao b: ";
	cin >> b;
}
void Sophuc::Xuat() const{
	cout << "(" << a << ", " << b << ")\n";
}
Sophuc Sophuc::Cong(const Sophuc& x) const{
	//Sophuc kq(a + x.a, b + x.b);
	Sophuc kq(*this); // su dung ham khoi tao sao chep	
	kq.a += x.a;
	kq.b += x.b;
	return kq;
}
Sophuc Sophuc::Tru(const Sophuc& x) const{
	//Sophuc kq(a - x.a, b - x.b);
	Sophuc kq(*this);
	kq.a -= x.a;
	kq.b -= x.b;
	return kq;
}
Sophuc Sophuc::Nhan(const Sophuc& x) const{
	// A * B = (a1*b1 – a2*b2, a1*b2+a2*b1)
	// a1  = a, a2 = b , b1 = x.a, b2 = x.b
	/*Sophuc kq(a*x.a - b*x.b, a*x.b + b*x.a);*/
	Sophuc kq(*this);
	kq.a = a * x.a - b * x.b;
	kq.b = a * x.b + b * x.a;
	return kq;
}
Sophuc Sophuc::Chia(const Sophuc& x) const{
	/*Sophuc kq((a*x.a + b*x.b)*1.0/(x.a*x.a + x.b*x.b)*1.0, (b*x.a - a*x.b)*1.0 / (x.a * x.a + x.b * x.b));*/
	Sophuc kq;
	double denominator = x.a * x.a + x.b * x.b;
	kq.a = (a * x.a + b * x.b) / denominator;
	kq.b = (b * x.a - a * x.b) / denominator;
	return kq;
}
int main() {
	Sophuc A(0,0), B(0,0), C(0,0);
	cout << "Nhap so phuc A: \n";
	A.Nhap();
	cout << "Nhap so phuc B: \n";
	B.Nhap();
	C = A.Cong(B);
	cout << "Tong hai so phuc la: \n";
	C.Xuat();
	C = A.Tru(B);
	cout << "Hieu hai so phuc la: \n";
	C.Xuat();
	C = A.Nhan(B);
	cout << "Tich hai so phuc la: \n";
	C.Xuat();
	C = A.Chia(B);
	cout << "Thuong hai so phuc la: \n";
	C.Xuat();
	return 0;
}