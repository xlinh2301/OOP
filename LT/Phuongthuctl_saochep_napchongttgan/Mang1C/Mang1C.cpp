#include "Mang1C.h"

Mang1C::~Mang1C(){
    delete[] a;
}
Mang1C::Mang1C() : n(0), a(NULL){}
Mang1C::Mang1C(int size){
    this->n = size;
    this->a = new int[n];
}
Mang1C::Mang1C(const Mang1C& m) : n(m.n){
    this->a = new int[n];
    for(int i = 0; i < n; i++){
        this->a[i] = m.a[i]; 
    }
}
void Mang1C::Nhap(){
    cout << "Nhap phan tu cho mang 1 chieu:\n";
    for(int i = 0; i < n; i++){
        cout << "a[" << i << "] = ";
        cin >> a[i];
    }
}
void Mang1C::Xuat(){
    cout << "Xuat mang:\n";
    for(int i = 0; i < n; i++){
        cout << "a[" << i << "] = " << a[i] << endl;
    }
}
bool KtSNT(int a){
    if(a < 2)
        return false;
    for(int i = 2; i <= a/2; i++){
        if(a % i == 0)
            return false;
    }
    return true;
}
void Mang1C::LietKeSNT(){
    cout << "So nguyen to trong mang la: ";
    for(int i = 0; i < n; i++){
        if(KtSNT(a[i]))
            cout << a[i] << " ";
    }
    cout << endl;
}
bool KtScp(int a){
    return (float)sqrt(int(a)) = sqrt(int(a)) ? true : false;
}
int Mang1C::DemSCP(){
    
}
int Mang1C::SumSHT(){}
int Mang1C::TBCongSDX(){}
bool Mang1C::KtAllLe(){}
int Mang1C::Minchan(){}
void Mang1C::MangTang(){}
void Mang1C::MangGiam(){}
void Mang1C::XoaPhanTuBatKy(int pos){}
void Mang1C::ThemPhanTu(int value){}
int Mang1C::TimKiemPhanTuBK(int value){}
void Mang1C::PhatSinhNgauNhien(int minvalue, int maxvalue){}