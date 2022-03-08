#include "CSoPhuc.hpp"

CSoPhuc::CSoPhuc() {
    thuc = 0;
    ao = 0;
}

CSoPhuc::CSoPhuc(const double& _thuc_,const double& _ao_) {
    thuc = _thuc_;
    ao = _ao_;
}

double CSoPhuc::_thuc_() const {
    return thuc;
}

double CSoPhuc::_ao_() const {
    return ao;
}

void CSoPhuc::ganThuc(const double& _thuc_) {
    this->thuc = _thuc_;
}

void CSoPhuc::ganAo(const double & _ao_) {
    this->ao = _ao_;
}

double CSoPhuc::module() const {
    return sqrt(thuc*thuc + ao*ao);
}

CSoPhuc CSoPhuc::operator+(const CSoPhuc& rhs) const {
    CSoPhuc ans = CSoPhuc(thuc + rhs.thuc, ao);
    return ans;
}

CSoPhuc CSoPhuc::operator-(const CSoPhuc& rhs) const {
    CSoPhuc ans = CSoPhuc(thuc - rhs.thuc, ao - rhs.ao);
    return ans;
}

CSoPhuc CSoPhuc::operator*(const CSoPhuc& rhs) const {
    CSoPhuc ans = CSoPhuc(thuc*rhs.thuc - ao*rhs.ao, thuc*rhs.ao + ao*rhs.thuc);
    return ans;
}

CSoPhuc CSoPhuc::operator/(const CSoPhuc& rhs) const {
    double denom = rhs.thuc*rhs.thuc + rhs.ao*rhs.ao;
    CSoPhuc ans = CSoPhuc(thuc*rhs.thuc + ao*rhs.ao / denom, ao*rhs.thuc - thuc*rhs.ao /denom);
    return ans;
}

istream &operator>>(istream&in , CSoPhuc& obj) {
    cout << "Nhap phan thuc: ";
    in >> obj.thuc;
    cout << "Nhap phan ao: ";
    in >> obj.ao;
    return in;
}

ostream & operator<<(ostream &out, const CSoPhuc& obj) {
    out << obj.thuc << " + " << obj.ao << "i";
    return out;
}

CSoPhuc::~CSoPhuc() = default;