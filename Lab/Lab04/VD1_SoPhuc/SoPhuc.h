#ifndef CSC10003_OOP_SOPHUC_H
#define CSC10003_OOP_SOPHUC_H

#include <iostream>

using namespace std;

class SoPhuc {
private:
    int thuc, ao;
public:
    SoPhuc();
    SoPhuc(int t, int a);
    SoPhuc operator+(const int&);
    friend SoPhuc operator+(const int&, const SoPhuc&);

    friend ostream& operator<<(ostream&, const SoPhuc&);
};


#endif //CSC10003_OOP_SOPHUC_H
