/*Nhap vào so tien. Hãy tính và in ra so to tien tuong ung cua các menh giá giam dan: 500k, 200k, 100k, 50k. 
(gia su doi het menh de gia lon, phan du moi doi sang menh de gia nho hon).
*/
#include <iostream>
using namespace std;

int main() {
    int tien;
    cout << "Nhap vao so tien: ";
    cin >> tien;
    int menhgia[4] = {500000, 200000, 100000, 50000}; // luu menh gia
    int totien[4] = {0, 0, 0, 0}; // luu so to tien
    for (int i = 0; i < 4; i++) {
        totien[i] = tien / menhgia[i];
        tien %= menhgia[i];
    }
    for (int i = 0; i < 4; i++) {
        cout << "So to tien " << menhgia[i] << " VND: " << totien[i] << endl;
    }
    return 0;
}

