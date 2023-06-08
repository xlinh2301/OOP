#include <iostream>
using namespace std;

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

int main() {
    int tu, mau;
    cout << "Nhap tu so: ";
    cin >> tu;
    do{
    	cout << "Nhap mau so: ";
    	cin >> mau;
	}while(mau == 0);
    
    int ucln = gcd(tu, mau);
    tu /= ucln;
    mau /= ucln;
    if(mau < 0) 
		cout << "Phan so sau khi rut gon: " << -tu << "/" << -mau << endl;
    else 
		cout << "Phan so sau khi rut gon: " << tu << "/" << mau << endl;
    return 0;
}

