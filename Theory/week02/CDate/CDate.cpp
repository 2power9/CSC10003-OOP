#include "CDate.h"

CDate::CDate() {
    day = 1;
    month = 1;
    year = 1;
}

CDate::CDate(const int& day, const int& month, const int& year) {
    this->day = day;
    this->month = month;
    this->year = year;
}

bool CDate::isLeapYear() const {
    if (year % 400 == 0) return true;
    if (year % 100 == 0) return false;
    if (year % 4 == 0) return true;
    return false;
}

int CDate::_day_() const {
    return day;
}

int CDate::_month_() const {
    return month;
}

int CDate::_year_() const {
    return year;
}

void CDate::assignDay(int newDay) {
    day = newDay;
}

void CDate::assignMonth(int newMonth) {
    month = newMonth;
}

void CDate::assignYear(int newYear) {
    year = newYear;
}

int CDate::getDays() const {
    switch (month)
    {
        case 4: case 6: case 9: case 11:
            return 30;
        case 2:
            if (isLeapYear()) return 29;
            return 28;
        default:
            return 31;
    }
}

CDate CDate::yesterday() const {
    CDate ans;
    if (day == 1) {
        ans.assignMonth(month - 1 == 0 ? 12 : month);
        ans.assignYear(month - 1 == 0 ? year - 1 : year);
        ans.assignDay(ans.getDays());
    }
    else ans = CDate(day - 1, month, year);
    return ans;
}

CDate CDate::tomorrow() const {
    CDate ans;
    if (day == getDays())
        ans = month < 12 ? CDate(1, month + 1, year) : CDate(1, 1, year + 1);
    else ans = CDate(day + 1, month, year);
    return ans;
}

int fromNewYear(const CDate& after) {
    //count days from the first day of year to x
    CDate before(1, 2, after._year_());
    int count = 0;
    while (before._month_() < after._month_()) {
        count += before.getDays();
        before.assignMonth(before._month_() + 1);
    }
    count += after._day_();
    return count;
}

int CDate::distant(const CDate& rhs) {
    CDate before = (*this < rhs ? *this : rhs);
    CDate after = (*this < rhs ? rhs : *this);
    int dist = (after.year - before.year) * 365 - fromNewYear(before) + fromNewYear(after);
    while (!before.isLeapYear()) before.assignYear(before._year_() + 1);
    dist += (after._year_() - before._year_() + 1) / 4;
    return dist;
}

bool CDate::operator<(const CDate& rhs) const {
    if (year < rhs.year) return true;
    if (year > rhs.year) return false;
    if (month < rhs.month) return true;
    if (month > rhs.month) return false;
    return day < rhs.day;
}

istream &operator>>(istream &in, CDate &obj) {
    cout << "Type day: ";
    in >> obj.day;
    cout << "Type month: ";
    in >> obj.month;
    cout << "Type year: ";
    in >> obj.year;
    return in;
}

ostream &operator<<(ostream &out, const CDate &obj) {
//    YYYY-MM-DD
    cout << setfill('0') << setw(4) << obj.year << "-";
    cout << setfill('0') << setw(2) << obj.month << "-";
    cout << setfill('0') << setw(2) << obj.day;
    return out;
}

bool CDate::operator==(const CDate &rhs) const {
    return (day == rhs.day && month == rhs.month && year == rhs.year);
}

bool CDate::operator>(const CDate &rhs) const {
    return !(*this < rhs || *this == rhs);
}

CDate::~CDate() = default;
