//
//  main.cpp
//  9
//
//  Created by Maksim Grischenko on 24.08.2023.
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
    void operator+= (Distance d2) {
        feet += d2.feet;
        inches += d2.inches;
        if(inches >= 12.0) {
            inches -= 12.0;
            feet++;
        }
    }
};
int main() {
    Distance d1;
    d1.getDistance();
    cout << "Distance1: ";
    d1.showDistance();
    cout << endl;
    Distance d2(11, 6.25);
    cout << "Distance2: ";
    d2.showDistance();
    cout << endl;
    d1 += d2;
    cout << "Distance1 + Distance2 = ";
    d1.showDistance();
    cout << endl;
    return 0;
}
