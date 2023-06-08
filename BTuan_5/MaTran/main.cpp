#include "MATRAN.h"
#include "XuLy.cpp"

void PrintMenu() {
    std::cout << "======= MENU =======\n";
    std::cout << "1. Nhap gia tri cac phan tu ma tran\n";
    std::cout << "2. Xuat gia tri cac phan tu ma tran\n";
    std::cout << "3. Liet ke so nguyen to\n";
    std::cout << "4. Dem so chinh phuong\n";
    std::cout << "5. Tinh tong so hoan thien\n";
    std::cout << "6. Tinh trung binh cong so doi xung\n";
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
                m.LietKeSNT();
                break;
            case 4:
                m.DemSCP();
                break;
            case 5:
                m.SumOfSHT();
                break;
            case 6:
                m.TbCongSDX();
                break;
            case 7:
                m.SapXepTangDan();
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
