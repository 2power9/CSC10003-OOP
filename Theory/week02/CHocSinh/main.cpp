#include "CHocSinh.hpp"

int main() {
    CHocSinh hs = CHocSinh("Tran Nguyen Hue Nhu", 10, 8);
    cout << "Ho ten hoc sinh: " << hs._hoTen_() << endl;
    cout << "Diem toan: " << hs._toan_() << endl;
    cout << "Diem van cu: " << hs._van_() << endl;
    hs.ganVan(9);
    cout << "Diem van moi: " << hs._van_() << endl;
    cout << "Nhap hoc sinh moi...\n";
    CHocSinh hsMoi;
    cin >> hsMoi;
    cout << hsMoi;
    cout << "Diem trung binh cua hoc sinh moi: " << hsMoi.DTB() << endl;
    cout << "Xep loai cua hoc sinh moi: " << hsMoi.xepLoai() << endl;
    return 0;
}
