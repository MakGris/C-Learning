//
//  main.cpp
//  Exercise5(chapter7)
//
//  Created by Maksim Grischenko on 17.07.2023.
//

#include <iostream>
using namespace std;

class Fraction {
private:
    int numerator;
    int divider;
public:
    Fraction(int num, int div) : numerator(num), divider(div) {}
    Fraction() : numerator(0), divider(0) {}
    
    void setFraction() {
        char slash = '/';
        cout << "Введите дробь в формате числитель/знаменатель: ";
        cin >> numerator >> slash >> divider;
    }
    
    void getFraction() const {
        cout << numerator << '/' << divider << endl;
    }
    
    void addition(Fraction fract2) {
        if (numerator == 0 && divider == 0) {
            numerator = fract2.numerator;
            divider = fract2.divider;
        } else {
            numerator = (numerator * fract2.divider) + (divider * fract2.numerator);
            divider = (divider * fract2.divider);
        }
    }
    
    void division(Fraction fract2) {
        numerator = numerator * fract2.divider;
        divider = divider * fract2.numerator;
    }
    
    void  divisionOnInt(int size) {
        divider *= size;
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

void getMiddle(Fraction[], int);
const int maxSize = 4;

int main() {
    Fraction array [maxSize];
    int count = 0;
    char repeat;
    
    do {
        if(count >= maxSize) {
            cout << "Массив переполнен!\n";
            break;
        }
        array[count++].setFraction();
        cout << "Желаете ввести еще одну дробь(y/n)?: ";
        cin >> repeat;
        
    }while( repeat != 'n');
    
    getMiddle(array, maxSize);
    return 0;
}
void getMiddle(Fraction array[], int sizeOfArray) {
    Fraction summary;
    for( int j = 0; j < sizeOfArray; j++) {
        summary.addition(array[j]);
        summary.getFraction();
    }
    summary.divisionOnInt(sizeOfArray);
    summary.lowTerms();
    cout << "Среднее: ";
    summary.getFraction();
}
