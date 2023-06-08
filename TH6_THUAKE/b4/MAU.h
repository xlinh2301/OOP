#ifndef _MAU
#define _MAU
#include <bits/stdc++.h>
using namespace std;

class MAU {
protected:
    int r, g, b; // [0,255]
    static int dem;
public:
    ~MAU(){
        cout << "Da huy 1 mau => Con lai " << --dem << " diem\n";
    }
    MAU(int r = 0, int g = 0, int b = 0) : r(0), g(0), b(0) {
        SetRGB(r, g, b);
        cout << "Da tao 1 mau => Co " << ++dem << " diem mau\n";
    }
    int GetR(){return r;}
    int GetG(){return g;}
    int GetB(){return b;}
    void SetG(int g){
        while(g < 0 || g > 255){
            cout << "Nhap lai thong so mau Green tu 0 -> 255: ";
            cin >> g;
        }
        this->g = g;
    }
    void SetR(int r){
        while(r < 0 || r > 255){
            cout << "Nhap lai thong so mau Green tu 0 -> 255: ";
            cin >> r;
        }
        this->r = r;
    }
    void SetB(int b){
        while(b < 0 || b > 255){
            cout << "Nhap lai thong so mau Green tu 0 -> 255: ";
            cin >> b;
        }
        this->b = b;
    }
    void SetRGB(int g, int r, int b){
        SetR(r);
        SetG(g);
        SetB(b);
    }
    static int GetDem(){
        return dem;
    }
    void Nhap(){
        do{
            cout << "Nhap 3 thong so RGB tu 0 -> 255: ";
            cin >> r >> g >> b;
        }while(r < 0 || g < 0 || b < 0 ||r > 255 || g > 255 | b > 255);
    }
    void Xuat() const{
        cout << " - Mau RGB(" << r << ", " << g << ", " << b << ")\n";
    }
    bool KiemTraTrung(const MAU& dm3c) const {
        return r == dm3c.r && g == dm3c.g && b == dm3c.b; 
    }
    friend istream& operator>>(istream& is, MAU& dm3c){
        do{
            cout << "Nhap 3 thong so RGB tu 0 -> 255: ";
            cin >> dm3c.r >> dm3c.g >> dm3c.b;
        }while(dm3c.r < 0 || dm3c.g < 0 || dm3c.b < 0 ||dm3c.r > 255 || dm3c.g > 255 | dm3c.b > 255);
        return is;
    }
    friend ostream& operator<< (ostream& os, const MAU& dm3c){
        os << " - Mau RGB(" << dm3c.r << ", " << dm3c.g << ", " << dm3c.b << ")\n"; 
        return os;
    }
};
int MAU::dem = 0;
#endif