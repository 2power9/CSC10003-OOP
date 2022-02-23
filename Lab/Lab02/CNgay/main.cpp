#include "CNgay.h"

int main()
{
    Ngay n1;    //1/1/1
    n1.Xuat();
    cout << "\n";
    Ngay n2(02, 10, 2014);      //2/10/2014
    n2.Xuat();
    cout << "\n";
    Ngay n3(-10, 16, 2000);     //10/4/2001
    n3.Xuat();
    cout << "\n";
    Ngay n4(1000);              //27/9/3
    n4.Xuat();
    return 0;
}