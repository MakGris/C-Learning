//
//  main.cpp
//  structReference
//
//  Created by Maksim Grischenko on 18.04.2023.
//

#include <iostream>
using namespace std;

struct Distance {
    int feet;
    float inches;
};

void scale(Distance&, float);
void displayDistance(Distance);

int main() {
    
    Distance distanceOne = { 12, 6.5 };
    Distance distanceTwo = { 10, 5.5 };
    cout << "Distance one = "; displayDistance(distanceOne);
    cout << "\n Distance two = "; displayDistance(distanceTwo);
    scale(distanceOne, 0.5);
    scale(distanceTwo, 0.25);
    cout << "\nDistance one (after scaling) = "; displayDistance(distanceOne);
    cout << "\nDistance two (after scaling) = "; displayDistance(distanceTwo);
    cout << endl;
    return 0;
}

void scale(Distance& distance, float scaleFactor) {
    float inches = (distance.feet * 12 + distance.inches) * scaleFactor;
    distance.feet = static_cast<int>(inches) / 12;
    distance.inches = inches - distance.feet * 12;
    
}

void displayDistance(Distance distance) {
    cout << distance.feet <<"'-" << distance.inches << "\"";
}
