#include "BanhMiKhong.h"

BanhMiKhong::BanhMiKhong() : BanhMi() {
    ten = "banh mi khong";
}

long long BanhMiKhong::gia() const {
    return 5000;
}

void BanhMiKhong::xuat() const {
    BanhMi::xuat();
}

BanhMiKhong::~BanhMiKhong() = default;
