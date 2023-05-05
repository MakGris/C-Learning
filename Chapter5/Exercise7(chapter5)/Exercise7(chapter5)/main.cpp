//
//  main.cpp
//  Exercise7(chapter5)
//
//  Created by Maksim Grischenko on 05.05.2023.
//

#include <iostream>
using namespace std;

double power(double, int);
double power(char, int);
double power(float, int);
double power(int, int);
double power(long, int);

int main() {
    char type;
    float floatNumber;
    char charNumber;
    double doubleNumber;
    int intNumber;
    long longNumber;
    int toThePower;
    double result;
    
    cout << "Введите желаемый тип данных (float(f), char(c), double(d), int(i), long(l): ";
    cin >> type;
    
    switch (type) {
        case 'f':
            cout << "Введите число: ";
            cin >> floatNumber;
            cout << "Введите степень, в которую хотите возвести число (для использования значения по умолчанию введите: - ): ";
            cin >> toThePower;
            result = power(floatNumber, toThePower);
            cout << floatNumber << " в степени " << toThePower << " равняется " << result << endl;
            break;
        case 'c':
            cout << "Введите число: ";
            cin >> charNumber;
            cout << "Введите степень, в которую хотите возвести число (для использования значения по умолчанию введите: - ): ";
            cin >> toThePower;
            result = power(charNumber, toThePower);
            cout << charNumber << " в степени " << toThePower << " равняется " << result << endl;
            break;
        case 'd':
            cout << "Введите число: ";
            cin >> doubleNumber;
            cout << "Введите степень, в которую хотите возвести число (для использования значения по умолчанию введите: - ): ";
            cin >> toThePower;
            result = power(doubleNumber, toThePower);
            cout << doubleNumber << " в степени " << toThePower << " равняется " << result << endl;
            break;
        case 'i':
            cout << "Введите число: ";
            cin >> intNumber;
            cout << "Введите степень, в которую хотите возвести число (для использования значения по умолчанию введите: - ): ";
            cin >> toThePower;
            result = power(intNumber, toThePower);
            cout << intNumber << " в степени " << toThePower << " равняется " << result << endl;
            break;
        case 'l':
            cout << "Введите число: ";
            cin >> longNumber;
            cout << "Введите степень, в которую хотите возвести число (для использования значения по умолчанию введите: - ): ";
            cin >> toThePower;
            result = power(longNumber, toThePower);
            cout << longNumber << " в степени " << toThePower << " равняется " << result << endl;
            break;
        default:
            cout << "Введен неверный тип данных!" << endl;
            break;
    }
   
    return 0;
    
}

double power(double number, int power) {
    double result = number;
    for (int i = power; i > 1; i--) {
        result *= number;
    }
    return result;
}

double power(int number, int power) {
    double result = number;
    for (int i = power; i > 1; i--) {
        result *= number;
    }
    return result;
}

double power(char number, int power) {
    double convert = static_cast<double>(number - 48);
    double result = convert;
    for (int i = power; i > 1; i--) {
        result *= convert;
    }
    return result;
}

double power(long number, int power) {
    double result = number;
    for (int i = power; i > 1; i--) {
        result *= number;
    }
    return result;
}

double power(float number, int power) {
    double result = number;
    for (int i = power; i > 1; i--) {
        result *= number;
    }
    return result;
}

