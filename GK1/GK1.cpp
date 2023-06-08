#include "Money.h"

int main() {
	MONEY m1, m2(100, 99), m3(100, 20), m4;
	cout << "=================MENU================\n";
	cout << "1. Nhap so tien: \n";
	cout << "2. In so tien: \n";
	cout << "3. Chuyen tien sang VND: \n";
	cout << "4. Tang so tien len 1: \n";
	cout << "0. Thoat CT\n";
	cout << "=====================================\n";
	while (1) {
		int chon;
		cin >> chon;
		switch (chon) {
		case 0:
		{
			cout << "Thoat!!!\n";
			exit(1);
			break;
		}
		case 1:
		{
			cin >> m1 >> m2 >> m3;
			break;
		}
		case 2: 
		{
			cout << "money 1: " << m1 << endl << "money 2: " << m2 << endl << "money 3: " << m3 << endl;
			break;
		}
		case 3: 
		{
			cout << "Nhap so tien can chuyen: " << endl;
			cin >> m4;
			double tygia = 23000;
			long long VND = m4.ChuyenMoneySangVND(m4, tygia);
			cout << "So tien tuong ung la: " << VND << " VND\n";
			break;
		}
		case 4:
		{
			string chon;
			cout << "Chon so tien de tang len 1: \n";
			cin >> chon;
			if (chon == "m1") {
				m1 = ++m1;
				cout << "money 1: " << m1 << endl;
			}
			else if (chon == "m2") {
				m2 = ++m2;
				cout << "money 2: " << m2 << endl;
			}
			else if (chon == "m3") {
				m1 = ++m3;
				cout << "money 3: " << m3 << endl;
			}
			break;
		}
		default:
			break;
		}
	}
	return 0;
}