#include "CThoiGian.h"

int main()
{
    ThoiGian tg1;               //00:00:00
    tg1.Xuat();
    cout << "\n";
    ThoiGian tg2(1212);         //00:20:12
    tg2.Xuat();
    cout << "\n";
    ThoiGian tg3(125, 45);      //02:05:45
    tg3.Xuat();
    cout << "\n";
    ThoiGian tg4(12, 239, -78); //15:59:00
    tg4.Xuat();
    return 0;
}