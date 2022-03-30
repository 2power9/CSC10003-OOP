#include "HinhHocPhang.h"


HinhHocPhang::HinhHocPhang() = default;

istream &operator>>(istream &in, HinhHocPhang *obj) {
    obj->input();
    return in;
}

ostream &operator<<(ostream &out, const HinhHocPhang *obj) {
    obj->print();
    return out;
}

HinhHocPhang::~HinhHocPhang() = default;


