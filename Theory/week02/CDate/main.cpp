#include "CDate.h"

int main() {
    CDate lhs(05,12,2001);
    CDate rhs;
    cin >> rhs;
    cout << rhs << (rhs.isLeapYear() ? " khong" : "") << " co nam nhuan.\n";
    rhs.assignYear(2001);
    cout << lhs << " co thang " << lhs._month_() << " va thang nay co " << lhs.getDays() << " ngay.\n";
    cout << "Ngay hom truoc cua " << lhs << " la: " << lhs.yesterday() << endl;
    cout << "Ngay hom sau cua " << lhs << " la: " << lhs.tomorrow() << endl;
    cout << lhs << " va " << rhs << " cach nhau " << lhs.distant(rhs) << " ngay.\n";
    if (lhs == rhs) cout << lhs << " va" << rhs << " cung ngay.\n";
    else if (lhs < rhs) cout << lhs << " xay ra truoc " << rhs << endl;
    else cout << lhs << " xay ra sau " << rhs << endl;
    return 0;
}
