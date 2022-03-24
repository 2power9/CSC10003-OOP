#include "NgayThang.h"

NgayThang *NgayThang::maxNgayThang = nullptr;

void NgayThang::canBang() {
    //can bang lai neu ngay bi lech
    while (ngay > laySoNgay() || thang > 12)
    {
        if (ngay > laySoNgay())
        {
            ngay -= laySoNgay();
            ++thang;
        }
        if (thang > 12)
        {
            thang -= 12;
            ++nam;
        }
    }
}

int NgayThang::laySoNgay() const {
    //lay so ngay trong mot thang nao do
    switch (thang)
    {
        case 4: case 6: case 9: case 11:
            return 30;
        case 2:
            if (ktNamNhuan()) return 29;
            return 28;
        default:
            return 31;
    }
}

bool NgayThang::ktNamNhuan() const {
    //kiem tra xem nam do co phai nam nhuan khong.
    if (nam % 400 == 0) return true;
    if (nam % 100 == 0) return false;
    if (nam % 4 == 0) return true;
    return false;
}

NgayThang::NgayThang() {
    ngay = 1;
    thang = 1;
    nam = 1;
    if (maxNgayThang == nullptr || *maxNgayThang < *this) maxNgayThang = this;
}

NgayThang::NgayThang(const int& n) {
    ngay = abs(n);
    thang = 0;
    nam = 0;
    canBang();
    if (maxNgayThang == nullptr || *maxNgayThang < *this) maxNgayThang = this;
}

NgayThang::NgayThang(const int &ngay, const int &thang, const int &nam) {
    this->ngay = abs(ngay);
    this->thang = abs(thang);
    this->nam = abs(nam);
    canBang();
    if (maxNgayThang == nullptr || *maxNgayThang < *this) maxNgayThang = this;
}

ostream &operator<<(ostream &out, const NgayThang &obj) {
    out << setfill('0') << setw(2) << obj.ngay << "/";
    out << setfill('0') << setw(2) << obj.thang << "/";
    out << setfill('0') << setw(4) << obj.nam;
    return out;
}

NgayThang NgayThang::operator+(const NgayThang &rhs) const {
    NgayThang ans(this->ngay + rhs.ngay, this->thang + rhs.thang, this->nam + rhs.nam);
    ans.canBang();
    if (maxNgayThang == nullptr || *maxNgayThang < ans) maxNgayThang = &ans;
    return ans;
}

NgayThang operator+(const NgayThang &lhs, const int &rhs) {
    return lhs + NgayThang(rhs);
}

NgayThang operator+(const int &lhs, const NgayThang &rhs) {
    return NgayThang(lhs) + rhs;
}

NgayThang &NgayThang::operator++() {
    ++this->ngay;
    this->canBang();
    if (maxNgayThang == nullptr || *maxNgayThang < *this) maxNgayThang = this;
    return *this;
}

NgayThang NgayThang::operator++(int temp) {
    NgayThang ans = *this;
    ++ans;
    if (maxNgayThang == nullptr || *maxNgayThang < ans) maxNgayThang = &ans;
    return ans;
}

NgayThang *NgayThang::NgayThangLonNhat() {
    return maxNgayThang;
}

bool NgayThang::operator<(const NgayThang &rhs) const {
    if (this->nam < rhs.nam) return true;
    if (this->nam > rhs.nam) return false;
    if (this->thang < rhs.thang) return true;
    if (this->thang > rhs.thang) return false;
    if (this->ngay < rhs.ngay) return true;
    return false;
}


NgayThang::~NgayThang() = default;



