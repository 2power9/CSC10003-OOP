#include "CPhanSo.h"

CPhanSo::CPhanSo() {
    tu = 0;
    mau = 0;
}

CPhanSo::CPhanSo(const int& tu, const int& mau) {
    this->tu = tu;
    this->mau = mau;
}

int CPhanSo::layTu() {
    return this->tu;
}

int CPhanSo::layMau() {
    return this->mau;
}

void CPhanSo::ganTu(const int& tuMoi) {
    this->tu = tuMoi;
}

void CPhanSo::ganMau(const int& mauMoi) {
    this->mau = mauMoi;
}

CPhanSo CPhanSo::nghichDao() {
    int temp = this->tu;
    this->tu = this->mau;
    this->mau = temp;
}

int UCLN(int a, int b) {
    while (b > 0)
    {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

CPhanSo CPhanSo::rutGon() {
    int num = UCLN(this->tu, this->mau);
    this->tu /= num;
    this->mau /= num;
    return *this;
}

CPhanSo CPhanSo::operator+(const CPhanSo& rhs) const {
    CPhanSo ans;
    ans.ganTu(this->tu*rhs.mau + this->mau*rhs.tu);
    ans.ganMau(this->mau*rhs.mau);
    return ans.rutGon();
}

CPhanSo CPhanSo::operator-(const CPhanSo& rhs) const {
    CPhanSo ans;
    ans.ganTu(this->tu*rhs.mau - this->mau*rhs.tu);
    ans.ganMau(this->mau*rhs.mau);
    return ans.rutGon();
}

CPhanSo CPhanSo::operator*(const CPhanSo& rhs) const {
    CPhanSo ans;
    ans.ganTu(this->tu*rhs.tu);
    ans.ganMau(this->mau*rhs.mau);
    return ans.rutGon();
}

CPhanSo CPhanSo::operator/(const CPhanSo& rhs) const {
    CPhanSo ans;
    ans.ganTu(this->tu*rhs.mau);
    ans.ganMau(this->mau*rhs.tu);
    return ans.rutGon();
}

istream &operator>>(istream &in, CPhanSo &p) {
    int tu, mau;
    char c;
    cout << "Nhap phan so (a/b) : ";
    in >> p.tu >> c >> p.mau;
    return in;
}

ostream &operator<<(ostream &out, const CPhanSo &p) {
    if (p.mau == 1) out << p.tu;
    else out << p.tu << "/" << p.mau;
    return out;
}

CPhanSo::~CPhanSo() = default;

int main() {
    CPhanSo a(1, 5), b;
    cin >> b;
    cout << "Tong 2 so " << a<< " va " << b << " = " << a + b << endl;
    cout << "Hieu 2 so " << a<< " va " << b << " = " << a - b << endl;
    cout << "Tich 2 so " << a<< " va " << b << " = " << a * b << endl;
    cout << "Thuong 2 so " << a<< " va " << b << " = " << a / b << endl;
    return 0;
}