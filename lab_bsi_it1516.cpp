#include "Header.h"
#include <iostream>
#include <cmath>

using namespace std;


int main() {
    setlocale(LC_ALL, "RUS");

    int A, B;
    int zero = 0;
    int one = 0;
    int two = 0;
    bool pop = false;
    cout << "Введите четырехзначное число ";
    cin >> A ;
    cout << endl;

    while (pop == false){
        B = randomnumber();
        int N = proverka (A, B);
        while (N > 0) {
            int digit = N % 10;
            if (digit == 0) zero++;
            else if (digit == 1) one++;
            else if (digit == 2) two++;
            N /= 10;
        }
        if (zero == 4) cout << "Быков и коров нет, попробуйте ещё раз :(";
        else if (two == 4) {
            cout << "Правильно! Вы выйграли! Ура!";
            pop = true;
        }
        else {
            cout << "Вы на пути к правильному ответу! Коров - " <<  one << " , a быков - " << two;
        }
    }
}
