//
//  main.cpp
//  fahrenheit
//
//  Created by Maksim Grischenko on 09.02.2023.
//

#include <iostream>
using namespace::std;

int main() {
    int fahrenheitTemp;
    cout << "Введите температуру по Фаренгейту: ";
    cin >> fahrenheitTemp;
    int celsiusTemp = (fahrenheitTemp - 32) * 5 / 9;
    std::cout << "Температура по Цельсию равна " << celsiusTemp << '\n';
    return 0;
}
