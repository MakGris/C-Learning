//
//  main.cpp
//  Prog4(Chapter7)
//
//  Created by Maksim Grischenko on 21.06.2023.
//

#include <iostream>
#include <iomanip>
using namespace std;

const int districts = 4;
const int months = 3;
int main() {
    int d, m;
    double sales [districts] [months];

    for (d = 0; d < districts; d++) {
        for (m = 0; m < months; m++) {
            cout << "Введите объем продаж для отдела " << d + 1;
            cout << ", за месяц " << m + 1 << ": ";
            cin >> sales[d] [m];
        }
    }
    cout << "\n\n";
    cout << setw(33) << "Месяц\n";
    cout << setw(15) << "1" << setw(10) << "2" << setw(10) << "3";
    
    for (d = 0; d < districts; d++) {
        cout << "\n Отдел " << d + 1;
        for (m = 0; m < months; m++) {
            cout << setiosflags(ios::fixed)
                 << setiosflags(ios::showpoint)
                 << setprecision(2)
                 << setw(10)
                 << sales [d] [m];
        }
    }
    cout << endl;
    return 0;
}
