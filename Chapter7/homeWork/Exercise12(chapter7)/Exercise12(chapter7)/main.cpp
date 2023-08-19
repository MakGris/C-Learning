//
//  main.cpp
//  Exercise12(chapter7)
//
//  Created by Maksim Grischenko on 19.08.2023.
//

#include <iostream>
#include <math.h>
#include <iomanip>
#include <string>
#include <cstring>
#include <sstream>
using namespace std;

class bMoney {
private:
    long double money;
public:
    bMoney() {}
    bMoney(char s [])
    {
        putMoney(s);
    }
    void putMoney(char amount[]) {
        const int max = 26;
        char amount2 [max];
        for(int i = 0, j = 0; i < max; i++) {
            if(amount[i] != ',' && amount[i] != '$' ) {
                amount2[j++] = amount[i];
            } else {
                amount2[j] = amount[i];
            }
        }
        //        amount2[max] = '\0';
        money = atof(amount2);
    }
    void addMoney(bMoney m1, bMoney m2) {
        money = m1.money + m2.money;
        if(money > 9999999999999990.00) {
            cout << "Получить результат сложения невозможно (слишком большое число)." << endl;
        }
    }
    void getMoney() {
        if (money <= 9999999999999990.00) {
            ostringstream strs;
            strs << setiosflags(ios::fixed) << setiosflags(ios::showpoint) <<setprecision(2) << money;
            string str = strs.str();
            str.insert(0, "$");
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
            cout << charAmount;
        } else {
            cout << "Введено слишком большое число!" << endl;
        }
    }
};

int main() {
    const int max = 26;
    bMoney money1;
    bMoney money2;
    bMoney sum;
    char amount[max];
    char amount2[max];
    cout << "Введите первую денежную сумму:";
    cin >> amount;
        money1.putMoney(amount);
    cout << "Введите вторую денежную сумму:";
    cin >> amount2;
        money2.putMoney(amount2);
    sum.addMoney(money1, money2);
    cout << "Сумма равна: ";
    sum.getMoney();
    cout << endl;
    
    return 0;
}


