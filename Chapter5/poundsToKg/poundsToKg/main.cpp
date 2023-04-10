//
//  main.cpp
//  poundsToKg
//
//  Created by Maksim Grischenko on 10.04.2023.
//

#include <iostream>
using namespace std;
//Вариант 1
//float lbToKg(float);
//
//int main() {
//    float lbs, kgs;
//    cout << "Введите вес в фунтах: ";
//    cin >> lbs;
//    kgs = lbToKg(lbs);
//    cout << "Вес в килограммах равен: " << kgs << endl;
//    return 0;
//}
//float lbToKg(float pounds) {
//    float kilograms = 0.453592 * pounds;
//    return kilograms;
//}
//Вариант 2
float lbToKg(float);

int main() {
    float lbs, kgs;
    cout << "Введите вес в фунтах: ";
    cin >> lbs;
    cout << "Вес в килограммах равен: " << lbToKg(lbs) << endl;
    return 0;
}
float lbToKg(float pounds) {
    return (0.453592 * pounds);
}
