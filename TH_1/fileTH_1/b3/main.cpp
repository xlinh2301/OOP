#include <iostream>
#include <math.h>
using namespace std;

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}
typedef struct{
	int t; // tu
	int m; // mau
}PS;
PS cong(PS a, PS b){
	PS kq;
	kq.t = a.t*b.m + b.t*a.m;
	kq.m = a.m*b.m;
	int ucln = gcd(kq.t,kq.m);
	kq.t /= ucln;
	kq.m /= ucln;
	return kq;
}
PS tru(PS a, PS b){
	PS kq;
	kq.t = a.t*b.m - b.t*a.m;
	kq.m = a.m*b.m;
	int ucln = gcd(kq.t,kq.m);
	kq.t /= ucln;
	kq.m /= ucln;
	return kq;
}
PS nhan(PS a, PS b){
	PS kq;
	kq.t = a.t*b.t;
	kq.m = a.m*b.m;
	int ucln = gcd(kq.t,kq.m);
	kq.t /= ucln;
	kq.m /= ucln;
	return kq;
}
PS chia(PS a, PS b){
	PS kq;
	kq.t = a.t*b.m;
	kq.m = a.m*b.t;
	int ucln = gcd(kq.t,kq.m);
	kq.t /= ucln;
	kq.m /= ucln;
	return kq;
}
int main() {
    PS a,b;
    cout << "Nhap tu so phan so thu nhat: ";
    cin >> a.t;
	do{
	    cout << "Nhap mau so phan so thu nhat: ";
	    cin >> a.m;
	}while(a.m == 0);    
    cout << "Nhap tu so phan so thu hai: ";
    cin >> b.t;
    do{
	    cout << "Nhap mau so phan so thu hai: ";
	    cin >> b.m;
	}while(b.m == 0);
	PS kq;
	kq.t = 0;
	kq.m = 1;
	char pheptinh;
	cout << "Nhap phep tinh: ";
	cin >> pheptinh;
    switch(pheptinh){
    	case '+':
    	{
    		kq = cong(a,b);
    		break;
		}
		case '-':
    	{
    		kq = tru(a,b);
    		break;
		}
		case '*':
    	{
    		kq = nhan(a,b);
    		break;
		}
		case '/':
    	{
    		kq = chia(a,b);
    		break;
		}
		
	}
	if(kq.m < 0) 
		cout << "Ket qua phan so la: "<< -kq.t<<"/"<<-kq.m;
	else if(kq.m <0 && abs(kq.m) == abs(kq.t))
		cout << "Ket qua phan so la: "<< -kq.t;
	else if(kq.m >0 && abs(kq.m) == abs(kq.t))
		cout << "Ket qua phan so la: "<< kq.t;
	else if(kq.m == 1)
		cout <<"Ket qua phan so la: "<<kq.t;
	else if(kq.m == -1)
		cout <<"Ket qua phan so la: "<<-kq.t;
	else if(kq.m == 0)
		cout <<"Phan so khong ton tai";
	else
		cout << "Ket qua phan so la: "<< kq.t<<"/"<<kq.m;
    return 0;
}

