#ifndef LAB_BAI2_H
#define LAB_BAI2_H

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
struct Fraction {
    int num, denom;
};

istream& operator>>(istream &in, Fraction &rhs);
ostream& operator<<(ostream &out, Fraction rhs);
Fraction minimalization(Fraction &x);
vector <Fraction> get_data();
void Sort(vector <Fraction> &a);
void print(vector <Fraction> a);
#endif //LAB_BAI2_H