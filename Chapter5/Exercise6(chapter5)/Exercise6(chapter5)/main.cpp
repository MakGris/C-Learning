//
//  main.cpp
//  Exercise6(chapter5)
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

long timeToSecs(Time);
Time secsToTime(long);

int main() {
    Time time1, time2, resultTime;
    char colon = ':';
    cout << "Введите первое время (hh:min:sec): ";
    cin >> time1.hours >> colon >> time1.minutes >> colon >> time1.seconds;
    long totalsecs1 = timeToSecs(time1);
    cout << "Введите второе время (hh:min:sec): ";
    cin >> time2.hours >> colon >> time2.minutes >> colon >> time2.seconds;
    long totalSecs2 = timeToSecs(time2);
    long sumSecs = totalsecs1 + totalSecs2;
    resultTime = secsToTime(sumSecs);
    cout << "Общее время: " << resultTime.hours << colon << resultTime.minutes << colon << resultTime.seconds << endl;
    return 0;
}

long timeToSecs(Time time) {
    long secs = time.hours * 3600 + time.minutes * 60 + time.seconds;
    return secs;
}

Time secsToTime(long secs) {
    Time time;
    time.hours = secs / 3600;
    time.minutes = (secs - (time.hours * 3600)) / 60;
    time.seconds = secs - ((time.hours * 3600) + (time.minutes * 60));
    return time;
}

/*
Упражнение 11
char colon = ':';
cout << "Введите первое время (hh:min:sec): ";
cin >> time1.hours >> colon >> time1.minutes >> colon >> time1.seconds;
long totalsecs1 = time1.hours * 3600 + time1.minutes * 60 + time1.seconds;
cout << "Введите второе время (hh:min:sec): ";
cin >> time2.hours >> colon >> time2.minutes >> colon >> time2.seconds;
long totalsecs2 = time2.hours * 3600 + time2.minutes * 60 + time2.seconds;
long sumSecs = totalsecs1 + totalsecs2;
resultTime.hours = sumSecs / 3600;
resultTime.minutes = (sumSecs - (resultTime.hours * 3600)) / 60;
resultTime.seconds = sumSecs - ((resultTime.hours * 3600) + (resultTime.minutes * 60));
cout << "Общее время: " << resultTime.hours << colon << resultTime.minutes << colon << resultTime.seconds << endl;
*/
