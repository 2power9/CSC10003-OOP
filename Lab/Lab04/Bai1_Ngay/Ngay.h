#ifndef CSC10003_OOP_NGAY_H
#define CSC10003_OOP_NGAY_H

#include <iostream>
#include <iomanip>
using namespace std;

class Ngay {
private:
    int ngay, thang, nam;
public:
    Ngay();
    bool ktNamNhuan() const;
    int laySoNgay() const;
    void CanBang();
    Ngay(const int&, const int&, const int&);
    explicit Ngay(const int&);
    Ngay operator+(const Ngay&) const;
    Ngay operator-(const Ngay&) const;
    bool operator>(const Ngay&) const;
    friend Ngay operator+(const Ngay&, const int&);
    friend Ngay operator+(const int&, const Ngay&);
    friend Ngay operator-(const Ngay&, const int&);
    friend Ngay operator-(const int&, const Ngay&);
    friend ostream& operator<< (ostream&, const Ngay&);
    ~Ngay();
};

#endif //CSC10003_OOP_NGAY_H
