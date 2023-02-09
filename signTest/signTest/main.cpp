//
//  main.cpp
//  signTest
//
//  Created by Maksim Grischenko on 09.02.2023.
//

#include <iostream>
using namespace::std;
int main() {
    int signVar = 1500000000;
    unsigned int unsignVar = 1500000000;
    signVar = (signVar * 2) / 3;
    unsignVar = (unsignVar * 2) / 3;
    
    cout << "Знаковая переменная равна " << signVar << endl;
    cout << "Беззнаковая переменная равна " << unsignVar << endl;
    return 0;
}
