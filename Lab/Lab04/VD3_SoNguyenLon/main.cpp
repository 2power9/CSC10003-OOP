#include "SoNguyenLon.h"

int main() {
    SoNguyenLon obj1(1234);
    SoNguyenLon obj2(obj1);
    SoNguyenLon obj3 = obj2 + 10;
    cout << obj3 << " - " << obj1 << " = " <<  obj3 - obj1  << endl;
    cout << "So Nguyen Lon nhat la: " << obj1.SNLMax();
    return 0;
}
