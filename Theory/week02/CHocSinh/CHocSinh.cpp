#include "CHocSinh.hpp"

CHocSinh::CHocSinh() {
    hoTen = "";
    toan = 0;
    van = 0;
}

CHocSinh::CHocSinh(const string& _hoTen_, const double& _toan_, const double& _van_) {
    hoTen = _hoTen_;
    toan = _toan_;
    van = _van_;
}

string CHocSinh::_hoTen_() const {
    return hoTen;
}

double CHocSinh::_toan_() const {
    return toan;
}

double CHocSinh::_van_() const {
    return van;
}

void CHocSinh::ganHoTen(const string & _hoTen_) {
    hoTen = _hoTen_;
}

void CHocSinh::ganToan(const double & _toan_) {
    toan = _toan_;
}

void CHocSinh::ganVan(const double & _van_) {
    van = _van_;
}

double CHocSinh::DTB() const {
    return (toan + van) / 2;
}

string CHocSinh::xepLoai() const {
    double dtb = this->DTB();
    if (dtb >= 8) return "Gioi";
    if (dtb >= 7) return "Kha";
    if (dtb >= 5) return "Trung Binh";
    return "Yeu";
}

istream &operator>>(istream &in, CHocSinh &obj) {
    cout << "Nhap ho ten: ";
    in.ignore();
    getline(in, obj.hoTen);
    cout << "Nhap diem Toan: ";
    in >> obj.toan;
    cout << "Nhap diem Van: ";
    in >> obj.van;
    return in;
}

ostream &operator<<(ostream &out, const CHocSinh &obj) {
    out << "Ho va Ten: " << obj.hoTen << "\nDiem toan: " << obj.toan << "\nDiem van: " << obj.van << endl;
    return out;
}

CHocSinh::~CHocSinh() = default;
