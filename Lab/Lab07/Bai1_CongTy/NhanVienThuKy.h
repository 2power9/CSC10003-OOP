#ifndef CSC10003_OOP_NHANVIENTHUKY_H
#define CSC10003_OOP_NHANVIENTHUKY_H

#include "NhanVien.h"

class NhanVienThuKy : public NhanVien {
private:
    string chungChiNgoaiNgu;
    int baoCao{};
public:
    NhanVienThuKy();
    NhanVienThuKy(const string& hoTen, const string & diaChi, const string & chungChiNgoaiNgu, const int& baoCao);
    string formater() override;
    bool xuatSac() override;
    void input() override;
    void print() const override;
    friend istream& operator>>(istream& in, NhanVienThuKy* nv);
    friend ostream& operator<<(ostream &out, const NhanVienThuKy *nv);
    ~NhanVienThuKy() override;
};


#endif //CSC10003_OOP_NHANVIENTHUKY_H
