//3. Xây dựng lớp Candidate(Thí sinh) gồm các thuộc tính : mã, tên, ngày tháng năm
//sinh, điểm thi Toán, Văn, Anh và các phương thức cần thiết.
//Xây dựng lớp TestCandidate để kiểm tra lớp trên :
//-Nhập vào n thí sinh(n do người dùng nhập)
//- In ra thông tin về các thí sinh có tổng điểm lớn hơn 15
#include <iostream>
#include <string>
using namespace std;

class Candidate {
private:
    int ms;
    string name;
    string ngaysinh;
    float toan;
    float van;
    float anh;

public:
    Candidate(int ms, string name, string ngaysinh, float toan, float van, float anh) {
        this->ms = ms;
        this->name = name;
        this->ngaysinh = ngaysinh;
        this->toan = toan;
        this->van = van;
        this->anh = anh;
    }

    float tongdiem() {
        return toan + van + anh;
    }

    void In() {
        cout << "Thong tin thi sinh:" << endl;
        cout << "ms: " << ms << endl;
        cout << "Name: " << name << endl;
        cout << "Ngay sinh: " << ngaysinh << endl;
        cout << "Diem toan: " << toan << endl;
        cout << "Diem van: " << van << endl;
        cout << "Diem anh: " << anh << endl;
        cout << "Tong diem: " << tongdiem() << endl;
    }
};

class TestCandidate {
private:
    Candidate** candidates;
    int n;

public:
    TestCandidate(int n) {
        this->n = n;
        candidates = new Candidate * [n];
    }

    void Nhap() {
        for (int i = 0; i < n; i++) {
            int ms;
            string name;
            string ngaysinh;
            float toan;
            float van;
            float anh;

            cout << "Nhap thong tin sinh vien thu " << i + 1 << ":" << endl;
            cout << "ms: ";
            cin >> ms;
            cout << "Name: ";
            cin.ignore();
            getline(cin, name);
            cout << "Ngay sinh (DD/MM/YYYY): ";
            getline(cin, ngaysinh);
            cout << "Diem toan: ";
            cin >> toan;
            cout << "Diem van: ";
            cin >> van;
            cout << "Diem anh: ";
            cin >> anh;

            candidates[i] = new Candidate(ms, name, ngaysinh, toan, van, anh);
        }
    }
    void In_thisinh_Tong_hon_15(float score) {
        cout << "Thi sinh co tong nhieu hon: " << score << ":" << endl;
        for (int i = 0; i < n; i++) {
            if (candidates[i]->tongdiem() > score) {
                candidates[i]->In();
            }
        }
    }


};

int main() {
    int n;
    cout << "Nhap so thi sinh: ";
    cin >> n;

    TestCandidate test(n);
    test.Nhap();
    test.In_thisinh_Tong_hon_15(15);

    return 0;
}
