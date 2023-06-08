#include "CDate.h"
#include "CDate.cpp"

int main(){
    CDate date1(15, 5, 2023);
    CDate date2 = date1 + 10; // date2 = 25/5/2023
    CDate date3 = date1 - 5;  // date3 = 10/5/2023
    ++date1;                  // date1 = 16/5/2023
    --date2;                  // date2 = 24/5/2023
    int diff = date1 - date3;  // diff = 6 (khoảng cách 6 ngày giữa date3 và date1)

    std::cout << "date1: " << date1 << std::endl;
    std::cout << "date2: " << date2 << std::endl;
    std::cout << "date3: " << date3 << std::endl;
    std::cout << "diff: " << diff << " days" << std::endl;

    return 0;
}