#ifndef CSC10003_OOP_SONGUYENLON_H
#define CSC10003_OOP_SONGUYENLON_H

#include <iostream>

using namespace std;

#define MAXLEN 100

class SoNguyenLon {
private:
    int mangSo[MAXLEN];
    int soCS;
    static SoNguyenLon* snlMax ;

public:
    SoNguyenLon(void);
    SoNguyenLon(const int& cs, const int& scs);
    SoNguyenLon(const unsigned int& n);
    SoNguyenLon(const SoNguyenLon& snl);
    ~SoNguyenLon(void);

    SoNguyenLon operator+(const SoNguyenLon& snl);
    SoNguyenLon operator-(const SoNguyenLon& snl);
    bool operator>(const SoNguyenLon& snl);
    const SoNguyenLon& operator=(const SoNguyenLon& snl);
    friend SoNguyenLon operator+(const unsigned int& n, const SoNguyenLon& snl);
    friend SoNguyenLon operator-(const unsigned int& n, const SoNguyenLon& snl);
    friend ostream& operator<<(ostream& os, const SoNguyenLon& snl);

    static SoNguyenLon SNLMax();
};

#endif //CSC10003_OOP_SONGUYENLON_H
