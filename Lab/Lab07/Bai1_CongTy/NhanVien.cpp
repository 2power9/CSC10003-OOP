#include "NhanVien.h"

NhanVien::NhanVien() = default;

void NhanVien::input() {
    cin.ignore();

    cout << "Nhap ho ten:";
    getline(cin, hoTen);

    cout << "Nhap dia chi:";
    getline(cin, diaChi);
}

void NhanVien::print() const {
    cout << "Ho ten: " << hoTen << endl;
    cout << "Dia chi: " << diaChi << endl;
}

istream &operator>>(istream &in, NhanVien *nv) {
    nv->input();
    return in;
}

ostream &operator<<(ostream &out, const NhanVien *nv) {
    nv->print();
    return out;
}

string NhanVien::_hoTen_() const {
    return hoTen;
}

string NhanVien::_diaChi_() const {
    return diaChi;
}

NhanVien::NhanVien(const string &hoTen, const string &diaChi) {
    this->hoTen = hoTen;
    this->diaChi = diaChi;
}

NhanVien::~NhanVien() = default;
