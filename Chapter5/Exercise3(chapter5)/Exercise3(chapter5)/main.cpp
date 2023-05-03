//
//  main.cpp
//  Exercise3(chapter5)
//
//  Created by Maksim Grischenko on 03.05.2023.
//

#include <iostream>
using namespace std;


void zeroSmaller(int&, int&);

int main() {
    int number1 = 2;
    int number2 = 3;
    zeroSmaller(number1, number2);
    
    cout << number1 << endl;
    cout << number2 << endl;
    
    
    return 0;
}

void zeroSmaller(int& a, int& b) {
    if (a < b) {
        a = 0;
    } else {
        b = 0;
    }
    
}
