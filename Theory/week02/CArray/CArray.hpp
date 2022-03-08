#ifndef CODE_CARRAY_HPP
#define CODE_CARRAY_HPP

#include <iostream>

using namespace std;

class CArray {
private:
    int n{};
    int* elements{};
public:
    CArray();
    int size() const;
    int elementAt(const int& i) const;
    void assignAt(const int& i, const int& value);
    bool isExist(const int& x) const;
    int minElement() const;
    int maxElement() const;
    void sortASC();
    void sortDESC();
    friend istream& operator>>(istream&, CArray&);
    friend ostream& operator<<(ostream&,const CArray&);
    ~CArray();
};


#endif //CODE_CARRAY_HPP
