#ifndef CODE_CHOCSINH_HPP
#define CODE_CHOCSINH_HPP

#include <iostream>
#include <string>

using namespace std;

class CHocSinh {
private:
    string hoTen;
    double toan, van;
public:
    CHocSinh();
    CHocSinh(const string&, const double&, const double&);
    string _hoTen_() const;
    double _toan_() const;
    double _van_() const;
    void ganHoTen(const string&);
    void ganToan(const double&);
    void ganVan(const double&);
    double DTB() const;
    string xepLoai() const;
    friend istream& operator>>(istream&, CHocSinh&);
    friend ostream& operator<<(ostream&,const CHocSinh&);
    ~CHocSinh();
};


#endif //CODE_CHOCSINH_HPP
