#ifndef LAB_BAI1_H
#define LAB_BAI1_H

#include <iostream>
#include <algorithm>
using namespace std;

struct int_array {
    int *elements;
    int n;
};
int_array get_data();
void sort_asc(int_array a);
void sort_desc(int_array a);
void sort_asc_mod_5(int_array a);
void sort_asc_mod_7(int_array a);
void print(int_array a);

#endif //LAB_BAI1_H