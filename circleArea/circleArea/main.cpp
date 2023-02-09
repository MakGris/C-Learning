//
//  main.cpp
//  circleArea
//
//  Created by Maksim Grischenko on 09.02.2023.
//

#include <iostream>
using namespace::std;

int main(int argc, const char * argv[]) {
    float radius;
    float const pi = 3.14159F;
    cout <<"Введите радиус окружности: ";
    cin >> radius;
    float area = pi * radius * radius;
    cout << "Площадь окружности равна: " << area << endl;
    return 0;
}
