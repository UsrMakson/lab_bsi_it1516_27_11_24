#include "Header.h"
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

static vector <int> razdel(int x) {
    vector <int> arr;
    while (x > 0) {
        arr.push_back(x % 10);
    }
    arr.revers
    return arr;
}

int proverka(int a, int b) {
    vector <int> arr1;
    vector <int> arr2;
    arr 1 = razdel(a);
    if (a == b)
        return 1;
    else if (a < b)
        return 2;
    else if (a > b)
        return 3;
}