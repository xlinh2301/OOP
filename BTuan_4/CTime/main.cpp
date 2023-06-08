
#include "Ctime.h"
#include "XuLy.cpp"
#include <conio.h>
#include <Windows.h>
int main() {
	CTime t1, t2(3, 15);
	cin >> t1;
	while (true) {
		system("cls");
		cout << "*************\n";
		cout << t1;
		cout << "*************\n";
		++t1;
		Sleep(1000);
	}
	return 0;
}
