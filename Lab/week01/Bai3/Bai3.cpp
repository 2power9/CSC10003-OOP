#include "Bai3.hpp"

ostream& operator<<(ostream &out, const student& rhs) {
    out << rhs.name << "(" << rhs.id << "):" << rhs.score;
    return out;
}

istream &operator>>(istream &in, student &rhs) {
    cout << "Type student ID: ";
    in >> rhs.id;
    cout << "Type name: ";
    in.ignore();
    getline(in, rhs.name);
    cout << "Type score: ";
    in >> rhs.score;
    return in;
}

vector <student> get_data() {
    int n;
    cout << "Type number of students: ";
    cin >> n;

    vector <student> ans(n);
    for (int i = 0; i < n; ++i) cin >> ans[i];
    return ans;
}

void print(const vector <student>& list) {
    for (const student& e : list)
        cout << e << "\n";
}

bool compare_name(const student& a, const student& b) {
    return a.name < b.name;
}

bool compare_id(const student& a, const student& b) {
    return a.id < b.id;
}

bool compare_score(const student& a, const student& b) {
    return a.score < b.score;
}

void Sort(vector <student> &list) {
    cout << "======Tutorial======\n";
    cout << "1 - ASC by name\n";
    cout << "2 - ASC by score\n";
    cout << "3 - ASC by ID\n";
    cout << "Choose compare rule for sorting: ";
    int temp;
    cin >> temp;
    switch (temp) {
        case 1:
            sort(list.begin(), list.end(), compare_name);
            print(list);
            break;
        case 2:
            sort(list.begin(), list.end(), compare_score);
            print(list);
            break;
        case 3:
            sort(list.begin(), list.end(), compare_id);
            for (const student& e : list)
                cout << "[" << e.id << "]-\"" << e.name << "\":" << e.score << "\n";
            break;
        default:
            cout <<"We dont have this option.\n";
    }
}


int main() {
    vector <student> list_students = get_data();
    Sort(list_students);
    return 0;
}
