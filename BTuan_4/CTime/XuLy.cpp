#include "Ctime.h"
CTime::~CTime(){}
CTime::CTime(): hour(0), sec(0), min(0){}
CTime::CTime(int sec): hour(0), min(0), sec(sec){}
CTime::CTime(int hour, int min) : hour(hour), min(min), sec(0) {}
CTime::CTime(int a, int b, int c):hour(a), min(b), sec(c){}
istream& operator>>(istream& is, CTime& time) {
	do {
		cout << "Nhap gio: "; cin >> time.hour;
		cout << "Nhap phut: "; cin >> time.min;
		cout << "Nhap giay: "; cin >> time.sec;
	} while (time.hour < 0 || time.min < 0 || time.sec < 0);
	return is;
}
ostream& operator<<(ostream& os, CTime& time) {
	if (time.sec >= 60) {
		time.min += (int)(time.sec / 60);
		time.sec = time.sec % 60;
	}
	if (time.min >= 60) {
		time.hour += (int)(time.min / 60);
		time.min = time.min % 60;
	}
	if (time.hour < 0 || time.min < 0 || time.sec < 0) cout << "error\n";
	os << time.hour << "h : " << time.min << "p : " << time.sec << "s" << endl;
	return os;
}
CTime operator+(const CTime& t1, const CTime& t2){
	CTime t;
	t.sec = t1.sec + t2.sec;
	t.min = t1.min + t2.min;
	t.hour = t1.hour + t2.hour;
	return t;
}
CTime operator-(const CTime& t1, const CTime& t2) {
	CTime t;
	t.sec = t1.sec - t2.sec;
	t.min = t1.min - t2.min;
	t.hour = t1.hour - t2.hour;
	return t;
}
CTime CTime::operator++() {
	sec += 1;
	return *this;
}
CTime CTime::operator--() {
	sec -= 1;

	return *this;
}