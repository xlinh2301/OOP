#include "CDate.h"

CDate::CDate(int d, int m, int y) : day(d), month(m), year(y){}
CDate CDate::operator+(int numDays) {
        CDate result = *this;
        result.day += numDays;
        // Xử lý khi cộng ngày vượt qua tháng hiện tại
        while (result.day > daysInMonth(result.month, result.year)) {
            result.day -= daysInMonth(result.month, result.year);
            result.month++;
            if (result.month > 12) {
                result.month = 1;
                result.year++;
            }
        }
    return result;
}
CDate CDate::operator-(int numDays) {
        CDate result = *this;
        result.day -= numDays;
        // Xử lý khi trừ ngày vượt quá tháng hiện tại
        while (result.day <= 0) {
            result.month--;
            if (result.month <= 0) {
                result.month = 12;
                result.year--;
            }
            result.day += daysInMonth(result.month, result.year);
        }
    return result;
}
CDate CDate::operator++() {
        return (*this) + 1;
}
CDate CDate::operator--() {
        return (*this) - 1;
}
int CDate::operator-(const CDate &d)
{
    CDate x;
    x.day=day;
    x.month=month;
    x.year=year;
    long long a=x.day;
    do{
        switch(x.month)
        {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            a+=31;
            x.month--;
            if(x.month==0)
            {
                x.year--;
                x.month=12;
            }
            break;
        case 4: case 6: case 9: case 11:
            a+=30;
            x.month--;
            break;
        case 2:
            if(x.year%400==0 || (x.year%4==0 && x.year%100!=0))
            {
                a+=29;
                x.month--;
            }
            else
            {
                a+=28;
                x.month--;
            }
        }
    }while(x.year>0);

    x.day=d.day;
    x.month=d.month;
    x.year=d.year;
    long long b=x.day;
    do{
        switch(x.month)
        {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            b+=31;
            x.month--;
            if(x.month==0)
            {
                x.year--;
                x.month=12;
            }
            break;
        case 4: case 6: case 9: case 11:
            b+=30;
            x.month--;
            break;
        case 2:
            if(x.year%400==0 || (x.year%4==0 && x.year%100!=0))
            {
                b+=29;
                x.month--;
            }
            else
            {
                b+=28;
                x.month--;
            }
        }
    }while(x.year>0);
    return a-b;
}
ostream& operator<<(ostream& os, const CDate& date) {
        os << date.day << "/" << date.month << "/" << date.year;
        return os;
}
istream& operator>>(istream& is, CDate& date) {
        is >> date.day;
        is.ignore(); // Bỏ qua dấu '/'
        is >> date.month;
        is.ignore(); // Bỏ qua dấu '/'
        is >> date.year;
        return is;
}
bool CDate::isLeapYear(int year) {
        return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}
int CDate::daysInMonth(int month, int year) {
    if (month == 2) {
        if (isLeapYear(year))
            return 29;
         else
            return 28;
    } else if (month == 4 || month == 6 || month == 9 || month == 11) {
        return 30;
    } else {
         return 31;
    }
}