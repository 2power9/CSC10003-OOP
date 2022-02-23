#ifndef CODE_CDONTHUC_HPP
#define CODE_CDONTHUC_HPP

#include <iostream>
#include <cmath>

using namespace std;

class CDonThuc {
private:
    double heSo, soMu;
public:
    CDonThuc();
    CDonThuc(const double&, const double&);
    double _heSo_() const;
    double _soMu_() const;
    void ganHeSo(const double&);
    void ganSoMu(const double&);
    double f(const double&) const;
    CDonThuc d() const;
    CDonThuc operator+(const CDonThuc&) const;
    CDonThuc operator-(const CDonThuc&) const;
    CDonThuc operator*(const CDonThuc&) const;
    CDonThuc operator/(const CDonThuc&) const;
    friend istream& operator>>(istream&, CDonThuc&);
    friend ostream& operator<<(ostream&, const CDonThuc&);
    ~CDonThuc();
};


#endif //CODE_CDONTHUC_HPP
