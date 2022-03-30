#ifndef CSC10003_OOP_NHANVIENKYTHUAT_H
#define CSC10003_OOP_NHANVIENKYTHUAT_H

#include "NhanVien.h"

class NhanVienKyThuat : public NhanVien {
private:
    string chungChiNganh;
    int sangKien{};
public:
    NhanVienKyThuat();
    NhanVienKyThuat(const string& hoTen, const string& diaChi, const string& chungChiNganh, const int& sangKien);
    string formater() override;
    bool xuatSac() override;
    void input() override;
    void print() const override;
    friend istream& operator>>(istream & in, NhanVienKyThuat *nv);
    friend ostream& operator<<(ostream &out, const NhanVienKyThuat *nv);
    ~NhanVienKyThuat() override;
};


#endif //CSC10003_OOP_NHANVIENKYTHUAT_H
