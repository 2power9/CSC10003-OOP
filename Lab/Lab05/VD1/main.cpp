#include <iostream>

using namespace std;

class A {
private:
    int info[10];
public:
    A() {
        for (int i = 0; i < 10; ++i)
            info[i] = i + 10;
    }
    typedef int* indexOf;
    indexOf getInfo(const int& i) {
        indexOf rt = new int;
        rt = info + i;
        return rt;
    }

    void Xuat() {
        for (int i = 0; i < 10; ++i)
            cout << info[i] << ", ";
        cout << endl;
    }
};

int main() {
    A a;
    A::indexOf io = a.getInfo(7);
    cout << *io << endl;
    *io = 10;
    a.Xuat();
    return 0;
}
