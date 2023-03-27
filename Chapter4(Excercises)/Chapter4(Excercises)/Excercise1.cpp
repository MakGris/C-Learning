//
//  main.cpp
//  Chapter4(Excercises)
//
//  Created by Maksim Grischenko on 27.03.2023.
//

#include <iostream>
#include <iomanip>
using namespace std;

struct Phone {
    int cityCode;
    int stationNumber;
    int subscriberNumber;
};

Phone myNumber, yourNumber;

struct Point {
    int x;
    int y;
};
Point p1, p2, p3;

struct Distance {
    int feet;
    int inches;
};

struct Volume {
    Distance lenght;
    Distance width;
    Distance height;
};

Volume kitchen;

int main() {
    /*    Упражнение 1
    myNumber = {212, 767, 8900};
    cout << "Введите код города, номер станции и номер абонента:\n";
    cin >> yourNumber.cityCode >> yourNumber.stationNumber >> yourNumber.subscriberNumber;
    cout << "Мой номер " << '(' << myNumber.cityCode << ") " << myNumber.stationNumber
    << '-' << myNumber.subscriberNumber << endl;
    cout << "Ваш номер " << '(' << yourNumber.cityCode << ") " << yourNumber.stationNumber
    << '-' << yourNumber.subscriberNumber << endl;
  */
    /*
     Упражнение 2
     cout << "Введите координаты точки p1: ";
     cin >> p1.x >> p1.y;
     cout << "Введите координаты точки p2: ";
     cin >> p2.x >> p2.y;
     p3 = {p1.x + p2.x, p1.y + p2.y};
     cout << "Координаты точки p1 + p2:\n" << "x: " << p3.x << ", y: " << p3.y << endl;
     */
    kitchen.lenght.feet = 5;
    kitchen.lenght.inches = 15;
    kitchen.width.feet = 2;
    kitchen.width.inches = 5;
    kitchen.height.feet = 1;
    kitchen.height.inches = 2;
    float lenght = kitchen.lenght.feet + kitchen.lenght.inches/12.0;
    float width = kitchen.width.feet + kitchen.width.inches/12.0;
    float height = kitchen.height.feet + kitchen.height.inches/12.0;
    float volume = lenght * width * height;
    cout << "Объем помещения равен: " << volume << endl;
    return 0;
}
