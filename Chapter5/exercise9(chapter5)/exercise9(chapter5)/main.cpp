//
//  main.cpp
//  exercise9(chapter5)
//
//  Created by Maksim Grischenko on 05.05.2023.
//

#include <iostream>
using namespace std;
struct Time {
    long hours;
    long minutes;
    long seconds;
};

void swap(Time&, Time&);

int main() {
    Time time1, time2;
    char colon = ':';
    cout << "Введите первое время (hh:min:sec): ";
    cin >> time1.hours >> colon >> time1.minutes >> colon >> time1.seconds;
    cout << "Введите второе время (hh:min:sec): ";
    cin >> time2.hours >> colon >> time2.minutes >> colon >> time2.seconds;
    swap(time1, time2);
    cout << "time1: " << time1.hours << colon << time1.minutes << colon << time1.seconds << endl << "time2: " << time2.hours << colon << time2.minutes << colon << time2.seconds << endl;
    return 0;
}

void swap(Time& time1, Time& time2) {
    Time swap = time1;
    time1 = time2;
    time2 = swap;
}

