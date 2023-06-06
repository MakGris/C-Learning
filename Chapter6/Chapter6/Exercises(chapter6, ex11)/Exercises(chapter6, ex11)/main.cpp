//
//  main.cpp
//  Exercises(chapter6, ex11)
//
//  Created by Maksim Grischenko on 06.06.2023.
//

#include <iostream>
#include <cmath>
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
    void getFraction() const {
        cout << numerator << '/' << divider << endl;
    }
    void addition(Fraction fract1, Fraction fract2) {
        numerator = (fract1.numerator * fract2.divider) + (fract1.divider * fract2.numerator);
        divider = (fract1.divider * fract2.divider);
    }
    void subtraction(Fraction fract1, Fraction fract2) {
        numerator = (fract1.numerator * fract2.divider) - (fract1.divider * fract2.numerator);
       divider = fract1.divider * fract2.divider;
    }
    
    void multiplication(Fraction fract1, Fraction fract2) {
        numerator = fract1.numerator * fract2.numerator;
        divider = fract1.divider * fract2.divider;
    }
    
    void division(Fraction fract1, Fraction fract2) {
        numerator = fract1.numerator * fract2.divider;
        divider = fract1.divider * fract2.numerator;
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

Fraction chooseAction(char, Fraction, Fraction, Fraction);

int main() {
    char action;
    Fraction fract1, fract2, fract3;
    fract1.setFraction();
    fract2.setFraction();
    cout << "Выберете желаемое действие(+,-,/,*): ";
    cin >> action;
    chooseAction(action, fract1, fract2, fract3);
    
    
    
    return 0;
}

Fraction chooseAction(char action, Fraction fract1, Fraction fract2, Fraction result) {
    switch (action) {
        case '+':
            result.addition(fract1, fract2);
            result.lowTerms();
            cout << "Результат сложения дробей: ";
            result.getFraction();
            break;
        case '-':
            result.subtraction(fract1, fract2);
            result.lowTerms();
            cout << "Результат вычитания дробей: ";
            result.getFraction();
            break;
        case '*':
            result.multiplication(fract1, fract2);
            result.lowTerms();
            cout << "Результат умножения дробей: ";
            result.getFraction();
            break;
        case '/':
            result.division(fract1, fract2);
            result.lowTerms();
            cout << "Результат деления дробей: ";
            result.getFraction();
            break;
            
        default:
            break;
    }
    return result;
}


