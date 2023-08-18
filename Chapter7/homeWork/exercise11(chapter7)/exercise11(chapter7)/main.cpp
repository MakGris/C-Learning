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
#include <cstring>
#include <sstream>
using namespace std;
long double convertCharToDouble (char[]);
void convertDoubleToChar(long double);

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
    
    long double sum = 9999999999999990.00;
    convertDoubleToChar(sum);
    
    return 0;
}

long double convertCharToDouble(char amount[]) {
    const int max = 26;
    char amount2 [max];
    for(int i = 0, j = 0; i < max; i++) {
        if(amount[i] != ',' && amount[i] != '$' ) {
            amount2[j++] = amount[i];
        } else {
            amount2[j] = amount[i];
        }
    }
    long double money = atof(amount2);
    return money;
}


void convertDoubleToChar(long double amount) {
    if (amount <= 9999999999999990.00) {
        ostringstream strs;
        strs << setiosflags(ios::fixed) << setiosflags(ios::showpoint) <<setprecision(2) << amount;
        string str = strs.str();
        str.insert(0, "$");
        cout << str << endl;
        int n = 0;
        for (int i = str.find('.') - 1; i > 0; i--) {
            if (++n % 3 == 0 && i != 1) {
                str.insert(i, ",");
            }
        }
        int sizeOfString = str.length();
        char charAmount[sizeOfString];
        str.copy(charAmount, sizeOfString);
        charAmount[sizeOfString] = '\0';
        cout << charAmount << endl;
    } else {
        cout << "Введено слишком большое число!" << endl;
    }
    

    }
  





