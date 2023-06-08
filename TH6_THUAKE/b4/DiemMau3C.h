#ifndef _DIEMMAU3C
#define _DIEMMAU3C
#include "DIEM3C.h"
#include "MAU.h"

class DIEMMAU3C : public DIEM3C, public MAU {
private:
    static int dem;
public:
    ~DIEMMAU3C(){
        cout << "Da huy 1 diem mau 3C => Con lai " << --dem << " diem\n";
    }
    DIEMMAU3C(double x = 0, double y = 0, double z = 0, int r = 0, int g = 0, int b = 0) : DIEM3C(x, y, z), MAU(r,g,b) {
        cout << "Da tao 1 diem mau 3C => Co " << ++dem << " diem mau 3C\n";
    }
    static int GetDem(){
        return dem;
    }
    void Nhap(){
        DIEM3C::Nhap();
        MAU::Nhap();
    }
    void Xuat() const{
        DIEM3C::Xuat();
        MAU::Xuat();
    }
    bool KiemTraTrung(const DIEMMAU3C& dm3c) const {
        return  DIEM3C::KiemTraTrung(dm3c) && MAU::KiemTraTrung(dm3c);
    }
    friend istream& operator>>(istream& is, DIEMMAU3C& dm3c){
        dm3c.DIEM3C::Nhap();
        dm3c.MAU::Nhap();
        return is;
    }
    friend ostream& operator<<(ostream& os, const DIEMMAU3C& dm3c){
        dm3c.DIEM3C::Xuat();
        dm3c.MAU::Xuat();
        return os;
    }
};
int DIEMMAU3C::dem = 0;
#endif