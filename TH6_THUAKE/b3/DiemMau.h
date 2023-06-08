#ifndef _DIEMMAU
#define _DIEMMAU
#include "DIEM.h"
#include "MAU.h"

class DIEMMAU : public DIEM, public MAU{
private:
    static int dem;
public:
    ~DIEMMAU(){
        cout << "Da huy 1 diem mau => Con lai " << --dem << " diem\n";
    }
    DIEMMAU(double x = 0, double y = 0, int r = 0, int g = 0, int b = 0) : DIEM(x, y), MAU(r, g, b){
        cout << "Da tao 1 diem mau => Co " << ++dem << " diem mau\n";
    }
    static int GetDem(){
        return dem;
    }
    void Nhap(){
        DIEM::Nhap();
        MAU::Nhap();
    }
    void Xuat() const{
        DIEM::Xuat();
        MAU::Xuat();
   }
    bool KiemTraTrung(const DIEMMAU& dm) const {
        return DIEM::KiemTraTrung(dm) && MAU::KiemTraTrung(dm);
    }
    friend istream& operator>>(istream& is, DIEMMAU& dm){
        dm.Nhap();
        return is;
    }
    friend ostream& operator<< (ostream& os, const DIEMMAU& dm){
        dm.Xuat();
        return os;
    }
};
int DIEMMAU::dem = 0;
#endif