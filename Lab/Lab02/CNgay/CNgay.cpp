#include "CNgay.h"

Ngay::Ngay()
{
    ngay = thang = nam = 1;
}

bool Ngay::ktNamNhuan() {
    //kiem tra xem nam do co phai nam nhuan khong.
    if (nam % 400 == 0) return true;
    if (nam % 100 == 0) return false;
    if (nam % 4 == 0) return true;
    return false;
}

int Ngay::laySoNgay() {
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

void Ngay::Xuat()
{
    printf("%02d/%02d/%04d", ngay, thang, nam);
}