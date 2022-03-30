#ifndef CSC10003_OOP_HINHHOCPHANG_H
#define CSC10003_OOP_HINHHOCPHANG_H

#include <iostream>
#include <cmath>

using namespace std;

class HinhHocPhang {
public:
    HinhHocPhang();
    virtual double P() = 0;
    virtual double S() = 0;
    virtual void input() = 0;
    virtual void print() const = 0;
    friend istream& operator>>(istream& in, HinhHocPhang* obj);
    friend ostream& operator<<(ostream& out, const HinhHocPhang* obj);
    virtual ~HinhHocPhang();
};


#endif //CSC10003_OOP_HINHHOCPHANG_H
