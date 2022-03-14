#include "MyString.h"

bool MyString::is_sep(char c, const vector<char> &seps) {
    for (int i = 0; i < (int) seps.size(); i++)
        if (seps[i] == c) return true;
    return false;
}

MyString::MyString() {
    st = "";
}

MyString::MyString(const string &str) {
    st = str;
}

MyString::MyString(const char *c_str) {
    st = c_str;
}

const MyString &MyString::operator=(const MyString &rhs) {
    st = rhs.st;
    return *this;
}

MyString &MyString::operator=(const char *c_str) {
    *this = MyString(c_str);
    return *this;
}

MyString &MyString::operator=(const string& str) {
    *this = MyString(str) ;
    return *this;
}

MyString MyString::operator+(const MyString &rhs) {
    return MyString(st + rhs.st);
}

ostream &operator<<(ostream &os, const MyString &ms) {
    os << ms.st;
    return os;
}

vector<MyString> MyString::Split(const vector<char> &seps, const bool ignore_empty) {
    string replaced = st;
    for (int i = 0; i < (int) replaced.size(); i++)
        if (is_sep(replaced[i], seps)) replaced[i] = ' ';

    vector<MyString> tokens;
    string token = "";
    bool met_sep = false;

    for (int i = 0; i < (int) replaced.size(); i++) {
        if (replaced[i] != ' ') {
            token += replaced[i];
            met_sep = false;
            continue;
        }

        if (token.size() != 0) {
            tokens.push_back(MyString(token));
            token = "";
        }

        if (ignore_empty || !met_sep) {
            met_sep = true;
            continue;
        }

        if (!ignore_empty && met_sep) {
            tokens.push_back(MyString(" "));
            met_sep = false;
        }
    }

    if (token.size() != 0) {
        tokens.push_back(MyString(token));
        token = "";
    }

    return tokens;
}

MyString operator+(const string &lhs, const MyString &rhs) {
    return MyString(lhs) + rhs;
}
