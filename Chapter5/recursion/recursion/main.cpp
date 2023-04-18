//
//  main.cpp
//  recursion
//
//  Created by Maksim Grischenko on 18.04.2023.
//

#include <iostream>
using namespace std;

unsigned long factorialFunc(unsigned long);

int main() {
    int number;
    unsigned long factorial;
    cout << "Введите целое число: ";
    cin >> number;
    factorial = factorialFunc(number);
    cout << "Факториал числа " << number << "равен: " << factorial << endl;
    return 0;
}
unsigned long factorialFunc(unsigned long number) {
    
    if(number > 1) {
        return number * factorialFunc(number - 1);
    } else {
        return  1;
    }
}

