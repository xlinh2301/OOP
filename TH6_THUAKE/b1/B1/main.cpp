#include "DIEM3C.h"
int main() {
    cout << "So diem 3 chieu hien tai la: " << DIEM3C::GetDem() << endl;
    DIEM3C d1, d2(1), d3(1, 2), d4(1, 2, 3), * d5 = new DIEM3C;
    cout << "So diem 3 chieu hien tai la: " << DIEM3C::GetDem() << endl;
    cout << "d1: " << d1 << "\nd2: " << d2 << "\nd3: " << d3 << "\nd4: " << d4 << "\nd5: " << *d5 << endl;
    cout << "Nhap lai toa do diem d1: ";
    cin >> d1;
    cout << "d1_moi: " << d1 << endl;
    if (d1.KiemTraTrung(d4))
        cout << "d1 va d4 trung hoanh do va tung do\n";
    else
        cout << "d1 va d4 khong trung hoanh do, tung do\n";

    if (d1.KiemTraTrung(d4))
        cout << "d1 va d4 trung hoanh do, tung do va cao do\n";
    else
        cout << "d1 va d4 khong trung hoanh do, tung do va cao do\n";
    delete d5;
    cout << "So diem 3 chieu hien tai la: " << DIEM3C::GetDem() << endl;

    return 0;
}