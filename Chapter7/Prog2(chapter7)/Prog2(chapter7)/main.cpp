//
//  main.cpp
//  Prog2(chapter7)
//
//  Created by Maksim Grischenko on 15.06.2023.
//

#include <iostream>
using namespace std;

int main() {
    const int size = 6;
    double sales [size];
    double total = 0;
    
    cout << "Введите объем продаж по каждому из шести дней: \n";
    
    for(int j = 0; j < size; j++) {
        cin >> sales [j];
        total += sales [j];
    }
    
    double average = total / size;
    cout << "Средний объем: " << average << endl;
    
    return 0;
}
