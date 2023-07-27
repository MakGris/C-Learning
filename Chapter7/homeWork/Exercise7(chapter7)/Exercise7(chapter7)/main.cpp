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
double convertCharToDouble (char[]);
int main() {
    char amount [22];
    char repeat;
    do {
        cout << "Введите денежную сумму(в виде $1,000,000.000):";
        cin >> amount;
        cout << setprecision(15) << "Сумма после конвертации в double: "
        << convertCharToDouble(amount) << endl;
        cout << "Повторить ввод?(y/n)?:";
        cin >> repeat;
        
        
    }while(repeat != 'n');
    
    
    

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

