#ifndef CSC10003_OOP_THOIGIAN_H
#define CSC10003_OOP_THOIGIAN_H

#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;

class ThoiGian {
private:
    int gio, phut, giay;
public:
    void CanBang();
    int tinhGiay() const;
    ThoiGian();
    explicit ThoiGian(const int&);
    ThoiGian(const int&, const int&);
    ThoiGian(const int&, const int&, const int&);
    ThoiGian operator+(const ThoiGian&) const;
    ThoiGian operator-(const ThoiGian&) const;
    bool operator<=(const ThoiGian&) const;
    friend ostream& operator<<(ostream&, const ThoiGian&);
    friend ThoiGian operator+(const int&, const ThoiGian&);
    friend ThoiGian operator+(const ThoiGian&, const int&);
    friend ThoiGian operator-(const int& lhs, const ThoiGian& rhs);
    friend ThoiGian operator-(const ThoiGian& lhs, const int& rhs);
    friend bool operator<=(const int& lhs, const ThoiGian& rhs);
    ~ThoiGian();
};

#endif //CSC10003_OOP_THOIGIAN_H
