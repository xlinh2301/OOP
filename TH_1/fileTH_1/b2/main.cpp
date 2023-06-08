//Viet chuong trình nhap vào hai phân so, tìm phân so lon nhat và xuat ket qua.
#include <iostream>
#include <math.h>
using namespace std;

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}
typedef struct PhanSo{
	int mau;
	int tu;	
}PS;
int main() {
    PS tu, mau;
    PS x, y;
    cout << "Nhap phan so thu nhat: "<<endl;
    cout <<"Nhap tu so: ";
    cin >> x.tu;
    do{
    	cout << "Nhap mau so: ";
    	cin >> x.mau;
	}while(x.mau == 0);
	int ucln1 = gcd(x.tu, x.mau);
	x.tu /= ucln1;
	x.mau /= ucln1;
	cout << "Nhap phan so thu hai: "<<endl;
    cout <<"Nhap tu so: ";
    cin >> y.tu;
    do{
    	cout << "Nhap mau so: ";
    	cin >> y.mau;
	}while(y.mau == 0);
	int ucln2 = gcd(x.tu, x.mau);
	y.tu /= ucln2;
	y.mau /= ucln2;
	int tumax, maumax;
    if(x.tu*1.0 / x.mau > y.tu*1.0/y.mau) {
    	tumax = x.tu;
		maumax = x.mau;	
	}else{
		tumax = y.tu;
		maumax = y.mau;	
	}
	if(maumax <0 && abs(maumax) == abs(tumax)) 
		cout << "Phan so lon nhat da rut gon la: "<<-tumax;
	else if(maumax < 0) 
		cout << "Phan so lon nhat da rut gon la: "<<-tumax <<"/"<<-maumax;
	else if(maumax > 0 && abs(maumax) == abs(tumax)) 
		cout << "Phan so lon nhat da rut gon la: "<<tumax;
	else if(maumax == 1) 
		cout << "Phan so lon nhat da rut gon la: "<<tumax;
	else if(maumax == -1) 
		cout << "Phan so lon nhat da rut gon la: "<<-tumax;
	else 
		cout << "Phan so lon nhat da rut gon la: "<<tumax <<"/"<<maumax;
    
    return 0;
}

