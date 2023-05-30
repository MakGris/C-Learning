//
//  main.cpp
//  Exercises(chapter6, ex2)
//
//  Created by Maksim Grischenko on 30.05.2023.
//

#include <iostream>
using namespace std;

class toolBooth {
private:
    unsigned int countCar;
    double revenue;
    
public:
    toolBooth() : countCar(0), revenue(0.0) {}
    
    void payingCar() {
        countCar ++;
        revenue += 0.5;
    }
    
    void noPayCar() {
        countCar ++;
    }
    
    void display() const {
        cout << "Car count: " << countCar << endl;
        cout << "Revenue: " << revenue << endl;
    }
};


int main() {
    toolBooth booth;
    char value;
    do {
        cout << "Нажмите 1, если водитель оплатил проезд, нажмите 2, если не оплатил (для выхода из программы нажмите 3): " ;
        cin >> value;

        switch (value) {
            case '1':
                booth.payingCar();
                break;
            case '2':
                booth.noPayCar();
                break;
            case '3':
                booth.display();
                break;

        }
    } while(value != '3');
    
    return 0;
}
