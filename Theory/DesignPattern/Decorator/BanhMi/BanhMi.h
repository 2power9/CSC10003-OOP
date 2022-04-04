#ifndef CSC10003_OOP_BANHMI_H
#define CSC10003_OOP_BANHMI_H

#include <iostream>
#include <cstring>

using namespace std;

class BanhMi {
protected:
    string ten;
public:
    BanhMi();
    virtual long long gia() const = 0;
    virtual void xuat() const;
    virtual ~BanhMi();
};


#endif //CSC10003_OOP_BANHMI_H
