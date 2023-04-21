//
//  main.cpp
//  defaultArguments
//
//  Created by Maksim Grischenko on 21.04.2023.
//

#include <iostream>
using namespace std;
/*
 аргументы по умолчанию
 */
void repchar(char = '*', int = 45);


int main(int argc, const char * argv[]) {
    repchar();
    repchar('=');
    repchar('+', 30);
    return 0;
}

void repchar(char character, int count) {
    
    for(int j = 0; j < count; j++) {
        cout << character;
    }
    cout << endl;
}
