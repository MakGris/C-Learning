//
//  main.cpp
//  Prog3(chapter7)
//
//  Created by Maksim Grischenko on 15.06.2023.
//

#include <iostream>
using namespace std;
int main() {
    int month, day, totalDays;
    int daysPerMonth [12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    
    cout << "Введите месяц(от 1 до 12): ";
    cin >> month;
    cout << "Введите день(от 1 до 31): ";
    cin >> day;
    totalDays = day;
    
    for (int j = 0; j < month - 1; j++) {
        totalDays += daysPerMonth [j];
    }
    
    cout << "Общее число дней с начала года: " << totalDays << endl;
    return 0;
}
