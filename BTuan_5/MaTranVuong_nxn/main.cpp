#include "MATRAN.h"
#include "XuLy.cpp"

void PrintMenu() {
    std::cout << "======= MENU =======\n";
    std::cout << "1. Nhap gia tri cac phan tu ma tran\n";
    std::cout << "2. Xuat gia tri cac phan tu ma tran\n";
    std::cout << "3. Liet ke gia tri cac phan tu le nam tren duong cheo chinh\n";
    std::cout << "4. Dem cac phan tu co ky so cuoi la 3 nam tren duong cheo phu\n";
    std::cout << "5. Kiem tra xem co ton tai phan tu am o nua mang phia tren duong cheo chinh\n";
    std::cout << "6. Tim phan tu chan dau tien o nua duoi duong cheo phu\n";
    std::cout << "7. Sap xep ma tran tang dan\n";
    std::cout << "0. Thoat chuong trinh\n";
    std::cout << "====================\n";
    std::cout << "Nhap lua chon cua ban: ";
}

int main() {
    MATRAN m;

    int choice;
    do {
        PrintMenu();
        std::cin >> choice;

        switch (choice) {
            case 1:
                int min, max;
                cout << "Nhap can tren va duoi: ";
                cin >> min >> max;
                m.PhatSinhMangNgauNhien(min, max);
                break;
            case 2:
                m.Xuat();
                break;
            case 3:
                m.LietKe();
                break;
            case 4:
                if(m.Dem() == 0) 
                 cout << "Khong co !";
                else 
                    cout << m.Dem();
                break;
            case 5:
                if(m.KtraAm())
                    cout << "Ton tai phan tu am o nua mang phia tren duong cheo chinh !\n";
                else 
                    cout << "Khong ton tai phan tu am o nua mang phia tren duong cheo chinh !\n";
                break;
            case 6:
                cout << m.TimPhanTuChanDauTien();
                break;
            case 7:
                m.SapXepGiamDan();
                m.Xuat();
                break;
            case 0:
                std::cout << "Thoat chuong trinh\n";
                break;
            default:
                std::cout << "Lua chon khong hop le. Vui long chon lai.\n";
                break;
        }
        std::cout << std::endl;
    } while (choice != 0);

    return 0;
}
