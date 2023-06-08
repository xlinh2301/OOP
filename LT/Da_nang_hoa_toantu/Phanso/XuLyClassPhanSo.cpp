#include "ClassPhanSo.h"
int PHANSO::dem = 0;
PHANSO::~PHANSO() {
	//cout << "Da huy 1 phan so => Con " << --dem << " phan so\n";
	--dem;
}
PHANSO::PHANSO() : ts(0), ms(1)
{
	dem++;
}
PHANSO::PHANSO(int ts) : ts(ts), ms(1)
{
	dem++;
}
PHANSO::PHANSO(int ts, int ms): ts(ts), ms(ms)
{
	dem++;
}
PHANSO::PHANSO(const PHANSO& ps) :ts(ps.ts), ms(ps.ms)
{
	dem++;
}
void PHANSO::Nhap() {
	cout << "Nhap tu so: ";
	cin >> ts;
	do
	{
		cout << "Nhap mau so (khac 0): ";
		cin >> ms;
	} while (ms == 0);
}
void PHANSO::Xuat() {
	RutGon();
	if (ms < -1)
		cout << -ts << "/" << -ms;
	else if (ms == -1)
		cout << -ts;
	else if (ms == 1)
		cout << ts;
	else
		cout << ts << "/" << ms;
}
int PHANSO::TimUSCLN(int a, int b) {
	int uscln;
	a = abs(a);
	b = abs(b);
	if (a == 0 && b == 0)
		uscln = 1;
	else if (a == 0 || b == 0)
		uscln = a + b;
	else
	{
		//Euclide
		while (a != b)
		{
			if (a > b)
				a -= b;
			else
				b -= a;
		}
		uscln = a;
	}
	return uscln;
}
void PHANSO::RutGon() {
	int uscln = TimUSCLN(ts, ms);
	ts /= uscln;
	ms /= uscln;
}
int PHANSO::GetTS() const {
	return ts;
}
int PHANSO::GetMS() const {
	return ms;
}
int PHANSO::GetDem() {
	return dem;
}
void PHANSO::SetTS(int ts) {
	this->ts = ts;
}
void PHANSO::SetMS(int ms) {
	this->ms = ms;
}
void PHANSO::SetPS(int ts, int ms) {
	this->ts = ts;
	this->ms = ms;
}
PHANSO operator+(const PHANSO& ps1, const PHANSO& ps2) {
	return PHANSO(ps1.ts * ps2.ms + ps1.ms * ps2.ts, ps1.ms * ps2.ms);
}
PHANSO operator-(const PHANSO& ps1, const PHANSO& ps2) {
	return PHANSO(ps1.ts * ps2.ms - ps1.ms * ps2.ts, ps1.ms * ps2.ms);
}
PHANSO operator*(const PHANSO& ps1, const PHANSO& ps2) {
	return PHANSO(ps1.ts * ps2.ts, ps1.ms * ps2.ms);
}
PHANSO operator/(const PHANSO& ps1, const PHANSO& ps2) {
	return PHANSO(ps1.ts * ps2.ms, ps1.ms * ps2.ts);
}
PHANSO PHANSO::operator++() // ++ps_this
{
	ts += ms;
	return *this;
}
PHANSO PHANSO::operator++(int) // ps_this++
{
	PHANSO pstam(ts, ms);
	ts += ms;
	return pstam;
}
PHANSO PHANSO::operator--() // --ps_this
{
	ts -= ms;
	return *this;
}
PHANSO PHANSO::operator--(int) // ps_this--
{
	PHANSO pstam(ts, ms);
	ts -= ms;
	return pstam;
}
PHANSO::operator double() const // (double)ps_this
{
	return (double)ts / ms;
}
bool operator==(const PHANSO& ps1, const PHANSO& ps2)
{
	return ps1.ts * ps2.ms == ps2.ts * ps1.ms;
}
bool operator!=(const PHANSO& ps1, const PHANSO& ps2)
{
	return ps1.ts * ps2.ms != ps2.ts * ps1.ms;
}
bool operator<(const PHANSO& ps1, const PHANSO& ps2)
{
	return ps1.ts * ps2.ms < ps2.ts * ps1.ms;
}
bool operator<=(const PHANSO& ps1, const PHANSO& ps2)
{
	return ps1.ts * ps2.ms <= ps2.ts * ps1.ms;
}
bool operator>(const PHANSO& ps1, const PHANSO& ps2)
{
	return ps1.ts * ps2.ms > ps2.ts * ps1.ms;
}
bool operator>=(const PHANSO& ps1, const PHANSO& ps2)
{
	return ps1.ts * ps2.ms >= ps2.ts * ps1.ms;
}
istream& operator>>(istream& is, PHANSO& ps)
{
	cout << "Nhap tu so: ";
	is >> ps.ts;
	do
	{
		cout << "Nhap mau so (khac 0): ";
		is >> ps.ms;
	} while (ps.ms == 0);
	return is;
}
ostream& operator<<(ostream& os, PHANSO& ps)
{
	ps.RutGon();
	if (ps.ms < -1)
		os << -ps.ts << "/" << -ps.ms;
	else if (ps.ms == -1)
		os << -ps.ts;
	else if (ps.ms == 0)
		os << "Khong chia cho so 0";
	else if (ps.ms == 1)
		os << ps.ts;
	else
		os << ps.ts << "/" << ps.ms;
	return os;
}