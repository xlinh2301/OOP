#include "Mang1C.h"
#include "Mang1C.cpp"

void PrintMenu() {
    std::cout << "======= MENU =======\n";
    std::cout << "1. Nhap gia tri cac phan tu mang\n";
    std::cout << "2. Xuat gia tri cac phan tu mang\n";
    std::cout << "3. Liet ke so nguyen to\n";
    std::cout << "4. Dem so chinh phuong\n";
    std::cout << "5. Tinh tong so hoan thien\n";
    std::cout << "6. Tinh trung binh cong so doi xung\n";
    std::cout << "7. Kiem tra mang co toan phan tu le hay khong\n";
    std::cout << "8. Tim gia tri chan nho nhat\n";
    std::cout << "9. Sap xep mang tang dan\n";
    std::cout << "10. Sap xep mang giam dan\n";
    std::cout << "11. Xoa phan tu tai vi tri bat ky\n";
    std::cout << "12. Them phan tu vao vi tri bat ky\n";
    std::cout << "13. Tim kiem phan tu co gia tri bat ky\n";
    std::cout << "0. Thoat chuong trinh\n";
    std::cout << "====================\n";
    std::cout << "Nhap lua chon cua ban: ";
}

int main() {
    int n;
    std::cout << "Nhap so phan tu cua mang: ";
    std::cin >> n;

    Mang1C mang(n);

    int choice;
    do {
        PrintMenu();
        std::cin >> choice;

        switch (choice) {
            case 1:
                // Phat sinh mang ngau nhien
                int minValue, maxValue;
                std::cout << "Nhap gioi han duoi: ";
                std::cin >> minValue;
                std::cout << "Nhap gioi han tren: ";
                std::cin >> maxValue;
                mang.PhatSinhMangNgauNhien(minValue, maxValue);
                break;
            case 2:
                mang.Xuat();
                break;
            case 3:
                mang.LietKeSoNguyenTo();
                break;
            case 4:
                std::cout << "So chinh phuong trong mang: " << mang.DemSoChinhPhuong() << std::endl;
                break;
            case 5:
                std::cout << "Tong cac so hoan thien trong mang: " << mang.TinhTongSoHoanThien() << std::endl;
                break;
            case 6:
                std::cout << "Trung binh cong cac so doi xung trong mang: " << mang.TBCongSoDoiXung() << std::endl;
                break;
            case 7:
                if (mang.KiemTraMangLe()) {
                    std::cout << "Mang co toan phan tu le\n";
                } else {
                    std::cout << "Mang khong co toan phan tu le\n";
                }
                break;
            case 8: {
                int minEven = mang.TimGiaTriChanBeNhat();
                if (minEven == -1) {
                    std::cout << "Mang khong co so chan\n";
                } else {
                    std::cout << "Gia tri chan nho nhat trong mang: " << minEven << std::endl;
                }
                break;
            }
            case 9:
                mang.SapXepTang();
                std::cout << "Mang sau khi sap xep tang dan: ";
                mang.Xuat();
                break;
            case 10:
                mang.SapXepGiam();
                std::cout << "Mang sau khi sap xep giam dan: ";
                mang.Xuat();
                break;
            case 11: {
                int pos;
                std::cout << "Nhap vi tri phan tu muon xoa: ";
                std::cin >> pos;
                mang.XoaPhanTu(pos);
                std::cout << "Mang sau khi xoa phan tu: ";
                mang.Xuat();
                break;
            }
            case 12: {
                int pos, value;
                std::cout << "Nhap vi tri muon them phan tu: ";
                std::cin >> pos;
                std::cout << "Nhap gia tri phan tu: ";
                std::cin >> value;
                mang.ThemPhanTu(pos, value);
                std::cout << "Mang sau khi them phan tu: ";
                mang.Xuat();
                break;
            }
            case 13: {
                int value;
                std::cout << "Nhap gia tri phan tu muon tim kiem: ";
                std::cin >> value;
                int index = mang.TimKiemPhanTu(value);
                if (index != -1) {
                    std::cout << "Phan tu co gia tri " << value << " xuat hien tai vi tri " << index << std::endl;
                } else {
                    std::cout << "Khong tim thay phan tu co gia tri " << value << std::endl;
                }
                break;
            }
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
