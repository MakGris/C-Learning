//
//  main.cpp
//  2
//
//  Created by Maksim Grischenko on 22.08.2023.
//

#include <iostream>
using namespace std;

class Counter {
private:
    unsigned int count;
public:
    Counter(): count(0) {}
    unsigned int getCount() {
        return count;
    }
    //   Переопределяем унарную операцию под кастомный тип данных и делаем возможным присваивание полученного значения другой переменной
    Counter operator++() {
        ++count;
        Counter temp;
        temp.count = count;
        return temp;
    }
};
int main() {
    Counter c1, c2;
    
    cout << "c1 = " << c1.getCount() << endl;
    cout << "c2 = " << c2.getCount() << endl;
    ++c1;
    c2 = ++c1;
    cout << "c1 = " << c1.getCount() << endl;
    cout << "c2 = " << c2.getCount() << endl;
    
    
    return 0;
}

