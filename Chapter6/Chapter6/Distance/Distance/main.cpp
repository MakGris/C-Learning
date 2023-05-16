//
//  main.cpp
//  Distance
//
//  Created by Maksim Grischenko on 16.05.2023.
//

#include <iostream>
using namespace std;

class Distance {
private:
    int feet;
    float inches;
    
public:
    void setDistance(int ft, float in) {
        feet = ft;
        inches = in;
    }
    
    void getDistance() {
        cout << "Введите число футов: "; cin >> feet;
        cout << "Введите число дюймов: "; cin >> inches;
    }
    
    void showDistance() {
        cout << feet << "'-" << inches << "\"" << endl;
    }
    
};

int main() {
    
    Distance dist1, dist2;
    dist1.setDistance(5, 11.5);
    cout << "Dist1 = ";
    dist1.showDistance();
    dist2.getDistance();
    cout << "Dist2 = ";
    dist2.showDistance();
    return 0;
}
