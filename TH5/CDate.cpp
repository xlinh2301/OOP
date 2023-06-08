#include "CDate.h"

CDate::CDate()
{
    ngay = 0;
    thang = 0;
    nam = 0;
}
CDate::CDate(int ngay) : ngay(0), thang(thang), nam(nam) {}
CDate::CDate(int ngay, int thang) : ngay(0), thang(0), nam(nam) {}
CDate::CDate(int ngay, int thang, int nam) : ngay(ngay), thang(thang), nam(nam) {}
CDate::~CDate(){}

CDate& CDate::operator++()
{
    int k = ngay + 1;
    do{
        switch (thang)
        {
            case 1:case 3:case 5: case 7:case 8: case 10: case 12:
                if (k > 31){
                    thang++;
                    if (thang == 13){
                        thang = 1;
                        nam++;
                    }
                    k -= 31;
                }else{
                    ngay = k;
                    k = 0;
                }
                break;
            case 4:case 6: case 9: case 11:
                if (k > 30){
                    thang++;
                    k -= 30;
                }else{
                    ngay = k;
                    k = 0;
                }
                break;
            case 2:
                if (nam % 400 == 0 || (nam % 4 == 0 && nam % 100 != 0)){
                    if (k > 29){
                        thang++;
                        k -= 29;
                    }
                    else{
                        ngay = k;
                        k = 0;
                    }
                }
                else{
                    if (k > 28){
                        thang++;
                        k -= 28;
                    }
                    else{
                        ngay = k;
                        k = 0;
                    }
                }
                break;
        }
    } while (k > 0);
    return *this;
}
CDate CDate::operator++(int y)
{
    CDate temp;
    temp.nam = this->nam;
    temp.thang = this->thang;
    temp.ngay = this->ngay;
    int k = ngay + 1;
    do{
        switch (thang){
            case 1:case 3:case 5: case 7:case 8: case 10: case 12:
            if (k > 31)
            {
                thang++;
                if (thang == 13)
                {
                    thang = 1;
                    nam++;
                }
                k -= 31;
            }
            else
            {
                ngay = k;
                k = 0;
            }
            break;
            case 4:case 6: case 9: case 11:
                if (k > 30)
                {
                    thang++;
                    k -= 30;
                }
                else
                {
                    ngay = k;
                    k = 0;
                }
                break;
            case 2:
            if (nam % 400 == 0 || (nam % 4 == 0 && nam % 100 != 0))
            {
                if (k > 29)
                {
                    thang++;
                    k -= 29;
                }
                else
                {
                    ngay = k;
                    k = 0;
            }
            }
            else
            {
                if (k > 28)
                {
                    thang++;
                    k -= 28;
                }
                else
                {
                    ngay = k;
                    k = 0;
                }
            }
            break;
        }
    }while (k > 0);
    return temp;
}
CDate& CDate::operator--()
{
    int k = ngay - 1;
    do{
        switch (thang)
        {
            case 1:case 3:case 5: case 7:case 8: case 10: case 12:
                if (k > 31){
                    thang++;
                    if (thang == 13){
                        thang = 1;
                        nam++;
                    }
                    k -= 31;
                }else{
                    ngay = k;
                    k = 0;
                }
                break;
            case 4:case 6: case 9: case 11:
                if (k > 30){
                    thang++;
                    k -= 30;
                }else{
                    ngay = k;
                    k = 0;
                }
                break;
            case 2:
                if (nam % 400 == 0 || (nam % 4 == 0 && nam % 100 != 0)){
                    if (k > 29){
                        thang++;
                        k -= 29;
                    }
                    else{
                        ngay = k;
                        k = 0;
                    }
                }
                else{
                    if (k > 28){
                        thang++;
                        k -= 28;
                    }
                    else{
                        ngay = k;
                        k = 0;
                    }
                }
                break;
        }
    } while (k > 0);
    return *this;
}
CDate CDate::operator--(int y)
{
    CDate temp;
    temp.nam = this->nam;
    temp.thang = this->thang;
    temp.ngay = this->ngay;
    int k = ngay - 1;
    do{
        switch (thang){
            case 1:case 3:case 5: case 7:case 8: case 10: case 12:
            if (k > 31)
            {
                thang++;
                if (thang == 13)
                {
                    thang = 1;
                    nam++;
                }
                k -= 31;
            }
            else
            {
                ngay = k;
                k = 0;
            }
            break;
            case 4:case 6: case 9: case 11:
                if (k > 30)
                {
                    thang++;
                    k -= 30;
                }
                else
                {
                    ngay = k;
                    k = 0;
                }
                break;
            case 2:
            if (nam % 400 == 0 || (nam % 4 == 0 && nam % 100 != 0))
            {
                if (k > 29)
                {
                    thang++;
                    k -= 29;
                }
                else
                {
                    ngay = k;
                    k = 0;
            }
            }
            else
            {
                if (k > 28)
                {
                    thang++;
                    k -= 28;
                }
                else
                {
                    ngay = k;
                    k = 0;
                }
            }
            break;
        }
    }while (k > 0);
    return temp;
}
void CDate::SetNgay(int ngay){
    this->ngay = ngay;
}
void CDate::SetThang(int thang){
    this->thang = thang;
}
void CDate::SetNam(int nam){
    this->nam = nam;
}
int CDate::GetNgay(){
    return this->ngay;
}
int CDate::GetThang(){
    return this->thang;
}
int CDate::GetNam(){
    return this->nam;
}
std::istream& operator>>(std::istream& is, CDate& x)
{
    cout << "\nNhap ngay :";
    is >> x.ngay;
    cout << "\nNhap thang :";
    is >> x.thang;
    cout << "\nNhap nam :";
    is >> x.nam;
    return is;
}
ostream& operator<<(ostream& os, CDate x)
{
    switch (x.thang){
        case 1:case 3:case 5: case 7:case 8: case 10: case 12:
            if (x.ngay > 31)
            {
                x.thang = x.thang + 1;
                if (x.thang == 13)
                {
                    x.thang = 1;
                    x.nam = x.nam + 1;
                }
                x.ngay -= 31;
            }
            break;
        case 4:case 6: case 9: case 11:
            if (x.ngay > 30)
            {
                x.thang++;
                x.ngay -= 30;
            }
            break;
        case 2:
            if (x.nam % 400 == 0 || (x.nam % 4 == 0 && x.nam % 100 != 0))
            {
                if (x.ngay > 29)
                {
                    x.thang++;
                    x.ngay -= 29;
                }
            }
            else
            {
                if (x.ngay > 28)
                {
                    x.thang++;
                    x.ngay -= 28;
                }
            }
            break;
    }
    os << "\nNgay " << x.ngay << " thang " << x.thang << " nam " << x.nam;
    return os;
}