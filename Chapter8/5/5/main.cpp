//
//  main.cpp
//  5
//
//  Created by Maksim Grischenko on 23.08.2023.
//

#include <iostream>
using namespace std;

class Distance {
private:
    int feet;
    float inches;
public:
    Distance(): feet(0), inches(0) {}
    Distance(int ft, float in) : feet(ft), inches(in) {}
    
    void getDistance() {
        cout << "\nВведите футы: ";
        cin >> feet;
        cout << "\nВведите дюймы: ";
        cin >> inches;
    }
    
    void showDistance() {
        cout << feet << "\'-" << inches << '\"' << endl;
    }
    Distance operator+ (Distance d2) const {
        int f = feet + d2.feet;
        float i = inches + d2.inches;
        if(i >= 12.0) {
            i-= 12.0;
            f++;
        }
        return Distance(f,i);
    }
};




int main() {
    Distance d1, d3, d4;
    d1.getDistance();
    Distance d2(11, 6.25);
//    Объект слева вызывает функцию оператора, объект справа передается в функцию в качестве аргумента
    d3 = d1 + d2;
    d4 = d1 + d2 + d3;
    cout << "Dist1: ";
    d1.showDistance();
    cout << endl;
    cout << "Dist2: ";
    d2.showDistance();
    cout << endl;
    cout << "Dist3: ";
    d3.showDistance();
    cout << endl;
    cout << "Dist4: ";
    d4.showDistance();
    cout << endl;
    
    return 0;
}
