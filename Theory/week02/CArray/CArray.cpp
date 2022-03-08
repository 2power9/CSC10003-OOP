#include "CArray.hpp"

CArray::CArray() {
    n = 0;
}

int CArray::size() const {
    return n;
}

int CArray::elementAt(const int &i) const {
    return elements[i];
}

void CArray::assignAt(const int &i, const int &value) {
    elements[i] = value;
}

bool CArray::isExist(const int &x) const {
    for (int i = 0; i < n; ++i)
        if (elements[i] == x) return true;
    return false;
}

int CArray::minElement() const {
    int minElement = elements[0];
    for (int i = 1; i < n; ++i)
        if (minElement > elements[i])
            minElement = elements[i];
    return minElement;
}

int CArray::maxElement() const {
    int maxElement = elements[0];
    for (int i = 0; i < n; ++i)
        if (maxElement < elements[i])
            maxElement = elements[i];
    return maxElement;
}


void QuickSort(int a[], int left, int right, bool isASC) {
    if (left >= right)
        return;

    int pivot = a[(left + right) / 2], l = left, r = right;
    while (l <= r) {
        while (isASC ? a[l] < pivot : a[l] > pivot) ++l;
        while (isASC? a[r] > pivot : a[r] < pivot) --r;
        if (l <= r) {
            swap(a[l], a[r]);
            ++l;
            --r;
        }
    }
    if (left <= r) QuickSort(a, left, r, isASC);
    if (l <= right) QuickSort(a, l, right, isASC);
}

void CArray::sortASC() {
    QuickSort(elements, 0, n - 1, true);
}

void CArray::sortDESC() {
    QuickSort(elements, 0, n - 1, false);
}

istream &operator>>(istream &in, CArray &obj) {
    cout << "Nhap so luong phan tu: ";
    in >> obj.n;
    obj.elements = new int[obj.n];
    for (int i = 0; i < obj.n; ++i) {
        cout << "Nhap phan tu thu " << i << ": ";
        in >> obj.elements[i];
    }
    return in;
}

ostream &operator<<(ostream &out, const CArray &obj) {
    for (int i = 0; i < obj.n; ++i)
        out << obj.elements[i] << " ";
    return out;
}

CArray::~CArray() {
    n = 0;
    delete[] elements;
}

