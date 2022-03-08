#include "ThoiGian.h"

void ThoiGian::CanBang() {
    //Can bang lai thoi gian bi lech
    if (giay > 60)
    {
        phut += giay / 60;
        giay %= 60;
    }
    if (phut > 60)
    {
        gio += phut / 60;
        phut %= 60;
    }
}

ThoiGian::ThoiGian(const int& _giay)
{
    giay = (_giay < 0 ? -_giay : _giay);
    phut = gio = 0;
    CanBang();
}

ThoiGian::ThoiGian(const int& _phut, const int& _giay)
{
    giay = (_giay < 0 ? -_giay : _giay);
    phut = (_phut < 0 ? -_phut : _phut);
    gio = 0;
    CanBang();
}

ThoiGian::ThoiGian(const int& _gio, const int& _phut, const int& _giay)
{
    giay = (_giay < 0 ? -_giay : _giay);
    phut = (_phut < 0 ? -_phut : _phut);
    gio =  (_gio < 0 ? -_gio : _gio);
    CanBang();
}


ostream& operator<<(ostream& os, const ThoiGian& t)
{
    os << setfill('0') << setw(2) << t.gio << ":";
    os << setfill('0') << setw(2) << t.phut << ":";
    os << setfill('0') << setw(2) << t.giay;
    return os;
}

int ThoiGian::tinhGiay() const {
    return (gio * 3600 + phut * 60 + giay);
}

ThoiGian::ThoiGian() {
    gio = phut = giay = 0;
}

ThoiGian ThoiGian::operator+(const ThoiGian &rhs) const {
    return ThoiGian(this->tinhGiay() + rhs.tinhGiay());
}

ThoiGian ThoiGian::operator-(const ThoiGian &rhs) const {
    return ThoiGian(max(this->tinhGiay() - rhs.tinhGiay(), 0));
}

bool ThoiGian::operator<=(const ThoiGian &rhs) const {
    return (this->tinhGiay() <= rhs.tinhGiay());
}

ThoiGian operator+(const int &lhs, const ThoiGian &rhs)  {
    return (ThoiGian(lhs) + rhs);
}

ThoiGian operator+(const ThoiGian &lhs, const int &rhs) {
    return (lhs + ThoiGian(rhs));
}

ThoiGian operator-(const int &lhs, const ThoiGian &rhs) {
    return (ThoiGian(lhs) - rhs);
}

ThoiGian operator-(const ThoiGian &lhs, const int &rhs) {
    return (lhs - ThoiGian(rhs));
}

bool operator<=(const int &lhs, const ThoiGian &rhs) {
    return (lhs <= rhs.tinhGiay());
}

ThoiGian::~ThoiGian() = default;
