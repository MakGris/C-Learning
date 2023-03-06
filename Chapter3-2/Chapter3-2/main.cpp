//
//  main.cpp
//  Chapter3-2
//
//  Created by Maksim Grischenko on 02.03.2023.
//

#include <iostream>
#include <string>

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
    char ch;
    unsigned long total = 0;
    cout << "Введите число: ";
    while ((ch = getchar()) != '\n') {
        total = total * 10 + ch-'0';
    }
    cout << "Получилось число: "<< total << endl;
    return 0;
}
