//
//  main.cpp
//  Distance
//
//  Created by Maksim Grischenko on 10.04.2023.
//

#include <iostream>

using namespace std;

struct Distance {
    int feet;
    float inches;
};
void displayDistance(Distance);

int main() {
    Distance distance1, distance2;
    cout << "Введите число футов: ";
    cin >> distance1.feet;
    cout << "Введите число дюймов: ";
    cin >> distance1.inches;
    cout << "Введите число футов: ";
    cin >> distance2.feet;
    cout << "Введите число дюймов: ";
    cin >> distance2.inches;
    cout << "\nd1 = ";
    displayDistance(distance1);
    cout << "\nd2 = ";
    displayDistance(distance2);
    cout << endl;
    return 0;
}

void displayDistance(Distance distance) {
    cout << distance.feet << "\'-" << distance.inches << "\"";
}
