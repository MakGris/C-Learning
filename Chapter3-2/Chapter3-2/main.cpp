//
//  main.cpp
//  Chapter3-2
//
//  Created by Maksim Grischenko on 02.03.2023.
//

#include <iostream>
#include <string>
#include <iomanip>

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
    int years;
    double percent, deposit;
    cout << "Введите начальный вклад: ";
    cin >> deposit;
    cout << "Введите число лет: ";
    cin >> years;
    cout << "Введите процентную ставку: ";
    cin >> percent;
    for(int x = years; x > 0; x--) {
        deposit = deposit + (deposit * (percent / 100));
    }
    cout << "Через " << years << " " << "лет вы получите: " << deposit << " доллара" <<endl;
    return 0;
}
