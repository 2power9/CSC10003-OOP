#include "CongTy.h"

int main() {
    CongTy obj;
    obj.nhapFile(R"(C:\Users\huenh\Documents\Code\CSC10003-OOP\Lab\Lab07\Bai1_CongTy\input.txt)");
    cout << obj;
    cout << "====================\n";
    cout << "Danh sach nhan vien xuat sac:\n\n";
    vector <NhanVien*> ds = obj.dsNhanVienXuatSac();
    for (NhanVien *nv : ds) cout << nv << endl;
    cout << "====================\n";
    obj.ghiFile(R"(C:\Users\huenh\Documents\Code\CSC10003-OOP\Lab\Lab07\Bai1_CongTy\output.txt)");
    return 0;
}