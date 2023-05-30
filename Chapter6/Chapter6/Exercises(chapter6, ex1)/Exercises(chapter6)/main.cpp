//
//  main.cpp
//  Exercises(chapter6)
//
//  Created by Maksim Grischenko on 30.05.2023.
//

#include <iostream>
using namespace std;


class Int {
private:
    int number;
    
public:
    Int(int num) : number(num) {}
    Int() : number(0) {}
    int getInt() {return number;}
    void sumOfTwoNumbers(Int number1, Int number2) {
        number = number1.number + number2.number;
    }
    
};

int main() {
    Int number1(5); //можно инициализировать так
    Int number2 = {4}; // а можно так
    Int number3;
    
    number3.sumOfTwoNumbers(number1, number2);
    cout << number3.getInt() << endl;
    
    return 0;
}
