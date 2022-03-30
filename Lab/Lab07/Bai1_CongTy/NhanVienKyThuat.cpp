#include "NhanVienKyThuat.h"

NhanVienKyThuat::NhanVienKyThuat() : NhanVien() {}

void NhanVienKyThuat::input() {
    NhanVien::input();

    cout << "Nhap chung chi nganh:";
    getline(cin, chungChiNganh);

    cout << "Nhap so luong sang kien:";
    cin >> sangKien;
}

void NhanVienKyThuat::print() const {
    NhanVien::print();
    cout << "Chung chi nganh: " << chungChiNganh << endl;
    cout << "So luong sang kien: " << sangKien << endl;
}

istream &operator>>(istream &in, NhanVienKyThuat *nv) {
    nv->input();
    return in;
}

ostream &operator<<(ostream &out, const NhanVienKyThuat *nv) {
    nv->print();
    return out;
}

NhanVienKyThuat::NhanVienKyThuat(const string &hoTen, const string &diaChi, const string &chungChiNganh,
                                 const int &sangKien) : NhanVien(hoTen, diaChi){
    this->chungChiNganh = chungChiNganh;
    this->sangKien = sangKien;
}

bool NhanVienKyThuat::xuatSac() {
    return (sangKien >= 6);
}

string NhanVienKyThuat::formater() {
    return "nvkt: " + hoTen + " (" + diaChi + ") [" + chungChiNganh + "] <" + to_string(sangKien) + ">" ;
}

NhanVienKyThuat::~NhanVienKyThuat() = default;
