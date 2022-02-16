#ifndef CSC10003_OOP_CNGAY_H
#define CSC10003_OOP_CNGAY_H

#include <iostream>
#include <stdio.h>
using namespace std;

class Ngay
{
private:
    int ngay, thang, nam;
public:
    Ngay();
    bool ktNamNhuan();
    int laySoNgay();
    void CanBang();
    Ngay(const int&, const int&, const int&);
    Ngay(const int&);
    void Xuat();
    ~Ngay() {}
};

#endif //CSC10003_OOP_CNGAY_H
