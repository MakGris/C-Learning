//
//  main.cpp
//  Exercise4(chapter5)
//
//  Created by Maksim Grischenko on 03.05.2023.
//

#include <iostream>
using namespace std;

struct Distance {
    int feets;
    float inches;
};
Distance distanceComparison(Distance, Distance);
void displayDistance(Distance);
int main() {
    Distance distance1, distance2, resultOfCompare;
    cout << "Введите число футов: ";
    cin >> distance1.feets;
    cout << "Введите число дюймов: ";
    cin >> distance1.inches;
    cout << endl;
    cout << "Введите число футов: ";
    cin >> distance2.feets;
    cout << "Введите число дюймов: ";
    cin >> distance2.inches;
    resultOfCompare = distanceComparison(distance1, distance2);
    displayDistance(resultOfCompare);
    
    
    
    return 0;
}

Distance distanceComparison(Distance d1, Distance d2) {
    Distance result;
    
    if (d1.feets > d2.feets && d1.feets != d2.feets) {
        result = d1;
    } else if (d1.feets == d2.feets && d1.inches > d2.inches) {
        result = d1;
    } else {
        result = d2;
    }
    
    return  result;
}

void displayDistance(Distance distance) {
    cout << distance.feets << "\'-" << distance.inches << "\"" << endl;
}

