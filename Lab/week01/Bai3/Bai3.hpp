#ifndef LAB_BAI3_HPP
#define LAB_BAI3_HPP

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
struct student {
    string name;
    string id;
    double score;
};

istream& operator>>(ostream &out, student& rhs);
ostream& operator<<(ostream &in, const student& rhs);
vector <student> get_data();
void Sort(vector <student> &list);

#endif //LAB_BAI3_HPP