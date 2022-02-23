#ifndef CSC10003_OOP_CTHOIGIAN_H
#define CSC10003_OOP_CTHOIGIAN_H

#include <stdio.h>
#include <iostream>
using namespace std;

class ThoiGian
{
private:
    unsigned int gio, phut, giay;
public:
    void CanBang();
    ThoiGian();
    ThoiGian(const int&);
    ThoiGian(const int&, const int&);
    ThoiGian(const int&, const int&, const int&);
    void Xuat();
    ~ThoiGian() {}
};

#endif //CSC10003_OOP_CTHOIGIAN_H
