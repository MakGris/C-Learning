//
//  main.cpp
//  3
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
    Counter(int c) : count(c) {}
    unsigned int getCount() {
        return count;
    }
    //   Еще один способ сделать возможным присваивание полученного значения другой переменной
    Counter operator++() {
        return Counter(++count);
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
