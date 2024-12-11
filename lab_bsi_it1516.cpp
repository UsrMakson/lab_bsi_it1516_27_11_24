#include "Header.h"
#include <iostream>
#include <cmath>

using namespace std;


int main() {
    int A, B, i;
    cout << "Введите число ";
    cin >> A; cout << endl;
    B = randomnumber();
    switch (proverka(A, B)) {
    case 1: cout << "Верно!"; break;
    case 2: cout << "Не то число, нужное - больше "; break;
    case 3: cout << "Не то число, нужное - меньше "; break;
    }
}