#include "Bai1.h"

int_array get_data() {
    int_array ans;
    cout << "Type n: ";
    cin >> ans.n;
    cout <<"Type elements: ";
    ans.elements = new int[ans.n];
    for (int i = 0; i < ans.n; ++i)
        cin >> ans.elements[i];
    return ans;
}

void sort_asc(int_array a) {
    for (int i = 0; i < a. n - 1; ++i)
        for (int j = i + 1; j < a.n; ++j)
            if (a.elements[i] > a.elements[j])
                swap(a.elements[i], a.elements[j]);
}

void sort_desc(int_array a) {
    for (int i = 0; i < a. n - 1; ++i)
        for (int j = i + 1; j < a.n; ++j)
            if (a.elements[i] < a.elements[j])
                swap(a.elements[i], a.elements[j]);
}

void sort_asc_mod_5(int_array a) {
    for (int i = 0; i < a. n - 1; ++i)
        for (int j = i + 1; j < a.n; ++j)
            if (a.elements[i] % 5 > a.elements[j] % 5)
                swap(a.elements[i], a.elements[j]);
}

void sort_asc_mod_7(int_array a) {
    for (int i = 0; i < a. n - 1; ++i)
        for (int j = i + 1; j < a.n; ++j)
            if (a.elements[i] % 7 > a.elements[j] % 7)
                swap(a.elements[i], a.elements[j]);
}

void print(int_array a) {
    cout <<"Array after sorting: ";
    for (int i = 0; i < a.n; ++i) cout << a.elements[i] << " ";
}

int main() {
    int_array a = get_data();
    cout <<"Choose compare rule for sorting (1 - ASC | 2 - DESC | 3 - ASC by mod 5 | 4 - ASC by mod 7): ";
    int temp;
    cin >> temp;
    switch (temp) {
        case 1:
            sort_asc(a);
            break;
        case 2:
            sort_desc(a);
            break;
        case 3:
            sort_asc_mod_5(a);
            break;
        case 4:
            sort_asc_mod_7(a);
            break;
        default:
            cout <<"We dont have this option.\n";
    }
    print(a);
    delete[] a.elements;
    return 0;
}
