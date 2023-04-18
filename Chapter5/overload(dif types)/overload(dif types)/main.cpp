//
//  main.cpp
//  overload(dif types)
//
//  Created by Maksim Grischenko on 18.04.2023.
//

#include <iostream>
using namespace std;

struct Distance {
    int feet;
    float inches;
};

void displayDistance(Distance);
void displayDistance(float);

int main() {
    Distance distanceOne;
    float distanceTwo;
    cout << "Введите число футов: ";
    cin >> distanceOne.feet;
    cout << "Введите число дюймов: ";
    cin >> distanceOne.inches;
    cout << "Введите длину в дюймах: ";
    cin >> distanceTwo;
    cout << "\nDistance one = "; displayDistance(distanceOne);
    cout << "\nDistance two = "; displayDistance(distanceTwo);
    cout << endl;
    return 0;
}

void displayDistance(Distance distance) {
    cout << distance.feet <<"'-" << distance.inches << "\"";
}

void displayDistance(float distance) {
    int feet = static_cast<int>(distance) / 12;
    float inches = distance - feet * 12;
    cout << feet <<"'-" << inches << "\"";
}

