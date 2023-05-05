//
//  main.cpp
//  exercise8(chapter5)
//
//  Created by Maksim Grischenko on 05.05.2023.
//

#include <iostream>
using namespace std;

void swap(int&, int&);

int main() {
    int number1, number2;
    cout << "Введите число№1: ";
    cin >> number1;
    cout << "Введите число№2: ";
    cin >> number2;
    swap(number1, number2);
    
    cout << "Результат обмена:" <<endl << "Число№1: " << number1 << endl << "Число№2: "<< number2 << endl;
    
    return 0;
}

void swap(int& a, int& b) {
    int swap = a;
    a = b;
    b = swap;
}
