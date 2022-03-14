#include "SoNguyenLon.h"

void SoNguyenLon::pow10(const int& n) {
    for (int i = 0;i  < n; ++i)
        LCS.insert(LCS.begin(), 0);
}

SoNguyenLon::SoNguyenLon(void) {
    LCS.push_back(0);
}

SoNguyenLon::SoNguyenLon(const int& cs, const int& scs) {
    int csR = cs;
    if (csR < 1) csR = 1;
    else if (csR > 9) csR = 9;
    int soCS = abs(scs);
    if (soCS < 1) soCS = 1;
    for (int i = 0; i < soCS; ++i) LCS.push_back(csR);
}

SoNguyenLon::SoNguyenLon(const unsigned long& n) {
    unsigned long temp = n;
    while (temp > 9) {
        LCS.push_back(temp % 10);
        temp /= 10;
    }
    LCS.push_back(temp % 10);
}

SoNguyenLon::SoNguyenLon(const SoNguyenLon& snl) {
    LCS = snl.LCS;
}

bool SoNguyenLon::operator>(const SoNguyenLon& snl) {
    if (LCS.size() > snl.LCS.size()) return true;
    if (LCS.size() < snl.LCS.size()) return false;
    for (int i = -1; i > -LCS.size(); --i) {
        if (LCS[i] == snl.LCS[i]) continue;
        return (LCS[i] > snl.LCS[i]);
    }
    return false;
}

const SoNguyenLon& SoNguyenLon::operator=(const SoNguyenLon& snl) {
    LCS = snl.LCS;
    return *this;
}

SoNguyenLon& SoNguyenLon::operator+=(SoNguyenLon snl) {
    int soCSMin = (SoCS() < snl.SoCS() ? SoCS() : snl.SoCS());
    int nho = 0, temp;
    unsigned char *pTemp;
    for (int i = 0; i < soCSMin; ++i)
    {
        pTemp = &LCS[i];
        *pTemp += snl.LCS[i] + nho;
        nho = *pTemp / 10;
        *pTemp %= 10;
    }
    if (SoCS() == soCSMin)
        for (int i = soCSMin; i < snl.SoCS(); ++i)
        {
            temp = snl.LCS[i] + nho;
            LCS.push_back(temp % 10);
            nho = temp / 10;
        }
    else
        for (int i = soCSMin; i < SoCS(); ++i)
        {
            pTemp = &LCS[i];
            *pTemp += nho;
            nho = *pTemp / 10;
            *pTemp %= 10;
            if (nho == 0) break;
        }
    if (nho > 0) LCS.push_back(1);
    return *this;
}

SoNguyenLon SoNguyenLon::operator+(SoNguyenLon snl) {
    SoNguyenLon snlKQ;
    snlKQ.LCS.clear();
    SoNguyenLon *snlSCSMax = (SoCS() > snl.SoCS() ? this : &snl);
    SoNguyenLon *snlSCSMin = (SoCS() < snl.SoCS() ? this : &snl);
    int nho = 0, temp;
    for (int i = 0; i < snlSCSMin->SoCS(); ++i) {
        temp = snlSCSMax->LCS[i] + nho;
        snlKQ.LCS.push_back(temp % 10);
        nho = temp / 10;
    }
    if (nho > 0) snlKQ.LCS.push_back(1);
    return snlKQ;
}

SoNguyenLon SoNguyenLon::operator-(SoNguyenLon snl)
{
    SoNguyenLon snlKQ;
    snlKQ.LCS.clear();
    int nho = 0, i, temp;
    if (SoCS() >= snl.SoCS()) {
        for (i = 0; i < snl.SoCS(); ++i) {
            temp = LCS[i] - snl.LCS[i] - nho;
            nho = 0;
            if (temp < 0) {
                temp += 10;
                nho = 1;
            }
            snlKQ.LCS.push_back(temp);
        }
    }
    for (; i < SoCS(); ++i) {
        temp = LCS[i] - nho;
        nho = 0;
        if (temp < 0) {
            temp += 10;
            nho = 1;
        }
        snlKQ.LCS.push_back(temp);
    }
    while (snlKQ.LCS[snlKQ.LCS.size() - 1] == 0) snl.LCS.pop_back();
    return snlKQ;
}

SoNguyenLon SoNguyenLon::operator*(SoNguyenLon snl) {
    SoNguyenLon snlKQ, *psnlTemp;
    SoNguyenLon *snlSCSMax = (SoCS() > snl.SoCS() ? this : &snl);
    SoNguyenLon *snlSCSMin = (SoCS() < snl.SoCS() ? this : &snl);
    int nho = 0, temp;
    for (int i = 0; i < snlSCSMin->SoCS(); ++i) {
        psnlTemp = new SoNguyenLon;
        psnlTemp->LCS.clear();
        nho = 0;
        for (int j = 0; j < snlSCSMax->SoCS(); ++j)
        {
            temp = snlSCSMin->LCS[i] * snlSCSMax->LCS[j] + nho;
            psnlTemp->LCS.push_back(temp % 10);
            nho = temp / 10;
        }
        if (nho > 0) psnlTemp->LCS.push_back(nho);
        psnlTemp->pow10(i);
        snlKQ += * psnlTemp;
        delete psnlTemp;
    }
    return snlKQ;
}

SoNguyenLon operator+(const unsigned int& n, const SoNguyenLon& snl) {
    SoNguyenLon snlTemp(n);
    SoNguyenLon snlKQ = snlTemp + snl;
    return snlKQ;
}

SoNguyenLon operator-(const unsigned int&n, const SoNguyenLon& snl) {
    SoNguyenLon snlTemp(n);
    return snlTemp - snl;
}

ostream& operator<<(ostream& os, SoNguyenLon& snl) {
    for(int i = snl.LCS.size() - 1; i >= 0; --i)
        os << (int) snl.LCS[i];
    return os;
}

void SoNguyenLon::PhatSinh() {
    int len = rand() % (40 - 25 + 1) + 25;
    for (int i = 0; i < len; ++i) LCS.push_back(rand() % 9);
}

void SoNguyenLon::GhiFile(const string& file_name) {
    ofstream f(file_name, ios_base::out | ios_base::app);
    f << *this << endl;
    f.close();
}

vector <SoNguyenLon> SoNguyenLon::DocFile(const string& file_name) {
    ifstream f;
    f.clear();
    f.open(file_name);
    vector <SoNguyenLon> ans;
    while (!f.eof()) {
        string line;
        SoNguyenLon snl;
        snl.LCS.pop_back();
        getline(f, line);
        for (int i = line.size() - 1; i >= 0; --i) {
            snl.LCS.push_back(line[i] - '0');
        }
        ans.push_back(snl);
    }
    f.close();
    return ans;
}

int SoNguyenLon::SoCS() {
    return LCS.size();
}

SoNguyenLon::~SoNguyenLon(void) = default;
