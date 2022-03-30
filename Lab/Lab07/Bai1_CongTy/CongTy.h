#ifndef CSC10003_OOP_CONGTY_H
#define CSC10003_OOP_CONGTY_H

#include "NhanVienThuKy.h"
#include "NhanVienKyThuat.h"
#include <vector>
#include <fstream>

class CongTy {
private:
    vector<NhanVien*> list;
public:
    CongTy();
    void nhapFile(const string& fileName);
    void ghiFile(const string& fileName);
    vector <NhanVien*> dsNhanVienXuatSac();

    friend istream& operator>>(istream & in, CongTy &obj);
    friend ostream& operator<<(ostream& out, const CongTy& obj);
    ~CongTy();
};


#endif //CSC10003_OOP_CONGTY_H
