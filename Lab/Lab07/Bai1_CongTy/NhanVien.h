#ifndef CSC10003_OOP_NHANVIEN_H
#define CSC10003_OOP_NHANVIEN_H

#include <iostream>
#include <cstring>

using namespace std;

class NhanVien {
protected:
    string hoTen, diaChi;
public:
    NhanVien();
    NhanVien(const string& hoTen, const string& diaChi);

    string _hoTen_() const;
    string _diaChi_() const;

    virtual string formater() = 0;
    virtual bool xuatSac() = 0;
    virtual void input();
    virtual void print() const;
    friend istream& operator>>(istream &in, NhanVien *nv);
    friend ostream& operator<<(ostream &out, const NhanVien *nv);
    virtual ~NhanVien();
};


#endif //CSC10003_OOP_NHANVIEN_H
