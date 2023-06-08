#include"DaThuc.h"
#include "DaThuc.cpp"
int main(){
    DaThuc DT1;
    DaThuc DT2;
    cout<<"Cai dat cho Da thuc 1: "<<endl;
    cin >> DT1;
    cout <<"Cai dat cho Da thuc 2: "<<endl;
    cin >> DT2;
    cout << "DT1: " << DT1 << endl;
    cout << "DT2: " << DT2 << endl;
    DaThuc AddDT=DT1+DT2;
    cout<<"ADD DT1 and DT2: "<<AddDT<<endl;
    DaThuc SubDT=DT1-DT2;
    cout<<"Sub DT1 adn DT2: "<<SubDT<<endl;
    DaThuc MultiDT=DT1*DT2;
    cout<<"MulDT1 and DT2: "<<MultiDT<<endl;
    return 0;
}