#include "SOPHUC.h"
#include "XuLy.cpp"
int main() {
	SOPHUC p1, p2(2, -3), p3(2);
	cout << "So phuc 1: " << p1 << endl << "So phuc 2: " << p2 << endl << "So phuc 3: " << p3 << endl;
	p1 = 2 - p2 + p3 + 1;
	cout << "So phuc 1: " << p1 << endl;
	p3 = p1 / p2 + p1*p2 - 3;
	cout << "So phuc 3: " << p3 << endl;
	if (p1 > p2) cout << "so phuc 1 lon hon so phuc 2\n";
	else if (p1 < p2) cout << "so phuc 2 lon hon so phuc 1\n";
	else cout << "so phuc 1 bang so phuc 2";
	return 0;
}