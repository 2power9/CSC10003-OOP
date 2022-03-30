#include "NhanVienThuKy.h"

NhanVienThuKy::NhanVienThuKy() : NhanVien() {}

void NhanVienThuKy::input() {
    NhanVien::input();

    cout << "Nhap chung chi ngoai ngu:";
    getline(cin, chungChiNgoaiNgu);

    cout << "Nhap so luong bao cao:";
    cin >> baoCao;
}

void NhanVienThuKy::print() const {
    NhanVien::print();

    cout << "Chung chi ngoai ngu: " << chungChiNgoaiNgu << endl;
    cout << "So bao cao: " << baoCao << endl;
}

istream &operator>>(istream &in, NhanVienThuKy *nv) {
    nv->input();
    return in;
}

ostream& operator<<(ostream &out, const NhanVienThuKy *nv) {
   nv->print();
   return out;
}

NhanVienThuKy::NhanVienThuKy(const string &hoTen, const string &diaChi, const string &chungChiNgoaiNgu,
                             const int &baoCao) : NhanVien(hoTen, diaChi) {
    this->chungChiNgoaiNgu = chungChiNgoaiNgu;
    this->baoCao = baoCao;
}

bool NhanVienThuKy::xuatSac() {
    return (baoCao >= 12);
}

string NhanVienThuKy::formater() {
    return "nvtk: " + hoTen + " (" + diaChi + ") [" + chungChiNgoaiNgu + "] <" + to_string(baoCao) + ">" ;
}

NhanVienThuKy::~NhanVienThuKy() = default;
