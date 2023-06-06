//
//  main.cpp
//  Exercises(chapter6, ex9)
//
//  Created by Maksim Grischenko on 06.06.2023.
//

#include <iostream>
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
        cout << "Введите дробь в формате 3/5: ";
        cin >> numerator >> slash >> divider;
    }
    void getFraction() const {
        cout << numerator << '/' << divider << endl;
    }
    void sum(Fraction fract1, Fraction fract2) {
        numerator = (fract1.numerator * fract2.divider + fract1.divider * fract2.numerator);
        divider = (fract1.divider * fract2.divider);
    }
};
int main() {
    Fraction fract1, fract2, fract3;
    char repeat;
    do {
        fract1.setFraction();
        fract2.setFraction();
        fract3.sum(fract1, fract2);
        cout << "Сумма дробей равна: ";
        fract3.getFraction();
        cout << "Повторить вычисления(y/n)?: ";
        cin >> repeat;
        
    } while(repeat != 'n');
    
    
   
    
    return 0;
}
