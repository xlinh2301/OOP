/*
	4. Nhap vào ÐTB cua 1 hoc sinh. In ra màn hình ket qua xep loai nhu sau:
	• 0 = ÐTB < 5: Yeu
	• 5 = ÐTB < 7: TB
	• 7 = ÐTB < 8: Khá
	• 8 = ÐTB < 9: Gioi
	• 9 = ÐTB = 10: Xuat sac
*/
#include <iostream>
using namespace std;

int main() {
	float DTB;
	cout << "Nhap diem TB: ";
	cin >> DTB;
	int xeploai;
	if (DTB >= 0 && DTB < 5) {
        xeploai = 0;
    } else if (DTB >= 5 && DTB < 7) {
        xeploai = 5;
    } else if (DTB >= 7 && DTB < 8) {
        xeploai = 7;
    } else if (DTB >= 8 && DTB < 9) {
        xeploai = 8;
    } else if (DTB >= 9 && DTB <= 10) {
        xeploai = 9;
	}else{
		cout << "DTB khong hop le";
		return 0;
	}
	switch(xeploai){
		case 0:
		{
			cout <<"Yeu";
			break;
		}
		case 5:
		{
			cout << "TB";
			break;
		}
		case 7:
		{
			cout << "Kha";
			break;
		}
		case 8:
		{
			cout << "Gioi";
			break;
		}
		case 9:
		case 10:
		{
			cout << "Xuat sac";
			break;
		}
		default:
		{
			cout << "Khong xac dinh";
			break;
		}	
	}
	return 0;
}
