//
//  main.cpp
//  linesin
//
//  Created by Maksim Grischenko on 29.06.2023.
//

#include <iostream>
using namespace std;


/*
 Введение нескольких строк. Метод cin.get может принять третий аргумент, который
 заменит символ окончания ввода строки по умаолчанию (\n) на любой другой, что позволит
 нам поместить в одну строку например четверостишие
 */
int main() {
    const int size = 2000;
    char string [size];
    
    cout << "Введите строку: \n";
    cin.get(string, size, '$');
    
    cout << string;
    
    
    
    return 0;
}
