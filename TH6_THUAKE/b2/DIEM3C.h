#ifndef _DIEM3C
#define _DIEM3C
#include "DIEM.h"

class DIEM3C : public DIEM {
protected:
    double z;
    static int dem;
public:
    ~DIEM3C(){
        cout << "Da huy 1 diem 3C => Con " << --dem << " Diem3C\n";
    }
    DIEM3C(double x = 0, double y = 0, double z = 0): DIEM(x, y), z(z) {
        cout << "Da tao 1 Diem3C => Co " << ++dem << " Diem3C\n";
    }
    DIEM3C(const DIEM3C& d3c) : DIEM(d3c.x, d3c.y), z(d3c.z) {
        cout << "Da tao 1 Diem3C => Co " << ++dem << " Diem3C\n";
    }
    double GetZ() const {
        return z; 
    }
    void SetZ(double z) {
        this->z = z;
    }
    void SetXYZ(double x, double y, double z) {
        SetXY(x, y);
        SetZ(z);
    }
    int GetDem() {
        return dem;
    }
    void Nhap() {
        DIEM::Nhap();
        cout << "Nhap cao do: ";
        cin >> z;
    }
    void Xuat() const {
        DIEM::Xuat();
        cout << ", " << z;
    }
    bool KiemTraTrung(const DIEM3C& d3c) const {
        return (x == d3c.x && y == d3c.y && z == d3c.z);
    }
    void DiChuyen(double dx, double dy, double dz) {
        DIEM::DiChuyen(dx, dy);
        z += dz;
    }
    double TinhKhoangCach(const DIEM3C& d3c) const {
        return sqrt(pow(x - d3c.x, 2) + pow(y - d3c.y, 2) + pow(z - d3c.z, 2));
    }
    DIEM3C TimDoiXung() const {
        return DIEM3C(-x == 0 ? x : -x, -y == 0 ? y : -y, -z == 0 ? z : -z);
    }
    friend istream& operator>>(istream& is, DIEM3C& d3c) {
        d3c.DIEM::Nhap();
        cout << "Nhap cao do: ";
        is >> d3c.z;
        return is;
    }
    friend ostream& operator<<(ostream& os, const DIEM3C& d3c) {
        d3c.DIEM::Xuat();
        os << ", " << d3c.z;
        return os;
    }

};
int DIEM3C::dem = 0;
#endif

