//
//  main.cpp
//  StaticLocalVar
//
//  Created by Maksim Grischenko on 25.04.2023.
//

#include <iostream>
using namespace std;
//статические локальные переменные сохраняются в памяти на все время выполнения программы с момента вызова функции, в которой они объявлены.
//Используются в случаях, когда необходимо сохранить значение переменной, после того, как выполнение функции будет завершено.

float getAverage(float);
int main() {
    float data = 1, avg;
    
    while(data != 0) {
        cout << "Введите число: ";
        cin >> data;
        avg = getAverage(data);
        
        cout << "Среднее значение равно: " << avg << endl;
    }
    return 0;
}

float getAverage(float newData) {
    static float total = 0;
    static int count = 0;
    count++;
    total += newData;
    return total/count;
    
}
