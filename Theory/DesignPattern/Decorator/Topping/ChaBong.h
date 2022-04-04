#ifndef CSC10003_OOP_CHABONG_H
#define CSC10003_OOP_CHABONG_H

#include "Topping.h"

class ChaBong : public Topping {
private:
    static string tenTopping;
    static long long giaChaBong;
    BanhMi* banhMi;
public:
    ChaBong();
    explicit ChaBong(BanhMi& other);
    long long gia() const override;
    void xuat() const override;
    ~ChaBong() override;
};


#endif //CSC10003_OOP_CHABONG_H
