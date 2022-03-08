#include "Bai2.h"

istream& operator>>(istream &in, Fraction &rhs) {
    char c;
    in >> rhs.num >> c >> rhs.denom;
    return in;
}

ostream& operator<<(ostream &out, Fraction rhs) {
    if (rhs.denom == 1) out << rhs.num;
    else out << rhs.num << "/" << rhs.denom;
    return out;
}

int GCD(int a, int b) {
    while (b > 0)
    {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

Fraction minimalization(Fraction &x) {
    int gcd = GCD(std::abs(x.num), std::abs(x.denom));
    x.num /= gcd;
    x.denom /= gcd;
    return x;
}

vector <Fraction> get_data() {
    cout << "Type number of fractions: ";
    int n;
    cin >> n;
    cout << "Type fractions (a/b): ";
    vector <Fraction> ans;
    for (int i = 0; i < n; ++i) {
        Fraction temp;
        cin >> temp;
        ans.push_back(minimalization(temp));
    }
    return ans;
}

bool compare_asc(Fraction a, Fraction b) {
    return a.num * b.denom < b.num * a.denom;
}

bool compare_desc(Fraction a, Fraction b) {
    return a.num * b.denom > b.num * a.denom;
}

bool compare_asc_num(Fraction a, Fraction b) {
    return ((a.num < b.num) || (a.num == b.num && a.denom < b.denom));
}

bool compare_asc_dem(Fraction a, Fraction b) {
    return ((a.denom < b.denom) || (a.denom == b.denom && a.num < b.num));
}

void Sort(vector <Fraction> &a) {
    cout << "======Tutorial======\n";
    cout << "1 - ASC\n";
    cout << "2 - DESC\n";
    cout << "3 - ASC by num after minimalization\n";
    cout << "4 - ASC by denom after minimalization\n";
    cout << "Choose compare rule for sorting: ";
    int temp;
    cin >> temp;
    switch (temp) {
        case 1:
            sort(a.begin(), a.end(), compare_asc);
            break;
        case 2:
            sort(a.begin(), a.end(), compare_desc);
            break;

        case 3:
            for (int i = 0; i < a.size(); ++i) minimalization(a[i]);
            sort(a.begin(), a.end(), compare_asc_num);
            break;
        case 4:
            for (int i = 0; i < a.size(); ++i) minimalization(a[i]);
            sort(a.begin(), a.end(), compare_asc_dem);
            break;
        default:
            cout <<"We dont have this option.\n";
    }
}

void print(vector <Fraction> a) {
    cout << "fraction list after sorting: ";
    for (Fraction e : a)
        cout << e << " ";
}

int main() {
    vector <Fraction> fraction_list = get_data();
    Sort(fraction_list);
    print(fraction_list);
    return 0;
}
