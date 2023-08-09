//
//  main.cpp
//  exercise11(chapter7)
//
//  Created by Maksim Grischenko on 09.08.2023.
//

#include <iostream>
#include <math.h>
#include <iomanip>
#include <string>
#include <sstream>
using namespace std;
double convertCharToDouble (char[]);
void convertDoubleToChar(double);
int main() {
    
//    char amount [22];
//    char repeat;
//    do {
//        cout << "Введите денежную сумму(в виде $1,000,000.000):";
//        cin >> amount;
//        cout << setprecision(15) << "Сумма после конвертации в double: "
//        << convertCharToDouble(amount) << endl;
//        cout << "Повторить ввод?(y/n)?:";
//        cin >> repeat;
//
//
//    }while(repeat != 'n');
    
    double sum = 13214.21;
    convertDoubleToChar(sum);
    return 0;
}
double convertCharToDouble(char amount[]) {
    const int max = 22;
    char amount2 [max];
    for(int i = 0, j = 0; i < max; i++) {
        if(amount[i] != ',' && amount[i] != '$' ) {
            amount2[j++] = amount[i];
        } else {
            amount2[j] = amount[i];
            }
        }
    double money = atof(amount2);
    return money;
}

void convertDoubleToChar(double amount) {
    stringstream strs;
    strs << amount;
    string str = strs.str();
    char charArray[22];
    strcpy(charArray, str.c_str());
    cout << charArray;
//    for(int i = 0; i < 22; i++) {
//        cout << charArray[i];
//    }
    
    
    
}

