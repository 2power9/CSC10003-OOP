#include "CongTy.h"

CongTy::CongTy() = default;

istream &operator>>(istream &in, CongTy &obj) {
    cout << "Nhap so luong nhan vien:";
    int n;
    in >> n;
    for (int i = 0; i < n; ++i) {
        cout << "Nhap loai nhan vien (nvkt | nvtk):";
        string type;
        in >> type;
        NhanVien *temp;
        if (type == "nvtk") temp = new NhanVienThuKy;
        else temp = new NhanVienKyThuat;
        in >> temp;
        obj.list.push_back(temp);
    }
    return in;
}

ostream &operator<<(ostream &out, const CongTy &obj) {
    out << "Cong ty co " << obj.list.size() << " nhan vien, bao gom:\n\n";
    for (NhanVien* nv : obj.list) out << nv << endl;
    return out;
}

void CongTy::nhapFile(const string &fileName) {
    ifstream f(fileName);
    while (!f.eof()) {
        string line;
        getline(f, line);

        string type = line.substr(0, line.find(':'));

        int pre = line.find(' ') + 1;
        int pos = line.find('(') - 1;
        string arg1 = line.substr(pre, pos - pre);

        pre = pos + 2;
        pos = line.find(')');
        string arg2 = line.substr(pre, pos - pre);

        pre = line.find('[') + 1;
        pos = line.find(']');
        string arg3 = line.substr(pre, pos - pre);

        pre = line.find('<') + 1;
        pos = line.find('>');
        int arg4 = stoi(line.substr(pre, pos - pre));

        NhanVien *temp;
        if (type == "nvtk") temp = new NhanVienThuKy(arg1, arg2, arg3, arg4);
        else temp = new NhanVienKyThuat(arg1, arg2, arg3, arg4);
        this->list.push_back(temp);
    }
    f.close();
}

void CongTy::ghiFile(const string &fileName) {
    ofstream f(fileName, ios::out);
    for (NhanVien *nv : list){
        f << nv->formater() << endl;
    }
    f.close();
}

vector<NhanVien *> CongTy::dsNhanVienXuatSac() {
   vector <NhanVien*> ans;
   for (NhanVien *nv : list)
       if (nv->xuatSac()) ans.push_back(nv);
   return ans;
}

CongTy::~CongTy() = default;
