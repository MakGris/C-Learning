//
//  main.cpp
//  Exercises(chapter6, ex3)
//
//  Created by Maksim Grischenko on 30.05.2023.
//

#include <iostream>
using namespace std;

class Time {
private:
    int hours;
    int minutes;
    int seconds;
    
public:
    Time() : hours(0), minutes(0), seconds(0) {}
    Time(int hrs, int min, int sec) : hours(hrs), minutes(min), seconds(sec) {}
    
    void display() const {
        cout << hours << ":" << minutes << ":" << seconds << endl;
    }
    
    void sumTime(Time time1, Time time2) {
        seconds = time1.seconds + time2.seconds;
        if(seconds >= 60) {
            minutes += 1;
            seconds -= 60;
        }
        
        minutes += time1.minutes + time2.minutes;
        if(minutes >= 60) {
            hours += 1;
            minutes -= 60;
        }
        
        hours += time1.hours + time2.hours;
    }
    
};

int main() {
    const Time time1(12,35,45);
    const Time time2(11,40,45);
    Time time3;
    
    time3.sumTime(time1, time2);
    time3.display();
    return 0;
}
