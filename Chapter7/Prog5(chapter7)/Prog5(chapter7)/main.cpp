//
//  main.cpp
//  Prog5(chapter7)
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
//    Инициализация массива вручную
    double sales [districts] [months] = {
        {1432.07, 234.50, 654.01},
        {322.00, 13838.32, 17589.88},
        {9328.34, 934.00, 4492.30},
        {12838.29, 2332.63, 32.93},
    };

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
