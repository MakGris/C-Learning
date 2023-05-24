//
//  main.cpp
//  ConstantMethods
//
//  Created by Maksim Grischenko on 24.05.2023.
//

#include <iostream>
using namespace std;

//Константные методы отличаются тем, что не могут изменять поля своего класса

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
    
    void showDistance() const {
        cout << feet << "'-" << inches << "\"" << endl;
    }
    Distance addDist(const Distance&)const;
};
/*
 Определение метода класса вне класса. В заголовке функции :: означает, что
 данная функция является методом класса Distance, символ :: называется операцией
 глобального разрешения.
 Данный метод имеет доступ к полям объекта, от имени которого он вызывается,
 т.е. при вызове данного метода у объекта dist3, данный метод имеет доступ к его
 полям feet и inches, и присваивает им вычисляемые значения.
 */
Distance Distance::addDist(const Distance&d2)const {
    
    Distance temp;
//    feet = 0; будет ошибка, т.к. константный метод не может изменять поле класса
//    d2.feet = 0; будет ошибка, т.к. аргумент передан в функцию, как константный
    temp.inches = inches + d2.inches;
    if (temp.inches >= 12) {
            temp.inches -= 12;
            temp.feet ++;
        }
    temp.feet += feet + d2.feet;
    return temp;
}

int main() {
    Distance dist1, dist3;
    Distance dist2(11, 6.25);
    dist1.getDistance();
    dist3 = dist1.addDist(dist2);
    
    cout << "dist1: "; dist1.showDistance();
    cout << "dist2: "; dist2.showDistance();
    cout << "dist3: "; dist3.showDistance();
    return 0;
}
