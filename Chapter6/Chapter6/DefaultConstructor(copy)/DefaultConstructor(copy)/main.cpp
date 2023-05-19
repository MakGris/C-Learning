//
//  main.cpp
//  DefaultConstructor(copy)
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
    void addDist(Distance, Distance);
};

void Distance::addDist(Distance d2, Distance d3) {
    
    inches = d2.inches + d3.inches;
    feet = 0;
    
    if (inches >= 12) {
        inches -= 12;
        feet ++;
    }
    
    feet += d2.feet + d3.feet;
}

int main() {
    Distance dist1(11, 6.25);
    
    /*
     Используется конструктор копирования по умолчанию, для его использования
     не нужно создавать специальный конструктор, ниже представлены два примера
     такой инициализации, () и =.
     */
    Distance dist2(dist1);
    Distance dist3 = dist1;
    
    
    
    cout << "dist1: "; dist1.showDistance();
    cout << "dist2: "; dist2.showDistance();
    cout << "dist3: "; dist3.showDistance();
    return 0;
}
