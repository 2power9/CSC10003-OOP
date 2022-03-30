#ifndef CSC10003_OOP_QUANLYHINHHOCPHANG_H
#define CSC10003_OOP_QUANLYHINHHOCPHANG_H

#include "HinhChuNhat.h"
#include "HinhTron.h"
#include "HinhTamGiac.h"
#include "HinhThangVuong.h"

#include <string>
#include <vector>
#include <fstream>

class QuanLyHinhHocPhang {
private:
    vector <HinhHocPhang*> list;
    int dem_hcn{}, dem_ht{}, dem_htg{}, dem_htv{};
public:
    QuanLyHinhHocPhang();
    void nhapFile(const string& fileName);
    friend istream& operator>>(istream& is, QuanLyHinhHocPhang& ds);
    friend ostream& operator<<(ostream& os, const QuanLyHinhHocPhang& ds);
    ~QuanLyHinhHocPhang();
};


#endif //CSC10003_OOP_QUANLYHINHHOCPHANG_H
