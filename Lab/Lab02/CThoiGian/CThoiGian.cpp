#include "CThoiGian.h"

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

ThoiGian::ThoiGian()
{
    gio = phut = giay = 0;
}

ThoiGian::ThoiGian(const int& _giay)
{
    giay = (_giay < 0 ? 0 : _giay);
    phut = gio = 0;
    CanBang();
}

ThoiGian::ThoiGian(const int& _phut, const int& _giay)
{
    giay = (_giay < 0 ? 0 : _giay);
    phut = (_phut < 0 ? 0 : _phut);
    gio = 0;
    CanBang();
}

ThoiGian::ThoiGian(const int& _gio, const int& _phut, const int& _giay)
{
    giay = (_giay < 0 ? 0 : _giay);
    phut = (_phut < 0 ? 0 : _phut);
    gio =  (_gio < 0 ? 0 : _gio);
    CanBang();
}

void ThoiGian::Xuat()
{
    printf("%02d:%02d:%02d", gio, phut, giay);
}