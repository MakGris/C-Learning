//
//  main.cpp
//  Exercise1(Chapter5)
//
//  Created by Maksim Grischenko on 03.05.2023.
//

#include <iostream>
using namespace std;
float circArea(float);

int main() {
    float radius;
    cout <<"Введите радиус окружности: ";
    cin >> radius;
//    float area = circArea(radius);
    cout << "Площадь окружности равна: " << circArea(radius) << endl;
    return 0;
}

float circArea(float radius) {
    float const pi = 3.14159F;
    float area = pi * radius * radius;
    return  area;
}
