//
//  main.cpp
//  overload
//
//  Created by Maksim Grischenko on 18.04.2023.
//

#include <iostream>
using namespace std;

void repchar();
void repchar(char);
void repchar(char, int);


int main(int argc, const char * argv[]) {
    repchar();
    repchar('=');
    repchar('+', 30);
    return 0;
}

void repchar() {
    
    for(int j = 0; j < 45; j++) {
        cout << '*';
    }
    cout << endl;
}

void repchar(char character) {
    for(int j = 0; j < 45; j++) {
        cout << character;
    }
    cout << endl;
}

void repchar(char character, int count) {
    
    for(int j = 0; j < count; j++) {
        cout << character;
    }
    cout << endl;
}




