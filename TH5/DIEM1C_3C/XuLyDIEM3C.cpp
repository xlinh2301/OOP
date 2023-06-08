#include "DIEM3C.h"
int DIEM3C::dem = 0;
DIEM3C::~DIEM3C() {
    cout << "Da huy 1 diem 3C => Con " << --dem << " Diem3C\n";
}
DIEM3C::DIEM3C() : DIEM(0, 0), z(0) {
    cout << "Da tao 1 Diem3C => Co " << ++dem << " Diem3C\n";
}
DIEM3C::DIEM3C(double x) : DIEM(x, 0), z(0) {
    cout << "Da tao 1 Diem3C => Co " << ++dem << " Diem3C\n";
}
DIEM3C::DIEM3C(double x, double y) : DIEM(x, y), z(0) {
    cout << "Da tao 1 Diem3C => Co " << ++dem << " Diem3C\n";
}
DIEM3C::DIEM3C(double x, double y, double z) : DIEM(x, y), z(z) {
    cout << "Da tao 1 Diem3C => Co " << ++dem << " Diem3C\n";
}
DIEM3C::DIEM3C(const DIEM3C& d3c) : DIEM(d3c.x, d3c.y), z(d3c.z) {
    cout << "Da tao 1 Diem3C => Co " << ++dem << " Diem3C\n";
}
double DIEM3C::GetZ() const { return z; }
void DIEM3C::SetZ(double z) {
    this->z = z;
}
void DIEM3C::SetXYZ(double x, double y, double z) {
    SetXY(x, y);
    SetZ(z);
}
int DIEM3C::GetDem() {
    return dem;
}
void DIEM3C::Nhap() {
    DIEM::Nhap();
    cout << "Nhap cao do: ";
    cin >> z;
}
void DIEM3C::Xuat() const {
    DIEM::Xuat();
    cout << ", " << z;
}
bool DIEM3C::KiemTraTrung(const DIEM3C& d3c) const {
    return (x == d3c.x && y == d3c.y && z == d3c.z);
}
void DIEM3C::DiChuyen(double dx, double dy, double dz) {
    DIEM::DiChuyen(dx, dy);
    z += dz;
}
double DIEM3C::TinhKhoangCach(const DIEM3C& d3c) const {
    return sqrt(pow(x - d3c.x, 2) + pow(y - d3c.y, 2) + pow(z - d3c.z, 2));
}
DIEM3C DIEM3C::TimDoiXung() const {
    return DIEM3C(-x == 0 ? x : -x, -y == 0 ? y : -y, -z == 0 ? z : -z);
}
istream& operator>>(istream& is, DIEM3C& d3c) {
    d3c.DIEM::Nhap();
    cout << "Nhap cao do: ";
    is >> d3c.z;
    return is;
}
ostream& operator<<(ostream& os, const DIEM3C& d3c) {
    d3c.DIEM::Xuat();
    os << ", " << d3c.z;
    return os;
}
