#include "Trung.h"

long long Trung::giaTrung = 10000;
string Trung::tenTopping = "trung";

Trung::Trung() : Topping() {
    banhMi = nullptr;
}

Trung::Trung(BanhMi& other) : Topping() {
    banhMi = &other;
}

long long Trung::gia() const {
    return banhMi->gia() + giaTrung;
}

void Trung::xuat() const {
    banhMi->xuat();
    cout << ", " << tenTopping;
}

Trung::~Trung() {
    delete banhMi;
}