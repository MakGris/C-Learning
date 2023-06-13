//
//  main.cpp
//  Exercises(chapter6, ex12)
//
//  Created by Maksim Grischenko on 13.06.2023.
//

#include <iostream>
#include <iomanip>
using namespace std;
class Fraction {
private:
    int numerator;
    int divider;
public:
    Fraction(int num, int div): numerator(num), divider(div) {}
    Fraction() : numerator(0), divider(0) {}
    void setFraction() {
        char slash = '/';
        cout << "Введите дробь в формате числитель/знаменатель: ";
        cin >> numerator >> slash >> divider;
    }
    void getFraction() {
        lowTerms();
        cout << numerator << '/' << divider << " ";
    }
    
    void multiplication(Fraction fract1, Fraction fract2) {
        numerator = fract1.numerator * fract2.numerator;
        divider = fract1.divider * fract2.divider;
        lowTerms();
    }
    void lowTerms() {
        long num, div, temp, grandCommonDivider;
//Нахождение модуля чисел
        num = labs(numerator);
        div = labs(divider);
        if(div == 0) { //Проверка знаменателя на 0
            cout << "Недопустимый знаменатель!" << endl;
            exit(1);
        } else if(num == 0) { //Проверка числителя на 0
            numerator = 0;
            divider = 1;
            return;
        }
        //Нахождение наибольшего общего делителя
        while(num != 0) {
            if(num < div) {
                temp = num;
                num = div;
                div = temp;
            }
            num = num - div;
        }
        grandCommonDivider = div;
        numerator = numerator / grandCommonDivider;
        divider = divider / grandCommonDivider;
    }
};

void presentFraction(Fraction, int);
void multiplyFractions(Fraction, Fraction, Fraction, int);

int main() {
    Fraction fract1, fract2, result;
    int divider;
    cout << "Введите знаменатель: ";
    cin >> divider;
    presentFraction(fract1, divider);
    multiplyFractions(fract1, fract2, result, divider);
    return 0;
}

void presentFraction(Fraction fract1, int divider) {
    for (int j = 1; j != divider; j++) {
        fract1 = {j, divider};
        fract1.getFraction();
    }
    cout  << endl << setw(55) << setfill('-') << "" << endl;
}

void multiplyFractions(Fraction fract1, Fraction fract2, Fraction result, int divider) {
    for (int j = 1; j != divider; j++) {
        fract1 = {j, divider};
        fract1.getFraction();
        for (int k = 1; k != divider; k++) {
            fract2 = {k, divider};
            result.multiplication(fract1, fract2);
            result.getFraction();
        }
        cout << endl;
    }
}

