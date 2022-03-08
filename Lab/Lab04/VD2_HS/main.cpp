#include "HS.h"

int main() {
       HS hs1("sdfdgfg");
       cout << "hs2(hs1)" << endl;
       HS hs2(hs1);
       cout << endl << "hs3 = hs1" << endl;
       HS hs3 = hs1;
       cout << endl << "hs2 = hs3" << endl;
       hs2 = hs3;
       cout << endl;
       return 0;
}