//
//  main.cpp
//  exercise11(chapter5)
//
//  Created by Maksim Grischenko on 05.05.2023.
//

#include <iostream>
using namespace std;

struct Sterling {
    int pounds;
    float shillings;
    int pence;
};

Sterling getSterlings(int pounds, int shillings, int pence);
Sterling addSterlings(Sterling sum1, Sterling sum2);
void presentSterlings(Sterling value);
int main() {
    Sterling sum1, sum2, result;
    int pounds1, shillings1, pence1, pounds2, shillings2, pence2;
    cout << "Введите первое число фунтов: ";
    cin >> pounds1;
    cout << "Введите первое число шиллингов: ";
    cin >> shillings1;
    do {
        if (shillings1 > 19) {
            cout << "Введено некорректное число шиллингов, повторите ввод: ";
            cin >> shillings1;
        }
    } while (shillings1 > 19);
    cout << "Введите первое число пенсов: ";
    cin >> pence1;
    do {
        if (pence1 > 11) {
            cout << "Введено некорректное число пенсов, повторите ввод: ";
            cin >> pence1;
        }
    } while (pence1 > 11);
    sum1 = getSterlings(pounds1, shillings1, pence1);
    
    cout << "Введите второе число фунтов: ";
    cin >> pounds2;
    cout << "Введите второе число шиллингов: ";
    cin >> shillings2;
    do {
        if (shillings2 > 19) {
            cout << "Введено некорректное число шиллингов, повторите ввод: ";
            cin >> shillings2;
        }
    } while (shillings2 > 19);
    cout << "Введите второе число пенсов: ";
    cin >> pence2;
    do {
        if (pence2 > 11) {
            cout << "Введено некорректное число пенсов, повторите ввод: ";
            cin >> pence2;
        }
    } while (pence2 > 11);
    sum2 = getSterlings(pounds2, shillings2, pence2);
    
    result = addSterlings(sum1, sum2);
    
    presentSterlings(result);
    
    return 0;
}

Sterling getSterlings(int pounds, int shillings, int pence) {
    Sterling sterlings;
    sterlings.pounds = pounds;
    sterlings.shillings = shillings;
    sterlings.pence = pence;
    
    return sterlings;
}

Sterling addSterlings(Sterling sum1, Sterling sum2) {
    Sterling result = {0,0,0};
    
    result.pounds = sum1.pounds + sum2.pounds;
    
    
    result.shillings = sum1.shillings + sum2.shillings;
    if (result.shillings > 19) {
        result.pounds += 1;
        result.shillings -= 20;
    }
    
    result.pence = sum1.pence + sum2.pence;
    if (result.pence > 11) {
        result.shillings += 1;
        result.pence -= 12;
    }
    return result;
}

void presentSterlings(Sterling value) {
    cout << "Cумма в старой форме записи: " << "£" << value.pounds << '.' <<  value.shillings << '.' << value.pence << endl;
}
