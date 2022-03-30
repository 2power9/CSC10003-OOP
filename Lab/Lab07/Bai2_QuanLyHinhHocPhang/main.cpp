#include "QuanLyHinhHocPhang.h"

int main() {
    QuanLyHinhHocPhang obj, obj2;
    cout << "Opterator check:\n";
    cin >> obj;
    cout << obj;
    cout << "File reader check:\n";
    obj2.nhapFile(R"(C:\Users\huenh\Documents\Code\CSC10003-OOP\Lab\Lab07\Bai2_QuanLyHinhHocPhang\hpp.txt)");
    cout << obj2;
    return 0;
}