//
//  main.cpp
//  exercise12(chapter5)
//
//  Created by Maksim Grischenko on 05.05.2023.
//

#include <iostream>
using namespace std;

struct Fraction {
    int numerator;
    int divider;
};

Fraction fadd(Fraction fraction1, Fraction fraction2);
Fraction fsub(Fraction fraction1, Fraction fraction2);
Fraction fmul(Fraction fraction1, Fraction fraction2);
Fraction fdiv(Fraction fraction1, Fraction fraction2);
int main() {
    Fraction fraction1, fraction2, resultFraction;
    char slash, action, repeat;
    
    do {
        cout << "Введите первую дробь, знак желаемого действия и вторую дробь: ";
        cin >> fraction1.numerator >> slash >> fraction1.divider >> action >> fraction2.numerator >> slash >> fraction2.divider;
        
        switch (action) {
            case '+':
                resultFraction = fadd(fraction1, fraction2);
                break;
            case '-':
                resultFraction = fsub(fraction1, fraction2);
                break;
            case '*':
                resultFraction = fmul(fraction1, fraction2);
                break;
            case '/':
                resultFraction = fdiv(fraction1, fraction2);
                break;
            default:
                cout << "Введен неверный знак операции!";
                break;
        }
        cout << "Результат равен: " << resultFraction.numerator << slash << resultFraction.divider << endl;
        cout << "Попробовать еще раз(y/n)?: ";
        cin >> repeat;
    }
    while(repeat != 'n');
    return 0;
}

Fraction fadd(Fraction fraction1, Fraction fraction2) {
    Fraction result;
    result.numerator = (fraction1.numerator * fraction2.divider) + (fraction1.divider * fraction2.numerator);
    result.divider = fraction1.divider * fraction2.divider;
    return result;
}

Fraction fsub(Fraction fraction1, Fraction fraction2) {
    Fraction result;
    result.numerator = (fraction1.numerator * fraction2.divider) - (fraction1.divider * fraction2.numerator);
    result.divider = fraction1.divider * fraction2.divider;
    return result;
}

Fraction fmul(Fraction fraction1, Fraction fraction2) {
    Fraction result;
    result.numerator = fraction1.numerator * fraction2.numerator;
    result.divider = fraction1.divider * fraction2.divider;
    return result;
}

Fraction fdiv(Fraction fraction1, Fraction fraction2) {
    Fraction result;
    result.numerator = fraction1.numerator * fraction2.divider;
    result.divider = fraction1.divider * fraction2.numerator;
    return result;
}

