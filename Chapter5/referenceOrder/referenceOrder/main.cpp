//
//  main.cpp
//  referenceOrder
//
//  Created by Maksim Grischenko on 16.04.2023.
//

#include <iostream>
using namespace std;

void order(int&, int&);

int main() {
    int number1 = 99, number2 = 11, number3 = 22, number4 = 48;
    order(number1, number2);
    order(number3, number4);
    
    cout << "Number 1: " << number1 << endl
    << "Number 2: " << number2 << endl
    << "Number 3: " << number3 << endl
    << "Number 4: " << number4 << endl;
    
    return 0;
}
void order(int& number1, int& number2) {
    if(number1 > number2) {
        int temp = number1;
        number1 = number2;
        number2 = temp;
    }
}
