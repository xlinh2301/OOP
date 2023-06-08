#include "MaTran.h"
MATRAN::MATRAN() : sd(0), sc(0), p(NULL) {}
MATRAN::MATRAN(int d, int c) : sd(d), sc(c) {
    p = new int*[sd];
    for(int i = 0; i < sd; i++){
        p[i] = new int[sc];
    }
}

MATRAN::MATRAN(const MATRAN& other) : sd(other.sd), sc(other.sc) {
    int **p = new int*[sd];
    for(int i = 0; i < sd; i++){
        p[i] = new int[sc];
    }
    for(int i = 0; i < sd; i++){
        for(int j = 0;  j < sc; j++){
            this->p[i][j] = other.p[i][j];
        }
    }
}   
MATRAN::~MATRAN(){}
void MATRAN::Nhap(){
    if(sd ==0 ||sc == 0){
        cout << "Nhap so dong va so cot: ";
        cin >> this->sd >> this->sc;
    }
    p = new int*[sd];
    for (int i = 0; i < sd; i++) {
        p[i] = new int[sc];
    }
    cout << "Nhap gia tri cac phan tu ma tran:" << endl;
    for(int i = 0; i < sd; i++){
        for(int j = 0;  j < sc; j++){
            cin >> p[i][j];
        }
    }
}
void MATRAN::Xuat(){
    cout << "Gia tri cac phan tu mang:" << endl;
    for(int i = 0; i < sd; i++){
        for(int j = 0;  j < sc; j++){
            cout << p[i][j] << " ";
        }
        cout << endl;
    }
}
bool LaSoNguyenTo(int num) {
    if (num < 2) {
        return false;
    }
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

void MATRAN::LietKeSNT(){
    cout << "Cac phan tu la so nguyen to trong ma tran:" << endl;
    vector<bool> visited(100, false);
    for(int i = 0; i < sd; i++){
        for(int j = 0;  j < sc; j++){
            if(!visited[p[i][j]]){
                if(LaSoNguyenTo(p[i][j])){
                    cout << p[i][j] << " ";
                    visited[p[i][j]] = true; 
                }
            }
        }
    }
    cout << endl;
}
bool LaSoChinhPhuong(int num) {
    return ((int)sqrt(num) * (int)sqrt(num) == num);
}
void MATRAN::DemSCP(){
    cout << "Cac phan tu la so chinh phuong trong ma tran:" << endl;
    vector<bool> visited(100, false);
    for(int i = 0; i < sd; i++){
        for(int j = 0;  j < sc; j++){
            if(!visited[p[i][j]]){
                if(LaSoChinhPhuong(p[i][j])){
                    cout << p[i][j] << " ";
                    visited[p[i][j]] = true;
                }
            } 
        }
    }
    cout << endl;
}
bool LaSoHoanThien(int num) {
    int sum = 0;
    for (int i = 1; i < num; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }
    return (sum == num);
}
void MATRAN::SumOfSHT(){
    int sum = 0;
    cout << "Tong gia tri cac phan tu la SHT tren dong k cua ma tran la:" << endl;
    for(int i = 0; i < sd; i++){
        cout << "Dong thu " << i << " : ";
        for(int j = 0;  j < sc; j++){
            if(LaSoHoanThien(p[i][j])){
                sum += p[i][j];
            }
        }
        cout << sum << endl;
        sum = 0;
    }
    cout << endl;
}
int timSoDao(int nInput)
{
	int nSoDao = 0, nRem;

	while (nInput != 0)
	{
		// Lấy chữ số cuối của số nguyên sử dụng toán tử chia lấy dư (Modulus)
		nRem = nInput % 10;

		// Nhân số đảo với 10 và cộng với chữ số cuối
		nSoDao = (nSoDao * 10) + nRem;

		// Xóa chữ số cuối bằng cách sử dụng toán tử chia lấy phần nguyên (Division)
		nInput = nInput / 10;
	}

	return nSoDao;
}

// Hàm kiểm tra một số nguyên dương n cho trước có phải là số đối xứng hay không
bool laSoDoiXung(int nInput)
{
    if(nInput >= 0 && nInput <= 9){
        return false;
    }
	if (nInput == timSoDao(nInput))
		return true;
	else
		return false;

	// <=> return (n == timSoDao(n));
}

void MATRAN::TbCongSDX() {
    for (int i = 0; i < this->sc; i++) {
        int sum = 0;
        int count = 0;
        cout << "Cot thu " << i << " : ";
        for (int j = 0; j < this->sd; j++) {
            if (laSoDoiXung(p[j][i]) == true) { 
                sum += p[j][i];
                count++;
            }
        }
        if (count != 0) {
            float average = static_cast<float>(sum) / count;
            cout << average << endl;
        } else {
            cout << "Khong co so doi xung" << endl;
        }
    }
}


void MATRAN::SapXepTangDan(){
    vector<int> v;
    for(int i = 0; i < sd; i++){
        for(int j = 0; j < sc; j++){
            v.push_back(p[i][j]);
        }
    }
    sort(v.begin(), v.end());
    int k = 0;
    for(int i = 0; i < sd; i++){
        for(int j = 0; j < sc; j++){
            p[i][j] = v[k++];
        }
    }
    cout << "Da sap xep xong !\n";
}
void MATRAN::PhatSinhMangNgauNhien(int minValue, int maxValue) {
    if(sd ==0 ||sc == 0){
        cout << "Nhap so dong va so cot: ";
        cin >> this->sd >> this->sc;
    }
    p = new int*[sd];
    for (int i = 0; i < sd; i++) {
        p[i] = new int[sc];
    }
    srand(static_cast<unsigned int>(time(0)));  // Khởi tạo seed cho hàm rand() bằng thời gian hiện tại
    for (int i = 0; i < sd; i++) {
        for(int j = 0; j < sc; j++){
            p[i][j] = rand() % (maxValue - minValue + 1) + minValue;
        }
    }
}