#include "QuanLyBanhMi.h"

QuanLyBanhMi::QuanLyBanhMi() = default;

long long QuanLyBanhMi::tongTien() const {
    long long ans = 0;
    for (BanhMi* banhMi : ds) ans += banhMi->gia();
    return ans;
}

void QuanLyBanhMi::nhap() {
    cout << "Nhap so luong banh mi muon mua: ";
    int n, option;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        BanhMi *banhMi;
        cout << "Nhap loai banh mi (0 - banh mi khong | 1 - banh mi thap cam): ";
        cin >> option;
        if (option == 0) banhMi = new BanhMiKhong();
        else banhMi = new BanhMiThapCam();
        while (true) {
            cout << "Ban co muon them topping khong? (0 - thoat | 1 - trung | 2 - xiu mai | 3 - cha bong): ";
            cin >> option;
            if (option == 0) break;
            if (option == 1) banhMi = new Trung(*banhMi);
            else if (option == 2) banhMi = new XiuMai(*banhMi);
            else if (option == 3) banhMi = new ChaBong(*banhMi);
            else cout << "Chung toi khong co lua chon nay.\n";
        }
        ds.push_back(banhMi);
    }
}

void QuanLyBanhMi::xuat() const {
    cout << "==========Hoa don==========\n";
    for (BanhMi* banhMi : ds) {
        banhMi->xuat();
        cout << " | Gia: " << banhMi->gia() << endl;
    }
    cout << "\nTong so luong banh mi da mua: " << ds.size() << endl;
    cout << "Tong so tien phai tra: " << tongTien() << endl;
    cout << "===========================\n";
}

QuanLyBanhMi::~QuanLyBanhMi() {
    while (!ds.empty()) {
        BanhMi* banhMi = ds.back();
        ds.pop_back();
        delete banhMi;
    }
}

