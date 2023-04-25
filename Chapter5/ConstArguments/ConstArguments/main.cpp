//
//  main.cpp
//  ConstArguments
//
//  Created by Maksim Grischenko on 25.04.2023.
//

#include <iostream>
//передача аргумента по ссылке в качестве константы, не дает дает изменять значение переменной, которая передана по ссылке с ключевым словом const



void aFunc(int& a, const int& b);
int main() {
    int alpha = 7;
    int beta = 11;
    aFunc(alpha, beta);
    return 0;
}

void aFunc(int& a, const int& b) {
    a = 107;
    b = 111;
}

