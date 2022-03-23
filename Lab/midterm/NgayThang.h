#ifndef CSC10003_OOP_NGAYTHANG_H
#define CSC10003_OOP_NGAYTHANG_H

#include <iostream>
#include <iomanip>

using namespace std;

class NgayThang {
    private:
        int ngay, thang, nam;
        bool ktNamNhuan() const;
        int laySoNgay() const;
        void canBang();
        static NgayThang *maxNgayThang;
    public:
        NgayThang();
        explicit NgayThang(const int& n);
        NgayThang(const int& ngay, const int& thang, const int& nam);
        ~NgayThang();

        static NgayThang *NgayThangLonNhat();

        NgayThang operator+(const NgayThang& rhs) const;

        bool operator<(const NgayThang& rhs) const;
        NgayThang& operator++();
        NgayThang operator++ (int temp);

        friend NgayThang operator+(const NgayThang& lhs, const int& rhs);
        friend NgayThang operator+(const int& lhs, const NgayThang& rhs);


        friend ostream& operator<< (ostream&, const NgayThang&);

};


#endif //CSC10003_OOP_NGAYTHANG_H
