#include "ChaBong.h"

string ChaBong::tenTopping = "cha bong";
long long ChaBong::giaChaBong = 12000;

ChaBong::ChaBong() : Topping() {
    banhMi = nullptr;
}

ChaBong::ChaBong(BanhMi &other) {
    banhMi = &other;
}

long long ChaBong::gia() const {
   return banhMi->gia() + giaChaBong;
}

void ChaBong::xuat() const {
    banhMi->xuat();
    cout << ", " << tenTopping;
}

ChaBong::~ChaBong() {
    delete banhMi;
}
