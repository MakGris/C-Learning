//
//  main.cpp
//  castTypes
//
//  Created by Maksim Grischenko on 10.02.2023.
//

#include <iostream>
using namespace::std;
int main() {
    int intVar = 1500000000;
    intVar = (intVar * 10) / 10;
    cout << "Значение intVar равно: " << intVar << endl;
    
    int intVar2 = 1500000000;
    intVar = (static_cast<double>(intVar2) * 10) / 2;
    cout << "Значение intVar равно: " << intVar2 << endl;
    return 0;
}
