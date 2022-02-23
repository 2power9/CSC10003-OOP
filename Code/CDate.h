#ifndef CODE_CDATE_H
#define CODE_CDATE_H


#include <iostream>
#include <iomanip>
using namespace std;

class CDate {
private:
    int day, month, year;
public:
    CDate();
    CDate(const int&, const int&, const int&);
    bool isLeapYear() const;
    int _day_() const;
    int _month_() const;
    int _year_() const;
    void assignDay (int);
    void assignMonth(int);
    void assignYear(int);
    int getDays() const;
    CDate yesterday() const;
    CDate tomorrow() const;
    int distant(const CDate&);
    bool operator<(const CDate&) const;
    bool operator==(const CDate&) const;
    bool operator>(const CDate&) const;
    friend istream& operator>>(istream&, CDate&);
    friend ostream& operator<<(ostream&,const CDate&);
    ~CDate();
};

#endif //CODE_CDATE_H
