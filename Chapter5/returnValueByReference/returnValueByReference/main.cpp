//
//  main.cpp
//  returnValueByReference
//
//  Created by Maksim Grischenko on 25.04.2023.
//

#include <iostream>
using namespace std;
int x;
int& setX();

int main() {
    setX() = 92;
    
    cout << x << endl;
    
    
    return 0;
}

int& setX() {
    return x;
}
