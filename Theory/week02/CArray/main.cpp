#include "CArray.hpp"

int main() {
    CArray a;
    cin >> a;
    cout << "Kich thuoc mang da tao la: " << a.size() << endl;
    cout << "Phan tu thu 3 trong mang co gia tri: " << a.elementAt(3) << endl;
    a.assignAt(3, 9);
    cout << "Mang da duoc thay doi phan tu thu 3: " << a << endl;
    cout << "12 " << (a.isExist(12) ? "co" : "khong") << " ton tai trong mang.\n";
    cout << "Gia tri lon nhat trong mang la: " << a.maxElement() << endl;
    cout << "Gia tri nho nhat trong mang la: " << a.minElement() << endl;
    a.sortASC();
    cout << "Mang sau khi duoc sap xep tang: " << a << endl;
    a.sortDESC();
    cout << "Mang sau khi duoc sap xep giam: " << a << endl;
    return 0;
}
