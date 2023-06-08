#include "Mang1C.h"

Mang1C::Mang1C() : n(0), a(NULL) {}

Mang1C::Mang1C(int size) : n(size) {
    a = new int[n];
}

Mang1C::Mang1C(const Mang1C& other) : n(other.n) {
    a = new int[n];
    for (int i = 0; i < n; i++) {
        a[i] = other.a[i];
    }
}

Mang1C::~Mang1C() {
    delete[] a;
}

void Mang1C::Nhap() {
    std::cout << "Nhap gia tri cac phan tu mang:" << std::endl;
    for (int i = 0; i < n; i++) {
        std::cout << "a[" << i << "] = ";
        std::cin >> a[i];
    }
}

void Mang1C::Xuat() {
    std::cout << "Gia tri cac phan tu mang:" << std::endl;
    for (int i = 0; i < n; i++) {
        std::cout << "a[" << i << "] = " << a[i] << std::endl;
    }
}

void Mang1C::LietKeSoNguyenTo() {
    std::cout << "Cac phan tu la so nguyen to trong mang:" << std::endl;
    for (int i = 0; i < n; i++) {
        if (LaSoNguyenTo(a[i])) {
            std::cout << a[i] << " ";
        }
    }
    std::cout << std::endl;
}

int Mang1C::DemSoChinhPhuong() {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (LaSoChinhPhuong(a[i])) {
            count++;
        }
    }
    return count;
}

int Mang1C::TinhTongSoHoanThien() {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        if (LaSoHoanThien(a[i])) {
            sum += a[i];
        }
    }
    return sum;
}

float Mang1C::TBCongSoDoiXung() {
    int sum = 0;
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (LaSoDoiXung(a[i])) {
            sum += a[i];
            count++;
        }
    }
    if (count != 0) {
        return static_cast<float>(sum) / count;
    }
    return 0;
}

bool Mang1C::KiemTraMangLe() {
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 == 0) {
            return false;
        }
    }
    return true;
}

int Mang1C::TimGiaTriChanBeNhat() {
    int minEven = INT_MAX;
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 == 0 && a[i] < minEven) {
            minEven = a[i];
        }
    }
    if (minEven == INT_MAX) {
        return -1;
    }
    return minEven;
}

void Mang1C::SapXepTang() {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] > a[j]) {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}

void Mang1C::SapXepGiam() {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] < a[j]) {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}

void Mang1C::XoaPhanTu(int pos) {
    if (pos >= 0 && pos < n) {
        for (int i = pos; i < n - 1; i++) {
            a[i] = a[i + 1];
        }
        n--;
        int* temp = new int[n];
        for (int i = 0; i < n; i++) {
            temp[i] = a[i];
        }
        delete[] a;
        a = temp;
    }
}

void Mang1C::ThemPhanTu(int pos, int value) {
    if (pos >= 0 && pos <= n) {
        int* temp = new int[n + 1];
        for (int i = 0; i < pos; i++) {
            temp[i] = a[i];
        }
        temp[pos] = value;
        for (int i = pos + 1; i < n + 1; i++) {
            temp[i] = a[i - 1];
        }
        n++;
        delete[] a;
        a = temp;
    }
}

int Mang1C::TimKiemPhanTu(int value) {
    for (int i = 0; i < n; i++) {
        if (a[i] == value) {
            return i;
        }
    }
    return -1;
}

bool Mang1C::LaSoNguyenTo(int num) {
    if (num < 2) {
        return false;
    }
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

bool Mang1C::LaSoChinhPhuong(int num) {
    int sqrtNum = sqrt(num);
    return (sqrtNum * sqrtNum == num);
}

bool Mang1C::LaSoHoanThien(int num) {
    int sum = 0;
    for (int i = 1; i < num; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }
    return (sum == num);
}

bool Mang1C::LaSoDoiXung(int num) {
    int reverseNum = 0;
    int temp = num;
    while (temp > 0) {
        reverseNum = reverseNum * 10 + temp % 10;
        temp /= 10;
    }
    return (num == reverseNum);
}
void Mang1C::PhatSinhMangNgauNhien(int minValue, int maxValue) {
    srand(static_cast<unsigned int>(time(0)));  // Khởi tạo seed cho hàm rand() bằng thời gian hiện tại
    for (int i = 0; i < n; i++) {
        a[i] = rand() % (maxValue - minValue + 1) + minValue;
    }
}
