//
//  main.cpp
//  stringsArray
//
//  Created by Maksim Grischenko on 29.06.2023.
//

#include <iostream>
using namespace std;


int main() {
    const int days = 7;
    const int size = 10;
/*
 По сути это двумерный массив. Первый индекс - количество дней, второй - количество символов в строке
 
 */
    char daysOfWeek [days][size] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
    
    for (int j = 0; j < days; j++) {
/*
 Хоть мы и работаем с двумерным массивом, второй индекс в данном случае не нужен
 Мы просто получаем доступ к внешнему элементу массива, который в нашем случае
 является массивом символов, которые и выводятся на печать
 */
        cout << daysOfWeek[j] << endl;
    }
    return 0;
    }

