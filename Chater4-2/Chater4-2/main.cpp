//
//  main.cpp
//  Chater4-2
//
//  Created by Maksim Grischenko on 27.03.2023.
//

#include <iostream>
#include <iomanip>

using namespace std;

struct Time {
    int hrs;
    int mins;
    int secs;
};
enum Players {B1, B2, SS, B3, RF, CF, LF, P, C};

enum Speeds {obsolete = 78, single = 45, album = 33};

int main() {
    
    Time time2;
    time2.hrs = 11;
    
    Time time1 = {11, 10, 59};
    Players joe = LF;
    Players tom = P;
    
    return 0;
}
