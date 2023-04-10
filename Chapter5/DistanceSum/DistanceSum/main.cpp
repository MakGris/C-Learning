//
//  main.cpp
//  DistanceSum
//
//  Created by Maksim Grischenko on 10.04.2023.
//

#include <iostream>
using namespace std;

struct Distance {
    int feets;
    float inches;
};

Distance distanceSum(Distance, Distance);
void displayDistance(Distance);

int main() {
    Distance distance1, distance2, resultOfAddition;
    cout << "Введите число футов: ";
    cin >> distance1.feets;
    cout << "Введите число дюймов: ";
    cin >> distance1.inches;
    cout << endl;
    cout << "Введите число футов: ";
    cin >> distance2.feets;
    cout << "Введите число дюймов: ";
    cin >> distance2.inches;
    resultOfAddition = distanceSum(distance1, distance2);
    displayDistance(distance1);
    cout << " + ";
    displayDistance(distance2);
    cout << " = ";
    displayDistance(resultOfAddition);
    cout << endl;
    return 0;
}

Distance distanceSum(Distance d1, Distance d2) {
    Distance sum;
    sum.inches = d1.inches + d2.inches;
    sum.feets = 0;
    if(sum.inches >= 12) {
        sum.feets += 1;
        sum.inches -= 12;
    }
    sum.feets += d1.feets + d2.feets;
    return sum;
}

void displayDistance(Distance distance) {
    cout << distance.feets << "\'-" << distance.inches << "\"";
}
