#include "Ngay.h"

Ngay::Ngay()
{
    ngay = thang = nam = 1;
}

bool Ngay::ktNamNhuan() const {
    //kiem tra xem nam do co phai nam nhuan khong.
    if (nam % 400 == 0) return true;
    if (nam % 100 == 0) return false;
    if (nam % 4 == 0) return true;
    return false;
}

int Ngay::laySoNgay() const {
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

void Ngay::CanBang()
{
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

Ngay::Ngay(const int& _ngay, const int& _thang, const int& _nam)
{
    ngay = (_ngay == 0 ? 1 : abs(_ngay));
    thang = (_thang == 0 ? 1 : abs(_thang));
    nam = (_nam == 0 ? 1 : abs(_nam));
    CanBang();
}

Ngay::Ngay(const int& _ngay)
{
    ngay = (_ngay == 0 ? 1 : abs(_ngay));
    thang = nam = 1;
    CanBang();
}

Ngay Ngay::operator+(const Ngay& rhs) const
{
    Ngay ans(this->ngay + rhs.ngay, this->thang + rhs.thang, this->nam + rhs.nam);
    ans.CanBang();
    return ans;
}

Ngay Ngay::operator-(const Ngay& rhs) const
{
    Ngay ans(this->ngay - rhs.ngay, this->thang - rhs.thang, this->nam - rhs.nam);
    while ( ans.ngay < 1 || ans.thang < 1)
    {
        if (ans.thang < 1)
        {
            --ans.nam;
            ans.thang += 12;
        }
        if (ans.ngay < 1)
        {
            ans.ngay += ans.laySoNgay();
            --ans.thang;
        }
    }
    ans.CanBang();
    return ans;
}

ostream& operator<< (ostream& os, const Ngay& d)
{
    os << setfill('0') << setw(2) << d.ngay << "/";
    os << setfill('0') << setw(2) << d.thang << "/";
    os << setfill('0') << setw(4) << d.nam;
    return os;
}

bool Ngay::operator>(const Ngay& rhs) const {
    return (this->laySoNgay() > rhs.laySoNgay());
}

Ngay operator+(const Ngay& lhs, const int& rhs) {
    return lhs + Ngay(rhs);
}

Ngay operator+(const int& lhs, const Ngay& rhs) {
    return (Ngay(lhs) + rhs);
}

Ngay operator-(const Ngay &lhs, const int &rhs) {
    return lhs - Ngay(rhs);
}

Ngay operator-(const int &lhs, const Ngay &rhs) {
    return Ngay(lhs) - rhs;
}

Ngay::~Ngay() = default;
