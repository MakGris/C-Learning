//
//  main.cpp
//  Exercise5(chapter5)
//
//  Created by Maksim Grischenko on 03.05.2023.
//

#include <iostream>
using namespace std;

long hmsToSeconds(int, int, int);

int main() {
    int hours, minutes, seconds;
    long result;
    char repeat;
    do {
        cout << "Введите количество часов: ";
        cin >> hours;
        cout << "Введите количество минут: ";
        cin >> minutes;
        cout << "Введите количество секунд: ";
        cin >> seconds;
        result = hmsToSeconds(hours, minutes, seconds);
        
        cout << "Общее число секунд: " << result << endl;
        
        cout << "Хотите повторить? (y/n)";
        cin >> repeat;
    }
    while (repeat != 'n');
    return 0;
}

long hmsToSeconds(int hours, int minutes, int seconds) {
    long totalSeconds = 0;
    totalSeconds += hours * 3600;
    totalSeconds += minutes * 60;
    totalSeconds += seconds;
    
    return totalSeconds;
    
    
}

