//
//  main.cpp
//  Exercise7(chapter7)
//
//  Created by Maksim Grischenko on 21.07.2023.
//

#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
double convertCharToDouble(char[]);
int main() {
    const int max = 22;
    char amount [] = "$1,890,123.99";
    char amount2[max];
    
    for(int i = 0; i < max; i++) {
        amount2[i] = amount[i];
        
    }
    
    for(int i = 0; i < max; i++) {
        if (amount2[i] == ',' || amount2[i] == '$' ) {
            for(int j = i; j < max; j++) {
                char temp = amount2[j];
                amount2[j] = amount2[j+1];
                amount2[j + 1] = temp;
                if (amount2[j+1] == ',' || amount2[j+1] == '$') {
                    amount2[j+1] = '\0';
                }
                
            }
        }
    }
    double money = atof(amount2);
    cout << money;
    
    cout << amount2 << endl;
    return 0;
}

