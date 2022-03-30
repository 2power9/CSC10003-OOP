#include "QuanLyHinhHocPhang.h"

QuanLyHinhHocPhang::QuanLyHinhHocPhang() {
    dem_hcn = 0;
    dem_ht = 0;
    dem_htv = 0;
    dem_htg = 0;
}

istream &operator>>(istream &in, QuanLyHinhHocPhang& obj) {
    cout << "Nhap so luong hinh muon them:";
    int n;
    in >> n;
    for (int i = 0; i < n; ++i) {
        cout << "Nhap loai hinh (1 - hcn | 2 - htr | 3 - htg | 4 - htv):";
        int type;
        in >> type;
        HinhHocPhang *temp;
        switch (type) {
            case 1:
                temp = new HinhChuNhat;
                ++obj.dem_hcn;
                break;
            case 2:
                temp = new HinhTron;
                ++obj.dem_ht;
                break;
            case 3:
                temp = new HinhTamGiac;
                ++obj.dem_htg;
                break;
            case 4:
                temp = new HinhThangVuong;
                ++obj.dem_htv;
                break;
        }
        in >> temp;
        obj.list.push_back(temp);
    }
    return in;
}

ostream &operator<<(ostream &out, const QuanLyHinhHocPhang& obj) {
    for (HinhHocPhang* e : obj.list) e->print();
    return out;
}

void QuanLyHinhHocPhang::nhapFile(const string &fileName) {
    ifstream f(fileName);
    while (!f.eof()) {
        string type;
        double a, b, c;
        char gap;
        f >> type;
        HinhHocPhang *temp;
        if (type == "hcn:") {
            ++dem_hcn;
            f >> a >> gap >> b;
            temp = new HinhChuNhat(a, b);
        } else if (type == "htr:") {
            ++dem_ht;
            f >> a;
            temp = new HinhTron(a);
        } else if (type == "htg:") {
            ++dem_htg;
            f >> a >> gap >> b >> gap >> c;
            temp = new HinhTamGiac(a, b, c);
        } else if (type == "hthv:") {
                ++dem_htv;
                f >> a >> gap >> b >> gap >> c;
                temp = new HinhThangVuong(a, b, c);
        }
        list.push_back(temp);
    }
    f.close();
}

QuanLyHinhHocPhang::~QuanLyHinhHocPhang() = default;

