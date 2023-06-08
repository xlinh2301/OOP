//Tính so ngày trong tháng ung voi tháng và nam duoc nhap vào.
#include <iostream>
using namespace std;

int main() {
   int month, year, daysInMonth;

   cout << "Nhap thang (1-12): ";
   cin >> month;

   cout << "Nhap nam: ";
   cin >> year;

   if (month == 2) {
      if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
         daysInMonth = 29;
      else
         daysInMonth = 28;
   }
   else if (month == 4 || month == 6 || month == 9 || month == 11)
      daysInMonth = 30;
   else
      daysInMonth = 31;

   cout << "So ngay trong thang " << month << " cua nam " << year << " la " << daysInMonth << endl;

   return 0;
}


