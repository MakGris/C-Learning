//
//  main.cpp
//  ConstClassObject
//
//  Created by Maksim Grischenko on 24.05.2023.
//

#include <iostream>
using namespace std;

class Distance {
private:
    int feet;
    float inches;
    
public:
    Distance(int ft, float in) : feet(ft), inches(in) {}
    
    void getDistance() {
        cout << "Введите число футов: "; cin >> feet;
        cout << "Введите число дюймов: "; cin >> inches;
    }
    
    void showDistance() const {
        cout << feet << "'-" << inches << "\"" << endl;
    }
};


int main() {
/*
При объявлении const объекта класса, он становится недоступным для изменения.
 Это означает, что для такого объекта могут быть вызваны только константные
 методы, поскольку только они гарантируют, что объект не будет изменен.
 */
    const Distance football(300,0);
//    football.getDistance; будет ошибка, т.к. метод неконстантный
    football.showDistance();
    return 0;
}
