#include "CSoPhuc.hpp"

int main() {
    CSoPhuc a = CSoPhuc(1, 2);
    CSoPhuc b;
    cin >> b;
    cout << "Tong 2 so phuc: " << a + b << endl;
    cout << "Hieu 2 so phuc: " << a - b << endl;
    cout << "Tich 2 so phuc: " << a * b << endl;
    cout << "Thuong 2 so phuc: " << a / b << endl;
    cout << "Modulo cua " << a << " la: " << a.module() << endl;
    cout << "Phan thuc cua " << b << " la: " << b._thuc_() << endl;
    cout << "Phan ao cua " << b << " la: " << b._ao_();
    return 0;
}
