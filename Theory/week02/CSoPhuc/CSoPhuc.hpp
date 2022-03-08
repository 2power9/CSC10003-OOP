#ifndef CODE_CSOPHUC_HPP
#define CODE_CSOPHUC_HPP

#include <iostream>
#include <cmath>

using namespace std;

class CSoPhuc {
private:
    double thuc, ao;
public:
    CSoPhuc();
    CSoPhuc(const double&, const double&);
    double _thuc_() const;
    double _ao_() const;
    void ganThuc(const double&);
    void ganAo(const double&);
    double module() const;
    CSoPhuc operator+(const CSoPhuc&) const;
    CSoPhuc operator-(const CSoPhuc&) const;
    CSoPhuc operator*(const CSoPhuc&) const;
    CSoPhuc operator/(const CSoPhuc&) const;
    friend istream& operator>>(istream&, CSoPhuc&);
    friend ostream& operator<<(ostream&, const CSoPhuc&);
    ~CSoPhuc();
};


#endif //CODE_CSOPHUC_HPP
