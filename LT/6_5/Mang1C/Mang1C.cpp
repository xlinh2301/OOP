#include "Mang1C.h"

int main() {
	MANG1C* m1 = new MANG1C(), m2(5), m3(3, 7);
	cout << "Mang 1: " << *m1 << "\nMang 2: " << m2 << "\nMang 3: " << m3 << endl;
	cout << "Nhap lai mang 1: \n";
	cin >> *m1;
	cout << "Mang 1 moi: " << *m1 << endl;
	MANG1C m4(*m1);
	cout << "Mang 4: " << m4 << endl;
	//delete m1; // con tro ko tu HUY nen phai goi ham HUY
	//cout << "Da xoa mang 1 => " << *m1 << endl;
	//cout << "Mang 4: " << m4 << endl;
	MANG1C m5, m6;
	m5 = m6 = *m1;
	cout << "Mang 5: " << m5 << endl;
	cout << "Mang 6: " << m5 << endl;
	delete m1;
	cout << "Da xoa mang 1 => " << *m1 << endl;
	cout << "Mang 5: " << m5 << endl;
	cout << "Mang 6: " << m5 << endl;

}
