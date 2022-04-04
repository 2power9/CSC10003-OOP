#include "XiuMai.h"

string XiuMai::tenTopping = "xiu mai";
long long XiuMai::giaXiuMai = 20000;

XiuMai::XiuMai() : Topping() {
    banhMi = nullptr;
}

XiuMai::XiuMai(BanhMi& other) : Topping() {
    banhMi = &other;
}

long long XiuMai::gia() const {
    return banhMi->gia() + giaXiuMai;
}

void XiuMai::xuat() const {
    banhMi->xuat();
    cout << ", " << tenTopping;
}

XiuMai::~XiuMai() {
    delete banhMi;
}
