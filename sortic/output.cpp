#include "functions.h"
#include <iostream>
#include <string>
using namespace std;
int output(vector<int>& a, vector <int>& b) {
    cout << " a: [";
    for (int i = 0; i < a.size(); i++) {
        if (i + 1 == a.size()) {
            cout << a[i];
        }
        else {
            cout << a[i] << ", ";
        }
    }
    cout << "] " << " b: [";
    for (int i = 0; i < b.size(); i++) {
        if (i + 1 == b.size()) {
            cout << b[i];
        }
        else {
            cout << b[i] << ", ";
        }
    }
    cout << "]";
    return 0;
}