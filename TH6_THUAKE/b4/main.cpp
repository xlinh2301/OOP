#include "DiemMau3C.h"

int main(){
    cout << "So diem mau 3C hien tai la : " << DIEMMAU3C::GetDem() << endl;
    DIEMMAU3C d1, d2(1), d3(1, 2), d4(1, 2, 100), d5(1, 2, 60, 150), d6(1, 2, 3, 0, 50), d7(1, 2 , 3, 12, 54, 100), *d8 = new DIEMMAU3C;
    cout << "So diem mau 3C hien tai la : " << DIEMMAU3C::GetDem() << endl;
    cout << "d1: " << d1 <<endl << "d2: " << d2 <<endl<< "d3: " << d3 <<endl<< "d4: " << d4 <<endl<< "d5: " << d5 <<endl<< "d6: " << d6 <<endl<< "d7: " << d7 <<endl << "d8: " << *d8 << endl; 
    cout << "Nhap lai toa do diem mau d1: \n";
    cin >> d1;
    cout << "d1_moi: " << d1 << endl;
    if(d1.DIEM3C::KiemTraTrung(*d8)){
        cout << "d1 va d7 trung hoanh do, tung do va cao do\n";
    }else{
        cout << "d1 va d7 khong trung hoanh do, tung do va cao do\n";
    }
    if(d1.MAU::KiemTraTrung(*d8)){
        cout << "d1 va d7 trung mau\n";
    }else{
        cout << "d1 va d7 khong trung mau\n";
    }    
    if(d1.KiemTraTrung(*d8)){
        cout << "d1 va d7 trung hoanh do, tung do, cao do va mau\n";
    }else{
        cout << "d1 va d7 khong trung hoanh do, tung do, cao do va mau\n";
    }    
    delete d8;
    return 0;
}