//
//  main.cpp
//  Chapter3
//
//  Created by Maksim Grischenko on 20.02.2023.
//

#include <iostream>
#include <iomanip>
#include <unistd.h>
using namespace::std;

int main() {
//    Ложь - истина
//    int numb;
//    cout << "Введите число: ";
//    cin >> numb;
//    cout << "numb <10 равно " << (numb < 10) << endl;
//    cout << "numb >10 равно " << (numb > 10) << endl;
//    cout << "numb ==10 равно " << (numb == 10) << endl;
    
//    Цикл For с одним оператором
//    int j;
//    for (j = 0; j < 15; j++)
//        cout << j * j << " ";
//    cout << endl;
//    Цикл for с несколькими операторами
//    int numb;
//    for(numb = 1; numb <= 15; numb++) {
//        cout << setw(4) << numb;
//        int cube = numb * numb * numb;
//        cout << setw(6) << cube << endl;
//    }
    /*Вычисление факториала представляет собой умножение всех целых
     положительных чисел, непревышающих заданное число
     */
//    unsigned int numb;
//    unsigned long fact = 1;
//    cout << "Введите целое число, факториал которого мы будем вычислять: ";
//    cin >> numb;
//    for(int j = numb; j > 0; j--) {
//        fact *= j;
//    }
//    cout << "Факториал числа равен " << fact<< endl;
    
//    Цикл while, отображаются значения, пока пользователь не введет 0
//    int n = 99;
//    while(n != 0) {
//        cin >> n;
//        cout << endl;
//    }
    
//    Возведение в 4 степень циклом while
    
//    int numb = 1;
//    int pow = 1;
//
//    while (pow < 10000) {
//        cout << setw(4) << numb;
//        cout << setw(5) << pow << endl;
//        ++numb;
//        pow = numb * numb * numb * numb;
//    }
    
//    Последовательность Фибоначчи
    
//    const unsigned int limit = 8294967295;
//
//    unsigned long next = 0;
//    unsigned long last = 1;
//
//    while(next < limit / 2) { // Арифметические операции всегда имеют более высокий приоритет, чем операции сравнения
//        cout << last << " ";
//        long sum =next + last;
//        next = last;
//        last = sum;
//    }
//    cout << endl;
    
//    Цикл do-while
//    long dividend, divisor;
//    char answer;
//
//    do {
//        cout << "Введите делимое: ";
//        cin >> dividend;
//        cout << "Введите делитель: ";
//        cin >> divisor;
//        cout << "Частное равно: " << dividend / divisor << "\n";
//        cout << "Остаток от деления равен: " << dividend % divisor << "\n";
//        cout << "Еще раз?(y/n): ";
//        cin >> answer;
//    }
//    while (answer != 'n');
    
////    Условный оператор if
//    int x;
//    cout << "Введите число: ";
//    cin >> x;
//
//    if (x > 100) {
//        cout << "Число " << x << " ";
//        cout << "больше, чем 100\n";
//    }
//    Совместное использование цикла и оператора ветвления if
    int n, j;
    cout << "Введите число: ";
    cin >> n;
    
    for (j = 2; j <= n / 2; j++) {
        if (n % j == 0) {
            cout << "Число не является простым. " << "Делится на " << j << endl;
            exit(0);
        }
    }
    cout << "Число является простым" << endl;
    return 0;
}
