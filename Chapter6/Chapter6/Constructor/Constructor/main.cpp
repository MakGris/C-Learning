//
//  main.cpp
//  Constructor
//
//  Created by Maksim Grischenko on 16.05.2023.
//

#include <iostream>

using namespace std;

class Counter {
    
private:
    unsigned int count;
    
public:
    Counter(): count(0) {cout << "Конструктор сработал\n";} //инициализация счетчика нулем по умолчанию
    ~Counter() {cout << "Деструктор сработал\n";} //Деинициализация
    
    void incrementCount() {
        count++;
    }
    
    int getCount() {
        return count;
    }
    
};

int main() {
    Counter c1, c2;
    cout << "c1 = " <<c1.getCount() << endl;
    cout << "c2 = " <<c2.getCount() << endl;
    c1.incrementCount();
    c2.incrementCount();
    c2.incrementCount();
    cout << "c1 = " <<c1.getCount() << endl;
    cout << "c2 = " <<c2.getCount() << endl;
    return 0;
}
