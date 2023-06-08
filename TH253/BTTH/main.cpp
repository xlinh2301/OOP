#include <iostream>

using namespace std;

class Cps {
public:
    int ts;
    int ms;
    void nhap() {
        cout << "Nhap tu so: ";
        cin >> ts;
        do {
            cout << "Nhap mau so: ";
            cin >> ms;
            if (ms == 0) {
                cout << "Mau so phai khac 0!";
            }
        } while (ms == 0);
    }
    int ucln(int a, int b) {
        if (a == 0) return b;
        return ucln(b % a, a);
    }
    void rutgon() {
        int a = ucln(ts, ms);
        ts = ts / a;
        ms = ms / a;
    }
    void xuat() {
        if (ms > 1) cout << ts << "/" << ms;
        else if (ms == 1) cout << ts;
        else if (ms < -1) cout << -ts << "/" << -ms;
        else if (ms == -1) cout << -ts;
        cout << endl;
    }

    Cps cong(Cps ps) {
        Cps kq;
        kq.ts = ts * ps.ms + ps.ts * ms;
        kq.ms = ms * ps.ms;
        kq.rutgon();
        return kq;
    }
    Cps tru(Cps ps) {
        Cps kq;
        kq.ts = ts * ps.ms - ps.ts * ms;
        kq.ms = ms * ps.ms;
        kq.rutgon();
        return  kq;
    }
    Cps nhan(Cps ps) {
        Cps kq;
        kq.ts = ts * ps.ts;
        kq.ms = ms * ps.ms;
        kq.rutgon();
        return kq;
    }
    Cps chia(Cps ps) {
        Cps kq;
        kq.ts = ts * ps.ms;
        kq.ms = ms * ps.ts;
        kq.rutgon();
        return kq;
    }

};
int main() {
    Cps ps1, ps2, c;
    ps1.nhap();
    ps1.xuat();
    ps2.nhap();
    ps2.xuat();

    Cps kq;
    kq.ts = 0;
    kq.ms = 1;
    kq = ps1.cong(ps2);
    cout << "Tong hai phan so la: ";
    kq.xuat();

    kq = ps1.tru(ps2);
    cout << "Hieu hai phan so la: ";
    kq.xuat();

    kq = ps1.nhan(ps2);
    cout << "Tich hai phan so la: ";
    kq.xuat();

    kq = ps1.chia(ps2);
    cout << "Thuong hai phan so la: ";
    kq.xuat();
    return 0;

}

