#ifndef CSC10003_OOP_SONGUYENLON_H
#define CSC10003_OOP_SONGUYENLON_H

#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <cstring>
#include <fstream>
#include <algorithm>
using namespace std;

class SoNguyenLon {
private:
    vector <unsigned char> LCS;
    void pow10(const int& n);
public:
    SoNguyenLon(void);
    SoNguyenLon(const int& cs, const int &scs);
    SoNguyenLon(const unsigned long& n);
    SoNguyenLon(const SoNguyenLon& snl);
    ~SoNguyenLon(void);

    void PhatSinh();
    void GhiFile(const string&);
    static vector <SoNguyenLon> DocFile(const string&);

    int SoCS();
    SoNguyenLon operator+(SoNguyenLon snl);
    SoNguyenLon operator-(SoNguyenLon snl);
    SoNguyenLon operator*(SoNguyenLon snl);
    bool operator>(const SoNguyenLon& snl);
    const SoNguyenLon& operator=(const SoNguyenLon& snl);
    SoNguyenLon& operator+=(SoNguyenLon snl);
    friend SoNguyenLon operator+(const unsigned int& n, const SoNguyenLon& snl);
    friend SoNguyenLon operator-(const unsigned int& n, const SoNguyenLon& snl);
    friend ostream& operator<<(ostream& os, SoNguyenLon& snl);
};

#endif //CSC10003_OOP_SONGUYENLON_H
