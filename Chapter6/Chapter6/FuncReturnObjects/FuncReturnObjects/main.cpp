//
//  main.cpp
//  FuncReturnObjects
//
//  Created by Maksim Grischenko on 19.05.2023.
//

#include <iostream>
using namespace std;

class Distance {
private:
    int feet;
    float inches;
    
public:
    Distance() : feet(0), inches(0.0) {}
    Distance(int ft, float in) : feet(ft), inches(in) {}
    
    void getDistance() {
        cout << "Введите число футов: "; cin >> feet;
        cout << "Введите число дюймов: "; cin >> inches;
    }
    
    void showDistance() {
        cout << feet << "'-" << inches << "\"" << endl;
    }
    Distance addDist(Distance);
};

Distance Distance :: addDist(Distance d) {
    Distance temp;
    temp.inches = inches + d.inches;
    
    if (temp.inches >= 12) {
        temp.inches -= 12;
        temp.feet ++;
    }
    
    temp.feet += feet + d.feet;
    
    return temp;
}

int main() {
    Distance dist1(11, 6.25);
    Distance dist2(dist1);
    Distance dist3 = dist1.addDist(dist2);
    
    cout << "dist1: "; dist1.showDistance();
    cout << "dist2: "; dist2.showDistance();
    cout << "dist3: "; dist3.showDistance();
    return 0;
}
