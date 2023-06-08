/* Nhap gio v�o ca, gi? ra ca c?a 1 c�ng nh�n. T�nh v� in ra ti?n luong ng�y c?a c�ng nh�n d�.
Bi?t r?ng:
� Gi? v�o ca s?m nh?t l� 6h v� gi? ra ca tr? nh?t l� 18h.
� Ti?n c�ng tru?c 12h l� 6000d/gi? v� sau 12h l� 7500d/gi?
*/
#include <iostream>
using namespace std;

int main() {
   int gioVao, gioRa, soGioCongTac;
   double tienLuong;

   cout << "Nhap gio vao ca (6-18): ";
   cin >> gioVao;

   cout << "Nhap gio ra ca (6-18): ";
   cin >> gioRa;

   // Tinh so gio cong tac
   if (gioVao < 6 || gioVao > 18 || gioRa < 6 || gioRa > 18 || gioRa < gioVao)
      soGioCongTac = 0;
   else
      soGioCongTac = gioRa - gioVao;

   // Tinh tien luong
   if (soGioCongTac <= 6)
      tienLuong = soGioCongTac * 6000;
   else {
      tienLuong = 6 * 6000 + (soGioCongTac - 6) * 7500;
   }

   cout << "So gio cong tac: " << soGioCongTac << endl;
   cout << "Tien luong: " << tienLuong << " VND" << endl;

   return 0;
}

