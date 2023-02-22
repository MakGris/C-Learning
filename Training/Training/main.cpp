//
//  main.cpp
//  Training
//
//  Created by Maksim Grischenko on 22.02.2023.
//

#include <iostream>
#include <iomanip>
using namespace::std;

int main() {
    //Квадрат
//    int j;
//    for(j = 0; j<=15; j++) {
//        int pow = j * j;
//        cout << "Квадрат j = " << pow << endl;
//
//    }
//
////    Куб
//    for(int j = 1; j <= 15; j++) {
//        cout << setw(4) << j;
//        int cube = j * j * j;
//        cout << setw(6) << cube << endl;
//    }
    
//    в четвертую степень через while
    
//    int number = 1;
//    int pow = 0;
//
//    while (pow < 10000) {
//        pow = number * number * number * number;
//        cout << pow << endl;
//        ++ number;
//    }
    
//    Факториал
    
    int numb = 10;
    int fact = 1;
    
    for(int j = numb; j > 0; j--) {
        fact *= j;
    }
    cout << fact << endl;
    
//    Фибонначи
    unsigned long limit = 9223372036854775807;
    unsigned long next = 0;
    unsigned long last = 1;
    
    while (next < limit / 2) {
        cout << last << endl;
        long sum = next + last;
        next = last;
        last = sum;
    }
    
    
    return 0;
}
