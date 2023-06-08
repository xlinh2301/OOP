#include <iostream>

using namespace std;

struct Date {
    int day;
    int month;
    int year;
};

// Hàm kiem tra nam nhuan
bool isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

// Hàm tính so ngay trong thang
int daysInMonth(int month, int year) {
    switch (month) {
        case 2:
            return isLeapYear(year) ? 29 : 28;
        case 4:
        case 6:
        case 9:
        case 11:
            return 30;
        default:
            return 31;
    }
}

// Hàm tìm ngày ke tiep
Date getNextDay(Date date) {
    // Tính so ngay trong thang hien tai
    int days_in_month = daysInMonth(date.month, date.year);

    // Neu là ngày cuoi cùng trong tháng, tang tháng lên 1 và dat ngày là 1
    if (date.day == days_in_month) {
        date.day = 1;
        date.month++;
    }
    // Neu không phai ngày cuoi cùng trong tháng, chi tang ngày lên 1
    else {
        date.day++;
    }

    // Neu là tháng cuoi cùng trong nam, tang nam lên 1 và dat tháng và ngày là 1
    if (date.month == 13) {
        date.month = 1;
        date.year++;
        date.day = 1;
    }

    return date;
}

int main() {
    Date date;

    // Nhap vào ngày, tháng, nam
    cout << "Nhap vao ngay: ";
    cin >> date.day;
    cout << "Nhap vao thang: ";
    cin >> date.month;
    cout << "Nhap vao nam: ";
    cin >> date.year;

    // Tìm ngày ke tiep và xuat ra
    Date next_day = getNextDay(date);
    cout << "Ngay ke tiep la: " << next_day.day << "/"
         << next_day.month << "/" << next_day.year << endl;

    return 0;
}

