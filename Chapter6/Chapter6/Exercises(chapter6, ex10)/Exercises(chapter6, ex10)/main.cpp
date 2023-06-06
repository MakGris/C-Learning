//
//  main.cpp
//  Exercises(chapter6, ex10)
//
//  Created by Maksim Grischenko on 06.06.2023.
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

class Ship {
private:
    int serialNumber;
    Angle coordinate1;
    Angle coordinate2;
    static int count;
public:
    Ship() : serialNumber(count), coordinate1(0, 0, 'N'), coordinate2(0, 0, 'W') {
        count++;
    }
    void setShip() {
        cout << "Введите данные о месторасположении корабля (первая координата): " << endl;
        coordinate1.setAngle();
        cout << "Введите данные о месторасположении корабля (вторая координата): " << endl;
        coordinate2.setAngle();
    }
    
    void displayShip() {
        cout << "Порядковый номер корабля: " << serialNumber << endl;
        cout << "Координаты первой точки: ";
        coordinate1.displayAngle();
        cout << "Координаты второй точки: ";
        coordinate2.displayAngle();
    }
};
int Ship::count = 1;
int main() {
    Ship ship1, ship2, ship3;
    
    ship1.setShip();
    ship2.setShip();
    ship3.setShip();
    
    ship1.displayShip();
    ship2.displayShip();
    ship3.displayShip();
    return 0;
}
