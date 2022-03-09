#ifndef CSC10003_OOP_CPHANSO_H
#define CSC10003_OOP_CPHANSO_H

#include <iostream>
using namespace std;

class CPhanSo {
private:
    int tu, mau;
public:
    CPhanSo();
    CPhanSo(const int&, const int&);
    int layTu();
    int layMau();
    void ganTu(const int&);
    void ganMau(const int&);
    CPhanSo nghichDao();
    CPhanSo rutGon();
    CPhanSo operator+(const CPhanSo&) const;
    CPhanSo operator-(const CPhanSo&) const;
    CPhanSo operator*(const CPhanSo&) const;
    CPhanSo operator/(const CPhanSo&) const;
    friend istream& operator>>(istream&, CPhanSo&);
    friend ostream& operator<<(ostream&, const CPhanSo&);
    ~CPhanSo();
};


#endif //CSC10003_OOP_CPHANSO_H
