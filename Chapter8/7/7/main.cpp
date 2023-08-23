//
//  main.cpp
//  7
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
    
    bool operator< (Distance d2) {
        float dis1 = feet + inches / 12;
        float dis2 = d2.feet + d2.inches / 12;
        return (dis1 < dis2) ? true : false;
    }
};
int main() {
    Distance d1;
    d1.getDistance();
    Distance d2(6, 2.5);
    if(d1 < d2) {
        cout << "\nDistance1 меньше, чем Distance2" << endl;
    } else {
        cout << "\nDistance1 больше(равно) Distance2" << endl;
    }
    return 0;
}
