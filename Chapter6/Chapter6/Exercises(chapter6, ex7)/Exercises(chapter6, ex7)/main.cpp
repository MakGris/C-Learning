//
//  main.cpp
//  Exercises(chapter6, ex7)
//
//  Created by Maksim Grischenko on 30.05.2023.
//

#include <iostream>
using namespace std;

class Angle {
private:
    int degree;
    float minutes;
    char  direction;
public:
    Angle(int dgr, float min, char dir) : degree(dgr), minutes(min), direction(dir)
    {}
    
    void setAngle() {
        cout << "Координаты точки: " << endl;
        cout << "Введите количество градусов: ";
        cin >> degree;
        cout << "Введите количество минут: ";
        cin >> minutes;
        cout << "Введите направление (N/S/E/W): ";
        cin >> direction;
    }
    
    void displayAngle() {
        cout << degree <<"\xC2\xB0" << minutes << '\'' << direction << endl;
    }
};

int main() {
    char repeat;
    Angle point1(120,34.5,'S');
    point1.displayAngle();
    
    do {
        point1.setAngle();
        point1.displayAngle();
        cout << "Хотите ввести координаты еще раз(y/n)?: ";
        cin >> repeat;
    }while(repeat != 'n');
    
    return 0;
}
