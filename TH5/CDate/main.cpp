#include "CDate.h"
#include "CDate.cpp"

int main(){
    CDate d;
    cout << "-----------------------MENU--------------------------\n";
    cout << "1. Nhap ngay, thang, nam\n";
    cout << "2. Xuat ngay, thang, nam\n";
    cout << "3. Ngay mai la ngay bao nhieu ?\n";
    cout << "4. Hom qua la ngay bao nhieu ?\n"; 
    cout << "5. Dang xuat\n";
    cout << "------------------------------------------------------\n";
    int n;
    do{
        cout << "Moi quy khach chon menu: \n";
        cin >> n;
        switch(n){
            case 1:
            {
                cin >> d;
                break;
            }    
            case 2:
            {
                cout << d << endl;
                break;
            }
            case 3:
            {
                d++;
                cout << "Ngay mai la ngay: \n";
                cout << d << endl;
                break;
            }
            case 4:
            {
                d--;
                cout << "Hom qua la ngay: \n";
                cout << d << endl;
                break;
            }
            case 0:
                std::cout << "Dang thoat chuong trinh...\n";
                break;
            default:
                std::cout << "Lua chon khong hop le. Vui long chon lai.\n";
                break;
        }
    }while(n != 0);
    return 0;
}