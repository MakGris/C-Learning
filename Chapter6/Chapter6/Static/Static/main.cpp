//
//  main.cpp
//  Static
//
//  Created by Maksim Grischenko on 24.05.2023.
//

#include <iostream>
using namespace std;

/*
 Статическое поле класса будет одинаковым для всех объектов класса, время
 его жизни совпадает со временем жизни программы, таким образом статическое
 поле существует, даже когда не существует ни одного объекта класса. Используется
 для хранения данных, совместно используемых объектами класса.
 
 */

class Foo {
private:
    static int count;
public:
    Foo() { count++; } //Увеличение счетчика при каждой инициализации нового объекта
    int getCount() {
        return count;
    }
};
int Foo :: count = 0;

int main() {
    Foo foo1, foo2, foo3;
    cout << "Число объектов: " << foo1.getCount() << endl;
    cout << "Число объектов: " << foo2.getCount() << endl;
    cout << "Число объектов: " << foo3.getCount() << endl;
    return 0;
}
