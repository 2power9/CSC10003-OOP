#ifndef CSC10003_OOP_QUANLYBANHMI_H
#define CSC10003_OOP_QUANLYBANHMI_H

#include "BanhMi/BanhMiKhong.h"
#include "BanhMi/BanhMiThapCam.h"

#include "Topping/ChaBong.h"
#include "Topping/Trung.h"
#include "Topping/XiuMai.h"

#include <vector>

class QuanLyBanhMi {
private:
    vector <BanhMi*> ds;
public:
    QuanLyBanhMi();
    long long tongTien() const;
    void nhap();
    void xuat() const;
    ~QuanLyBanhMi();
};


#endif //CSC10003_OOP_QUANLYBANHMI_H
