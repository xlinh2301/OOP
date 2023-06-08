#include <iostream>

using namespace std;

struct Date {
    int day;
    int month;
    int year;
};

// H�m kiem tra nam nhuan
bool isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

// H�m t�nh so ngay trong thang
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

// H�m t�m ng�y ke tiep
Date getNextDay(Date date) {
    // T�nh so ngay trong thang hien tai
    int days_in_month = daysInMonth(date.month, date.year);

    // Neu l� ng�y cuoi c�ng trong th�ng, tang th�ng l�n 1 v� dat ng�y l� 1
    if (date.day == days_in_month) {
        date.day = 1;
        date.month++;
    }
    // Neu kh�ng phai ng�y cuoi c�ng trong th�ng, chi tang ng�y l�n 1
    else {
        date.day++;
    }

    // Neu l� th�ng cuoi c�ng trong nam, tang nam l�n 1 v� dat th�ng v� ng�y l� 1
    if (date.month == 13) {
        date.month = 1;
        date.year++;
        date.day = 1;
    }

    return date;
}

int main() {
    Date date;

    // Nhap v�o ng�y, th�ng, nam
    cout << "Nhap vao ngay: ";
    cin >> date.day;
    cout << "Nhap vao thang: ";
    cin >> date.month;
    cout << "Nhap vao nam: ";
    cin >> date.year;

    // T�m ng�y ke tiep v� xuat ra
    Date next_day = getNextDay(date);
    cout << "Ngay ke tiep la: " << next_day.day << "/"
         << next_day.month << "/" << next_day.year << endl;

    return 0;
}

