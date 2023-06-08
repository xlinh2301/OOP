#include "DIEM.h"
#include "TamGiac.h"
int main() {
	TAMGIAC tg1;
	int chon;
	do {
		cout << "--------------------------CHUONG TRINH XU LY TAM GIAC----------------------------\n";
		cout << "1. Nhap tam giac \n";
		cout << "2. Xuat tam giac \n";
		cout << "3. Kiem tra tam giac hop le\n";
		cout << "4. Phan loai tam giac\n";
		cout << "5. Tinh chu vi tam giac \n";
		cout << "6. Tim dien tich tam giac\n";
		cout << "0. Thoat CT \n";
		cout << "------------------------------------------------------------------------------\n";
		cout << "Moi ban chon: ";
		cin >> chon;
		switch (chon) {
			case 0:
				cout << "Dang thoat CT...\n";
				break;
			case 1:
				tg1.Nhap();
				break;
			case 2:
				tg1.Xuat();
				break;
			case 3:
				if (tg1.KiemTraHopLe()) cout << "Tam giac hop le !\n";
				else cout << "Tam giac khong hop le !";
				break;
			case 4:
				cout <<"Tam giac thuoc loai " << tg1.PhanLoai();
				break;
			case 5:
				cout << "Chu vi cua tam giac la: " << tg1.TinhChuVi();
				break;
			case 6:
				cout << "Dien tich cua tam giac la: " << tg1.TinhDienTich();
				break;
			default:
				cout << "Ban chon sai. Moi chon lai \n";
				break;
			}
			system("pause");
			system("cls"); // clear screen
	}while (chon != 0);
}