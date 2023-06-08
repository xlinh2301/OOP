#include <iostream>
#include <math.h>
using namespace std;
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
		bool KiemTraTrung(DIEM&);
		double TinhKhoangCach(DIEM&);
		DIEM TimDoiXung();
		
};
DIEM::~DIEM(){
	cout <<"Da huy 	1 DIEM\n";
}
DIEM::DIEM(double x, double y){
	this->x = x;
	this->y = y;
}
double DIEM::GetX(){
	return x;
}
double DIEM::GetY(){
	return y;
}
void DIEM::SetX(double x){
	this->x = x;
}
void DIEM::SetY(double y){
	this->y = y;
}
void DIEM::SetXY(double x, double y){
	this->x = x;
	this->y = y;
}
void DIEM::Nhap(){
	cout << "Nhap hoanh do: ";
	cin >> x;
	cout << "Nhap tung do: ";
	cin >> y;
}
void DIEM::Xuat(){
	cout << x << ", " << y;
}
void DIEM::DiChuyen(double dx, double dy){
	x += dx;
	y += dy;
}
bool DIEM::KiemTraTrung(DIEM &d){
	return this->x == d.x && this->y == d.y;
}
double DIEM::TinhKhoangCach(DIEM& d){
	return sqrt(pow(x - d.x, 2) + pow(y -d.y, 2));
}
DIEM DIEM::TimDoiXung(){
	return DIEM(-x == 0 ? x:-x , -y == 0 ? 0 : -y);
}
int main(){
	DIEM d1, *d2 = new DIEM(2, -4.5);
	cout << "d1("; d1.Xuat(); cout <<")\n";
	cout << "d2("; d2->Xuat(); cout <<")\n";
	cout << "---------------------------------\n";
	d1.SetX(-3.5);
	cout << "Toa do d1 sau khi set x = -3.5 la: \n";
	cout << "d1("; d1.Xuat(); cout << ")\n";
	cout << "---------------------------------\n";
	cout << "Nhap lai toa do d2: \n";
	d2->Nhap();
	cout << "Toa do d2 sau khi nhap lai la: \n";
	cout << "d2("; d2->Xuat(); cout << ")\n";
	cout << "---------------------------------\n";
	d1.DiChuyen(2, -4.5);
	cout << "Toa do d1 sau khi di chuyen (dx = 2, dy =-4.5) la: \n";
	cout << "d2("; d2->Xuat(); cout <<")\n";
	cout << "---------------------------------\n";
	if(d2->KiemTraTrung(d1)){
		cout << "d2 trung d1\n";
	}
	else 
		cout << "d2 khong trung d1\n";
	cout << "---------------------------------\n";
	cout <<"K/c tu d1 den d2 la: " << d1.TinhKhoangCach(*d2) << endl;
	cout << "---------------------------------\n";
	DIEM ddx = d1.TimDoiXung();
	cout << "Toa do diem doi xung ddx voi d1 qua goc toa do la: \n";
	cout << "ddx_d1("; ddx.Xuat(); cout << ")\n";
	cout << "---------------------------------\n";
	delete d2;
	return 0;
}
