/* Nhap gio vào ca, gi? ra ca c?a 1 công nhân. Tính và in ra ti?n luong ngày c?a công nhân dó.
Bi?t r?ng:
• Gi? vào ca s?m nh?t là 6h và gi? ra ca tr? nh?t là 18h.
• Ti?n công tru?c 12h là 6000d/gi? và sau 12h là 7500d/gi?
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

