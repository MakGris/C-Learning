//
//  main.cpp
//  Reference
//
//  Created by Maksim Grischenko on 16.04.2023.
//

#include <iostream>
using namespace std;

void intFraction(float, float&, float&);


int main() {
    float number, intPart, fractionPart;
    do {
        cout << "\nВведите вещественное число: ";
        cin >> number;
        intFraction(number, intPart, fractionPart);
        cout << "Целая часть равна " << intPart << ", дробная часть равна " << fractionPart << endl;
        
    } while(number != 0.0);
    
    return 0;
}

void intFraction(float number, float& intPart, float& fractionPart) {
    
//    intPart = static_cast<long>(number);
//    fractionPart = number - intPart;
    
    long temp = static_cast<long>(number);
    intPart = static_cast<float>(temp);
    fractionPart = number - intPart;
    
    
}
