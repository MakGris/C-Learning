//
//  main.cpp
//  exercise10(chapter5)
//
//  Created by Maksim Grischenko on 05.05.2023.
//

#include <iostream>
using namespace std;

void testGlobalLocalVar();
void callFunction();
int countGlobal = 0;
int main() {
    callFunction();
    
    
    
    return 0;
}

void testGlobalLocalVar() {
    countGlobal++;
    static int countStaticLocal = 0;
    countStaticLocal++;
    cout << "Функция вызвана(глобальная переменная): " << countGlobal << " раз" << endl;
    cout << "Функция вызвана(статическая переменная): " << countStaticLocal << " раз" << endl;
}

void callFunction() {
    for(int i = 0; i < 10; i++) {
        testGlobalLocalVar();
    }
}


