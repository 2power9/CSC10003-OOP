#ifndef CSC10003_OOP_XIUMAI_H
#define CSC10003_OOP_XIUMAI_H

#include "Topping.h"

class XiuMai : public Topping {
private:
    static string tenTopping;
    static long long giaXiuMai;
    BanhMi* banhMi;
public:
    XiuMai();
    explicit XiuMai(BanhMi& other);
    long long gia() const override;
    void xuat() const override;
    ~XiuMai() override;
};


#endif //CSC10003_OOP_XIUMAI_H
