//
//  main.cpp
//  stringin4
//
//  Created by Maksim Grischenko on 29.06.2023.
//

#include <iostream>
using namespace std;

/*
 Операция >> считает пробелы за нули, для того, чтобы пробелы отображались,
 используем метод cin.get()
 */

int main() {

    const int size = 80;
    char string [size];
    
    cout << "Введите строку с пробелами: ";
    cin.get(string, size);
    
    cout << string << endl;

    return 0;
}
