#include "Diem.h"
int main() {
	cout << "Co " << DIEM::GetDem() << " diem\n";
	DIEM d1, * d2 = new DIEM(3, 0), d3(0, 3);
	cout << "Co " << DIEM::GetDem() << " diem\n";
	cout << "d1("; d1.Xuat(); cout << ")\n";
	cout << "d2("; d2->Xuat(); cout << ")\n";
	cout << "d3("; d3.Xuat(); cout << ")\n";
	cout << "---------------------------------\n";
	if (d1.KiemTraTamGiacHopLe(*d2, d3)) {
		cout << "Phan loai: " << d1.PhanLoaiTamGiac(*d2, d3) << endl;
		cout << "Chu vi TG qua 3 diem d1, d2, d3 la: " << d1.TinhChuViTamGiac(*d2, d3) << endl;
		cout << "Dien tich TG qua 3 diem d1, d2, d3 la: " << d1.TinhDienTichTamGiac(*d2, d3) << endl;
	}
	else
		cout << "3 diem d1, d2, d3 khong tao thanh tam giac\n";
	delete d2;
} 