#include "SoNguyenLon.h"

int main() {
    srand(time(NULL));
    vector<SoNguyenLon> ans;
    ans = SoNguyenLon::DocFile(
            R"(C:\Users\huenh\Documents\Code\CSC10003-OOP\Lab\Lab05\Bai1_SoNguyenLon\snl.txt)");
    for (SoNguyenLon snl : ans) cout << snl << endl;
    return 0;
}