//
//  main.cpp
//  Prog7(Chapter7)
//
//  Created by Maksim Grischenko on 21.06.2023.
//

#include <iostream>
using namespace std;

struct Part {
    int modelNumber;
    int partNumber;
    float cost;
};

int arraySize = 4;
int main() {
    int n;
    Part parts [arraySize];
    
    for (n = 0; n< arraySize; n++) {
        cout << "Введите номер модели: ";
        cin >> parts[n].modelNumber;
        cout << "Введите номер запчасти: ";
        cin >> parts[n].partNumber;
        cout << "Введите стоимость: ";
        cin >> parts[n].cost;
    }
    cout << endl;
    for (n = 0; n < arraySize; n++) {
        cout << "Модель " << parts[n].modelNumber
             << " Часть " << parts[n].partNumber
             << " Стоимость " << parts[n].cost
             << endl;
    }
    
    
    return 0;
}
