//
//  main.cpp
//  TableArg
//
//  Created by Maksim Grischenko on 06.04.2023.
//

#include <iostream>
using namespace std;
void repeatChar(char, int);

int main() {
    repeatChar('-', 43);
    cout << "Тип данных     Диапазон" << endl;
    repeatChar('=', 23);
    cout << "char           -128...127" << endl
    << "short          -32,768...32,767" << endl
    << "int            Системно-зависимый" << endl
    << "long           -2.147.483.648...2.147.483.647" << endl;
    repeatChar('-', 43);
    return 0;
}

void repeatChar(char ch, int n) {
    for(int j = 0; j < n; j++) {
        cout << ch;
    }
    cout << endl;
}
