/*
	Nh?p di?m chu?n và di?m 3 môn thi, mã khu v?c (A, B, C), mã d?i tu?ng (1, 2, 3) c?a thí sinh.
	Hi?n th? k?t qu? “Trúng tuy?n” n?u t?ng di?m thi 3 môn c?ng v?i di?m uu tiên khu v?c và
	di?m uu tiên d?i tu?ng l?n hon ho?c b?ng di?m chu?n và không có môn nào b? di?m li?t (0
	di?m). Trong dó, di?m uu tiên khu v?c và di?m uu tiên d?i tu?ng du?c tình nhu sau:
	• Khu v?c A: c?ng 1.5 di?m
	• Khu v?c B: c?ng 1 di?m
	• Khu v?c C: c?ng 0.5 di?m
	• Ð?i tu?ng 1: c?ng 1.5 di?m
	• Ð?i tu?ng 2: c?ng 1 di?m
	• Ð?i tu?ng 3: c?ng .5 di?m
*/
#include <iostream>
using namespace std;

int main() {
   double diemChuan, diem1, diem2, diem3, diemUuTienKhuVuc = 0, diemUuTienDoiTuong = 0, tongDiem;

   cout << "Nhap diem chuan: ";
   cin >> diemChuan;

   cout << "Nhap diem mon 1: ";
   cin >> diem1;

   cout << "Nhap diem mon 2: ";
   cin >> diem2;

   cout << "Nhap diem mon 3: ";
   cin >> diem3;

   char maKhuVuc, maDoiTuong;

   cout << "Nhap ma khu vuc (A, B, C): ";
   cin >> maKhuVuc;

   cout << "Nhap ma doi tuong (1, 2, 3): ";
   cin >> maDoiTuong;

   switch (maKhuVuc) {
      case 'A':
         diemUuTienKhuVuc = 1.5;
         break;
      case 'B':
         diemUuTienKhuVuc = 1;
         break;
      case 'C':
         diemUuTienKhuVuc = 0.5;
         break;
   }

   switch (maDoiTuong) {
      case '1':
         diemUuTienDoiTuong = 1.5;
         break;
      case '2':
         diemUuTienDoiTuong = 1;
         break;
      case '3':
         diemUuTienDoiTuong = 0.5;
         break;
   }

   tongDiem = diem1 + diem2 + diem3 + diemUuTienKhuVuc + diemUuTienDoiTuong;

   if (diem1 == 0 || diem2 == 0 || diem3 == 0) {
      cout << "Khong trung tuyen vi bi diem liet";
   }
   else if (tongDiem >= diemChuan) {
      cout << "Trung tuyen";
   }
   else {
      cout << "Khong trung tuyen vi diem thap hon diem chuan";
   }

   return 0;
}

