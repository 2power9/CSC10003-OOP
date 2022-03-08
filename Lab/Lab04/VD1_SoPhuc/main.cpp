#include "SoPhuc.h"

int main() {
    SoPhuc sp1(3, 5);
    SoPhuc sp2 = sp1.operator+(10);
    SoPhuc sp3 = sp1 + 10;
  SoPhuc sp4 = 10 + sp1;
//  because the define operator + have the left hand side is SoPhuc and the right hand side is int
    cout << sp2 << endl << sp3 << endl << sp4 << endl;
}