//
//  main.cpp
//  Exercise2(Chapter5)
//
//  Created by Maksim Grischenko on 03.05.2023.
//

#include <iostream>
using namespace std;

double power(double, int = 2);


int main() {
    double number;
    int toThePower;
    double result;
    
    cout << "Введите число: ";
    cin >> number;
    cout << "Введите степень, в которую хотите возвести число (для использования значения по умолчанию введите: - ): ";
    cin >> toThePower;
    if (toThePower == 0) {
        result = power(number);
        toThePower = 2;
    } else {
        result = power(number, toThePower);
    }
    cout << number << " в степени " << toThePower << " равняется " << result << endl;
//    double sum = power(5, 6);
    
   
    return 0;
    
}

double power(double number, int power) {
    double result = number;
    for (int i = power; i > 1; i--) {
        result *= number;
    }
    return result;
}
