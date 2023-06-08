//– Thuộc tính :
//
//2 hệ số a, b.
//– Phương thức :
//
//Khởi tạo 2 hệ số a, b đều = 0
//Khởi tao hệ số a = 0, b tùy ý
//Khởi tạo hệ số a, b tùy ý
//Nhập 2 hệ số a, b
//Giải phương trình
//Xuất phương trình(hiển thị định dạng PT và kết quả giải PT).
//VD:
//PTB1: 2x - 5 = 0 = > PT có nghiệm x = 2.5
//SV tự xây dựng class PTBac2, khai báo biến có kiểu PTBac1 và gọi phương thức Giải PT Bậc 1 trong trường hợp hệ số a = 0.
#include <iostream>
using namespace std;
class PTB1 {
private:
	double a, b;
public:
	PTB1() {
		this->a = 0;
		this->b = 0;
	}
	PTB1(double b)  {
		this->b = b;
		this->a = 0;
	}
	PTB1(double a, double b) {
		this->a = a;
		this->b = b;
	}
	void Nhap() {
		cout << "Nhap he so a: ";
		cin >> a;
		cout << "Nhap he so b: ";
		cin >> b;
	}
	void giaipt(double a, double b) {
		if (a == 0) cout << "Phuong trinh vo nghiem";
		else if (a == 0 && b == 0) cout << "Phuong trinh vo so nghiem";
		else cout << -b * 1.0 / a;
	}
	void Xuat() {
		cout << "Phuong trinh co dang la: ";
		if(a == 1 && b > 0) cout << "x + " << b << " = 0" << endl;
		else if (a == -1 && b > 0) cout << "-x + " << b << " = 0" << endl;
		else if (a == 1 && b < 0) cout << "x - " << -b << " = 0" << endl;
		else if (a == -1 && b < 0) cout << "-x - " << -b << " = 0" << endl;
		else if (b < 0) cout << a << "x - " << -b << " = 0" << endl;
		else cout << a << "x + " << b << " = 0" << endl;
		cout << "Ket qua phuong trinh la: \n";
		giaipt(a, b);
	}
};
int main() {
	PTB1 x(0, 0);
	x.Nhap();
	x.Xuat();
}