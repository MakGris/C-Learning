//
//  main.cpp
//  4
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
//    Префиксная форма
    Counter operator++() {
        return Counter(++count);
    }
    
/*
 Постфиксная форма, здесь int не играет роли аргумента и не означает целое число,
 это просто сигнал для компилятора использовать постфиксную форму
 */
    Counter operator++(int) {
        return Counter(count++);
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
    c2 = c1++; //В постфиксной форме переменная увеличивается после того, как ее значение было использовано в выражении. Т.е. с2 будет равно с1(2), и после этого с1 увеличится на 1 и станет равен 3.
    cout << "c1 = " << c1.getCount() << endl;
    cout << "c2 = " << c2.getCount() << endl;
    
    return 0;
}
