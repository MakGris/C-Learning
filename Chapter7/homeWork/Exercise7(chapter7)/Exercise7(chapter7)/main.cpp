//
//  main.cpp
//  Exercise7(chapter7)
//
//  Created by Maksim Grischenko on 21.07.2023.
//

#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
int main() {
    const int max = 21;
    char amount [21] = "1,234,567,890,123.99";
    char amount2 [max];
    
    for(int i = 0, j = 0; i < max; i++) {
        if(amount[i] != ',') {
            amount2[j++] = amount[i];
        } else {
            amount2[j] = amount[i];
            }
        }
    double money = atof(amount2);
    cout << setprecision(15) << money << endl;
    
    

    return 0;
}

