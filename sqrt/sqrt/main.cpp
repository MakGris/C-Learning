//
//  main.cpp
//  sqrt
//
//  Created by Maksim Grischenko on 10.02.2023.
//

#include <iostream>
#include <cmath> //Для использования функции sqrt()
using namespace::std;

int main() {
    double answer, number;
    cout << "Введите число: ";
    cin >> number;
    answer = sqrt(number);
    cout << "Квадратный корень из: " << number << " равен: "
    << answer << endl;
    return 0;
}
