#include "MaTran.h"
MATRAN::MATRAN() : n(0), p(NULL) {}
MATRAN::MATRAN(int n) : n(n) {
    p = new int*[n];
    for(int i = 0; i < n; i++){
        p[i] = new int[n];
    }
}

MATRAN::MATRAN(const MATRAN& other) : n(other.n) {
    int **p = new int*[n];
    for(int i = 0; i < n; i++){
        p[i] = new int[n];
    }
    for(int i = 0; i < n; i++){
        for(int j = 0;  j < n; j++){
            this->p[i][j] = other.p[i][j];
        }
    }
}   
MATRAN::~MATRAN(){}
void MATRAN::Nhap(){
    if(n == 0){
        cout << "Nhap so dong va so cot: ";
        cin >> this->n;
    }
    p = new int*[n];
    for (int i = 0; i < n; i++) {
        p[i] = new int[n];
    }
    cout << "Nhap gia tri cac phan tu ma tran:" << endl;
    for(int i = 0; i < n; i++){
        for(int j = 0;  j < n; j++){
            cin >> p[i][j];
        }
    }
}
void MATRAN::Xuat(){
    cout << "Gia tri cac phan tu mang:" << endl;
    for(int i = 0; i < n; i++){
        for(int j = 0;  j < n; j++){
            cout << p[i][j] << " ";
        }
        cout << endl;
    }
}
// Liệt kê giá trị các phần tử lẻ nằm trên đường chéo chính của ma trận.
void MATRAN::LietKe(){
    cout << "Gia tri cac phan tu le nam tren duong cheo chinh cua ma tran:\n";
    int d = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i == j){
                if(p[i][j] % 2 != 0){
                    cout << p[i][j] << " ";
                    d++;
                }
            }
        }
    }
    if(d == 0) cout << "Khong co phan tu nao !";
    cout << endl;
}
int DonVi(int a){
    if(a >= 0 && a <= 9){
        return a;
    }
    int temp = 0;
    while(a == 0){
        temp = a % 10;
    }
    return temp;
}
//Đếm số lượng các phần tử có ký số cuối là 3 nằm trên đường chéo phụ của ma trận.
int MATRAN::Dem(){
    int d = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(j == n - i - 1){
                if(DonVi(p[i][j]) == 3){
                    d++;
                }
            }
        }
    }
    return d;
}
//Kiểm tra xem có tồn tại phần tử âm ở nửa mảng vuông phía trên đường chéo chính hay không?
bool MATRAN::KtraAm(){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(j >= i){
                if(p[i][j] >= 0){
                    return false;
                }
            }
        }
    }
    return true;
}
//Tìm phần tử chẵn đầu tiên ở nửa mảng vuông phía dưới đường chéo phụ của ma trận.
int MATRAN::TimPhanTuChanDauTien(){
    cout << "Phan tu chan dau tien o nua mang vuong phia duoi duong cheo phu cua ma tran la: ";
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(j >= n - i - 1){
                if(p[i][j] % 2 == 0){
                    return p[i][j];
                }
            }
        }
    }
    return 0;
}

void MATRAN::SapXepGiamDan(){
    vector<int> v;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            v.push_back(p[i][j]);
        }
    }
    sort(v.begin(), v.end(),[](int a, int b){
        return a >= b;
    });
    int k = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            p[i][j] = v[k++];
        }
    }
    cout << "Da sap xep xong !\n";
}
void MATRAN::PhatSinhMangNgauNhien(int minValue, int maxValue) {
    if(n == 0){
        cout << "Nhap so dong va so cot: ";
        cin >> this->n;
    }
    p = new int*[n];
    for (int i = 0; i < n; i++) {
        p[i] = new int[n];
    }
    srand(static_cast<unsigned int>(time(0)));  // Khởi tạo seed cho hàm rand() bằng thời gian hiện tại
    for (int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++){
            p[i][j] = rand() % (maxValue - minValue + 1) + minValue;
        }
    }
}