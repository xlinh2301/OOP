#ifndef _DIEMMAU3C
#define _DIEMMAU3C
#include "DIEM3C.h"

class DIEMMAU3C : public DIEM3C {
protected:
    int r, g, b; // [0,255]
    static int dem;
public:
    ~DIEMMAU3C(){
        cout << "Da huy 1 diem mau 3C => Con lai " << --dem << " diem\n";
    }
    DIEMMAU3C(double x = 0, double y = 0, double z = 0, int r = 0, int g = 0, int b = 0) : DIEM3C(x, y, z), r(0), g(0), b(0) {
        SetRGB(r, g, b);
        cout << "Da tao 1 diem mau 3C => Co " << ++dem << " diem mau 3C\n";
    }
    int GetR(){return r;}
    int GetG(){return g;}
    int GetB(){return b;}
    void SetG(int g){
        this->g = g;
    }
    void SetR(int r){
        this->r = r;
    }
    void SetB(int b){
        this->b = b;
    }
    void SetRGB(int g, int r, int b){
        this->r = r;
        this->g = g;
        this->b = b;
    }
    static int GetDem(){
        return dem;
    }
    void Nhap(){
        DIEM3C::Nhap();
        do{
            cout << "Nhap 3 thong so RGB tu 0 -> 255: ";
            cin >> r >> g >> b;
        }while(r < 0 || g < 0 || b < 0 ||r > 255 || g > 255 | b > 255);
    }
    void Xuat() const{
        DIEM3C::Xuat();
        cout << " - Mau RGB(" << r << ", " << g << ", " << b << ")\n";
    }
    bool KiemTraTrung(const DIEMMAU3C& dm3c) const {
        return  DIEM3C::KiemTraTrung(dm3c) && r == dm3c.r && g == dm3c.g && b == dm3c.b; 
    }
    friend istream& operator>>(istream& is, DIEMMAU3C& dm3c){
        dm3c.DIEM3C::Nhap();
        do{
            cout << "Nhap 3 thong so RGB tu 0 -> 255: ";
            cin >> dm3c.r >> dm3c.g >> dm3c.b;
        }while(dm3c.r < 0 || dm3c.g < 0 || dm3c.b < 0 ||dm3c.r > 255 || dm3c.g > 255 | dm3c.b > 255);
        return is;
    }
    friend ostream& operator<< (ostream& os, const DIEMMAU3C& dm3c){
        dm3c.DIEM3C::Xuat();
        os << " - Mau RGB(" << dm3c.r << ", " << dm3c.g << ", " << dm3c.b << ")\n"; 
        return os;
    }
};
int DIEMMAU3C::dem = 0;
#endif