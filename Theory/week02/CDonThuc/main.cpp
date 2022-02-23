#include "CDonThuc.hpp"

int main() {
    CDonThuc a(3,5);
    cout << "He so cua don thuc " << a << " la: " << a._heSo_() << endl;
    cout << "So mu cua don thuc " << a << " la: " << a._soMu_() << endl;
    cout << "Voi x = 2, don thuc " << a << " = " << a.f(2) << endl;
    cout << "Dao ham cua don thuc " << a << "la: " << a.d() << endl;
    CDonThuc b;
    cin >> b;
    cout << "Nhap he so moi cho don thuc " << b << ": ";
    double heSoMoi;
    cin >> heSoMoi;
    b.ganHeSo(heSoMoi);
    cout << a << " * " << b << " = " << a * b << endl;
    cout << a << " / " << b << " = " << a / b << endl;
    cout << a << " + " << b << " = " << a + b << endl;
    cout << a << " - " << b << " = " << a - b << endl;
    return 0;
}
