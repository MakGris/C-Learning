//
//  main.cpp
//  Chapter3-2
//
//  Created by Maksim Grischenko on 02.03.2023.
//

#include <iostream>
#include <string>
#include <iomanip>
#include <math.h>

using namespace std;

int main() {
    //    bool name;
    //    string nameOne = "george";
    //    string nameTwo = "sally";
    //    name = nameOne != nameTwo;
    //    cout << name << endl;
    //
    //    for (int j = 100; j <= 110; j++) {
    //        cout << j << "\n";
    //    }
    
    //    int k = 100;
    //
    //    while(k <= 110) {
    //        cout << k << "\n";
    //        ++k;
    //    }
    
    //    int j = 100;
    //
    //    do {
    //        cout << j++ << "\n";
    //    }
    //    while(j <= 110);
    
    //    int age = 20;
    //    if (age > 21) {
    //        cout << "Yes\n";
    //    } else {
    //        cout << "No\n";
    //    }
    //    char ch;
    //    cout << "Введите любую букву: ";
    //    cin >> ch;
    //
    //    switch (ch) {
    //        case 'y':
    //            cout << "Yes\n";
    //            break;
    //        case 'n':
    //            cout << "No\n";
    //            break;
    //        default:
    //            cout << "Unknown\n";
    //    }
    //    int limit = 55;
    //    int speed = 56;
    //
    //    bool overSpeedLimit = (speed > 55 && limit == 55) ? true : false;
    //    cout << overSpeedLimit << endl;
    //
    //    int ticket = (speed > 55) ? 1 : 0;
    //    cout << ticket << endl;
    
    //    Homework
    //    Задание 1
    //    int number;
    //    int modifier = 1;
    //    cout << "Введите число: ";
    //    cin >> number;
    //    for (int row = 1; row <= 20; row++) {
    //        for(int j = 1; j<=10; j++) {
    //            cout << number * modifier;
    //            modifier ++;
    //        }
    //        cout << endl;
    //    }
    //    Задание 2
    //    int typeOfScale;
    //    double temp;
    //    cout << "Нажмите 1 для перевода шкалы Цельсия в шкалу Фаренгейта.\n" <<
    //    "Нажмите 2 для перевода шкалы Фаренгейта в шкалу Цельсия: ";
    //    cin >> typeOfScale;
    //    switch (typeOfScale) {
    //        case 1:
    //            cout << "Введите температуру по Цельсию: ";
    //            cin >> temp;
    //        {
    //            double result = (temp * 9 / 5) + 32;
    //            cout << "Значение по Фаренгейту: " << result << endl;
    //        }
    //            break;
    //        case 2:
    //            cout << "Введите температуру по Фаренгейту: ";
    //            cin >> temp;
    //        {
    //            double result = (temp - 32) * 5 / 9;
    //            cout << "Значение по Цельсию: " << result << endl;
    //        }
    //            break;
    //        default:
    //            break;
    //    }
    //    Задание 3
    //    char ch;
    //    unsigned long total = 0;
    //    cout << "Введите число: ";
    //    while ((ch = getchar()) != '\n') {
    //        total = total * 10 + ch-'0';
    //    }
    //    cout << "Получилось число: "<< total << endl;
    
    //   Задание 4
    //    double result, operandOne, operandTwo;
    //    char action;
    //    char oneMoreTime;
    //    cout << "Введите первый операнд, операцию и второй операнд: ";
    //    cin >> operandOne >> action >> operandTwo;
    //    do {
    //        cout << "Введите первый операнд, операцию и второй операнд: ";
    //        cin >> operandOne >> action >> operandTwo;
    //
    //        switch (action) {
    //            case '/':
    //                result = operandOne / operandTwo;
    //                break;
    //            case '*':
    //                result = operandOne * operandTwo;
    //                break;
    //            case '-':
    //                result = operandOne - operandTwo;
    //                break;
    //            case '+':
    //                result = operandOne + operandTwo;
    //                break;
    //
    //            default:
    //                cout << "Введен не верный оператор!";
    //                break;
    //        }
    //
    //        cout << "Результат равен = " << result << '\n';
    //        cout << "Выполнить еще одну операцию (y/n): ";
    //        cin >> oneMoreTime;
    //
    //
    //    }
    //
    //    while (oneMoreTime != 'n');
    
    //    Задание 5
    //    int numberOfX = 20;
    //    int space = 25;
    //    for(int j = 1; j <= 20; j++) {
    //        cout << setw(space);
    //        for(int x = numberOfX; x <= 20; x++) {
    //            cout <<'X';
    //        }
    //        space -= 1;
    //        numberOfX -= 2;
    //        cout << endl;
    //    }
    //    cout << endl;
    //    Задание 6
    //    unsigned int numb;
    //    do {
    //        unsigned long fact = 1;
    //        cout << "Введите целое число, факториал которого мы будем вычислять: ";
    //        cin >> numb;
    //        for(int j = numb; j > 0; j--) {
    //            fact *= j;
    //        }
    //        if(numb == 0) {
    //            cout <<"Ошибка" << endl;
    //        } else {
    //            cout << "Факториал числа равен " << fact<< endl;
    //        }
    //    }
    //    while (numb != 0);
    
    //    Задание 7
    //    int years;
    //    double percent, deposit;
    //    cout << "Введите начальный вклад: ";
    //    cin >> deposit;
    //    cout << "Введите число лет: ";
    //    cin >> years;
    //    cout << "Введите процентную ставку: ";
    //    cin >> percent;
    //    for(int x = years; x > 0; x--) {
    //        deposit = deposit + (deposit * (percent / 100));
    //    }
    //    cout << "Через " << years << " " << "лет вы получите: " << deposit << " доллара" <<endl;
    //    Упражнение 8
    //    int firstPunds, firstShillings, firstPens;
    //    char dot;
    //    char repeat;
    //    int secondPunds, secondShillings, secondPens;
    //    do {
    //        cout << "Введите первую сумму: £";
    //        cin >> firstPunds >> dot >> firstShillings >>dot >> firstPens;
    //
    //        while(firstShillings > 19 || firstPens > 11) {
    //            cout << "Неверная сумма, попробуйте еще раз: ";
    //            cin >> firstPunds >> dot >> firstShillings >>dot >> firstPens;
    //        }
    //
    //        cout << "Введите вторую сумму: £";
    //        cin >> secondPunds >> dot >> secondShillings >>dot >> secondPens;
    //
    //        while(secondShillings > 19 || secondPens > 11) {
    //            cout << "Неверная сумма, попробуйте еще раз: ";
    //            cin >> secondPunds >> dot >> secondShillings >> dot >> secondPens;
    //        }
    //
    //        int totalPunds = firstPunds + secondPunds;
    //        int totalShillings = firstShillings + secondShillings;
    //        if (totalShillings > 19) {
    //            totalPunds += 1;
    //            totalShillings = totalShillings - 20;
    //        }
    //        int totalPens = firstPens + secondPens;
    //        if (totalPens > 11) {
    //            totalShillings += 1;
    //            totalPens = totalPens - 12;
    //        }
    //        cout << "Всего: £" << totalPunds << dot << totalShillings << dot << totalPens << endl;
    //        cout << "Повторить(y/n)?: ";
    //        cin >> repeat;
    //    }
    //    while (repeat != 'n');
    //
    //    Упражнение 9
    //    int guests;
    //    int places;
    //
    //    cout << "Введите число гостей: ";
    //    cin >> guests;
    //    cout << "Введите количество мест: ";
    //    cin >> places;
    //
    //        for (int k = guests - 1; places > 1; k--) {
    //            guests *= k;
    //            places -= 1;
    //            cout << guests << endl;
    //
    //        }
    
    //    Упражнение 10
    
//    int years;
//    double percent, deposit, wantMoney;
//    cout << "Введите начальный вклад: ";
//    cin >> deposit;
//    cout << "Введите желаемую сумму: ";
//    cin >> wantMoney;
//    cout << "Введите процентную ставку: ";
//    cin >> percent;
//    years = (wantMoney - deposit) / (deposit * (percent / 100));
//
//    cout << "Через " << years << " " << "лет вы получите: " << wantMoney << " доллара" <<endl;
    
    //    Упражнение 11
//    int firstPunds, firstShillings, firstPens;
//    double multiplier;
//    char dot;
//    char action;
//    char repeat;
//    int secondPunds, secondShillings, secondPens;
//    do {
//        cout << "Введите первую денежную сумму: £";
//        cin >> firstPunds >> dot >> firstShillings >> dot >> firstPens;
//        if(firstShillings > 19 || firstPens > 11) {
//            cout << "Неправильная сумма, попробуйте еще раз: £";
//            cin >> firstPunds >> dot >> firstShillings >> dot >> firstPens;
//        }
//        cout << "Введите желаемое действие(сложение, вычитание или умножение): ";
//        cin >> action;
//        if(action == '*') {
//            cout << "Введите число на которое хотите умножить денежную сумму: ";
//            cin >> multiplier;
//        } else {
//            cout << "Введите вторую денежную сумму: £";
//            cin >> secondPunds >> dot >> secondShillings >> dot >> secondPens;
//
//            if(secondShillings > 19 || secondPens > 11) {
//                cout << "Неправильная сумма, попробуйте еще раз: £";
//                cin >> secondPunds >> dot >> secondShillings >> dot >> secondPens;
//            }
//        }
//
//        switch (action) {
//            case '+': {
//                int totalPunds = firstPunds + secondPunds;
//                int totalShillings = firstShillings + secondShillings;
//                if (totalShillings > 19) {
//                    totalPunds += 1;
//                    totalShillings = totalShillings - 20;
//                }
//                int totalPens = firstPens + secondPens;
//                if (totalPens > 11) {
//                    totalShillings += 1;
//                    totalPens = totalPens - 12;
//                }
//                cout << "Всего: £" << totalPunds << dot << totalShillings << dot << totalPens << endl;
//                break;
//            }
//            case '-': {
//                if(secondPunds > firstPunds) {
//                    cout << "Вторая сумма больше первой, вычитание невозможно" << endl;
//                    cout << "Введите вторую сумму: £";
//                    cin >> secondPunds >> dot >> secondShillings >> dot >> secondPens;
//                }
//                int totalPunds = firstPunds - secondPunds;
//                int totalShillings = firstShillings - secondShillings;
//                if(totalShillings < 1) {
//                    totalPunds -= 1;
//                    if(totalPunds < 1) {
//                        totalPunds = 0;
//                    }
//                    totalShillings = 0;
//                }
//                int totalPens = firstPens - secondPens;
//                if(totalPens < 1) {
//                    totalShillings -= 1;
//                    if(totalShillings < 1) {
//                        totalShillings = 0;
//                    }
//                    totalPens = 0;
//                }
//                cout << "Всего: £" << totalPunds << dot << totalShillings << dot << int(totalPens) << endl;
//                break;
//            }
//            case '*': {
//                double totalPunds = firstPunds * multiplier;
//                double totalShillings = firstShillings * multiplier;
//                double totalPens = firstPens * multiplier;
//                totalShillings += (totalPunds - static_cast<int>(totalPunds)) * 20;
//                totalPens += (totalShillings - static_cast<int>(totalShillings)) * 12;
//                if(totalShillings > 19) {
//                    while (totalShillings > 19) {
//                        totalPunds += 1;
//                        totalShillings -= 20;
//                        if(totalShillings < 1) {
//                            totalShillings = 0;
//                        }
//                    }
//
//                }
//                if(totalPens > 11) {
//                    while (totalPens > 11) {
//                        totalShillings += 1;
//                        totalPens -= 12;
//                        if(totalPens < 1) {
//                            totalPens = 0;
//                        }
//                    }
//                }
//                cout << "Всего: £" << trunc(totalPunds) << dot << totalShillings << dot << trunc(totalPens) << endl;
//                break;
//
//            }
//            default:
//                cout << "Введено неверное действие!\n";
//                break;
//        }
//        cout << "Попробовать еще раз(y\n)?: ";
//        cin >> repeat;
//    }
//    while (repeat != 'n');
//    Упражнение 12
    double firstNumerator, firstDivider, secondNumerator, secondDivider;
    char slash, action, repeat;
    double result = 0.0;
    do {
        cout << "Введите первую дробь, знак желаемого действия и вторую дробь: ";
        cin >> firstNumerator >> slash >> firstDivider >> action >> secondNumerator >> slash >> secondDivider;
        
        switch (action) {
            case '+':
                result = (firstNumerator*secondDivider + firstDivider*secondNumerator)/(firstDivider*secondDivider);
                break;
            case '-':
                result = (firstNumerator*secondDivider - firstDivider*secondNumerator)/(firstDivider*secondDivider);
                break;
            case '*':
                result = (firstNumerator * secondNumerator)/(firstDivider * secondDivider);
                break;
            case '/':
                result = (firstNumerator * secondDivider)/(firstDivider * secondNumerator);
                break;
            default:
                cout << "Введен неверный знак операции!";
                break;
        }
        cout << "Результат равен: " << result << endl;
        cout << "Попробовать еще раз(y/n)?: ";
        cin >> repeat;
    }
    while(repeat != 'n');
    
    return 0;
}
