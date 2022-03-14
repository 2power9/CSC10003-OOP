#ifndef CSC10003_OOP_MYSTRING_H
#define CSC10003_OOP_MYSTRING_H

#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

class MyString {
private:
    string st;
    bool is_sep(char c, const vector<char>& seps);

public:
    MyString();
    MyString(const string& str);
    MyString(const char* c_str);

    const MyString& operator=(const MyString& rhs);
    MyString& operator=(const char* c_str);
    MyString& operator=(const string& str);
    MyString operator+(const MyString& rhs);

    friend ostream& operator<<(ostream& os, const MyString& ms);

    vector<MyString> Split(const vector<char>& seps, const bool ignore_empty);
    friend MyString operator+(const string& lhs, const MyString& rhs);
};

#endif //CSC10003_OOP_MYSTRING_H
