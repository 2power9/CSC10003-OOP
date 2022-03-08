#include "HS.h"

HS::HS(void) {
    hoTen = nullptr;
}

HS::HS(const char *ht) {
    int len = strlen(ht);
    hoTen = new char[len + 1];
    strcpy_s(hoTen, len + 1, ht);
}

HS::HS(const HS& hs) {
    cout << "Copy Constructor..." << endl;
    int len = strlen(hs.hoTen);
    hoTen = new char[len + 1];
    strcpy_s(hoTen, len + 1, hs.hoTen);
}

HS::~HS(void) {
    if (hoTen != nullptr) {
        delete[] hoTen;
    }
}

const HS &HS::operator=(const HS &hs) {
    cout << "Operator = ..." << endl;
    if (hoTen != nullptr) {
        delete[] hoTen;
    }

    int len = strlen(hs.hoTen);
    hoTen = new char[len + 1];
    strcpy_s(hoTen, len + 1, hs.hoTen);

    return *this;
}
