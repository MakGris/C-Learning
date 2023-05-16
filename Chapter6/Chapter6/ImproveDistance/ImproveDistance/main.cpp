//
//  main.cpp
//  ImproveDistance
//
//  Created by Maksim Grischenko on 16.05.2023.
//

#include <iostream>
using namespace std;

class Distance {
private:
    int feet;
    float inches;
    
public:
    /*
     Если не создавать конструкторы, то поля объекта будут инициализироваться
     случайными значениями (компилятор автоматически встраивает конструктор
     без параметров, который называется "конструктор по умолчанию"), тогда как
     при создании конструктора, мы уверены, что поля проинициализированы
     конкретными значениями(в данном случае нолями)
     */
    Distance() : feet(0), inches(0.0) {}
    
    /*
     Перегруженный конструктор позволяет создавать объекты и тут же
     инициализировать их поля необходимыми нам значениями
     */
    Distance(int ft, float in) : feet(ft), inches(in) {}
    
    void getDistance() {
        cout << "Введите число футов: "; cin >> feet;
        cout << "Введите число дюймов: "; cin >> inches;
    }
    
    void showDistance() {
        cout << feet << "'-" << inches << "\"" << endl;
    }
    /*
     Прототип метода, определение метода осуществляется не в самом классе, а
     ниже по листингу.
     */
    void addDist(Distance, Distance);
};
/*
 Определение метода класса вне класса. В заголовке функции :: означает, что
 данная функция является методом класса Distance, символ :: называется операцией
 глобального разрешения.
 Данный метод имеет доступ к полям объекта, от имени которого он вызывается,
 т.е. при вызове данного метода у объекта dist3, данный метод имеет доступ к его
 полям feet и inches, и присваивает им вычисляемые значения.
 */
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
    Distance dist1, dist3;
    Distance dist2(11, 6.25);
    dist1.getDistance();
    dist3.addDist(dist1, dist2);
    
    cout << "dist1: "; dist1.showDistance();
    cout << "dist2: "; dist2.showDistance();
    cout << "dist3: "; dist3.showDistance();
    return 0;
}
