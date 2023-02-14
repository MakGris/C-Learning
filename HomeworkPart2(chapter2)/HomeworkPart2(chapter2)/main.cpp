//
//  main.cpp
//  HomeworkPart2(chapter2)
//
//  Created by Maksim Grischenko on 14.02.2023.
//

#include <iostream>
#include <iomanip>
#include <ctype.h>
using namespace::std;

int main() {
//    Первое задание
//    float gallons;
//    cout << "Пожалуйста введите количество галлонов: ";
//    cin >> gallons;
//    float feet = gallons * 7.481;
//    cout << "В " << gallons << " галлонах содержится: " << feet << " футов" << endl;
    
//   Второе задание
//    int pop1 = 135, pop2 = 7290, pop3 = 11300, pop4 = 16200;
//    int year = 1990;
//    cout << setw(9) << year << setw(12) << pop1 << endl << setw(9) <<
//    ++year << setw(12) << pop2 << endl << setw(9) << ++year << setw(12) <<
//    pop3 << endl << setw(9) << ++year << setw(12) << pop4 << endl;
    
//    Третье задание
//    int x = 10;
//    cout << x << endl;
//    x += 10;
//    cout << x << endl;
//    cout << --x << endl;
    
    //    Четвертое задание
//    cout << "\tЯ считал слонов и в нечет и в чет,\n\
//    И все-таки я не уснул,\n\
//    И тут явился ко мне мой черт,\n\
//    И уселся верхом на стул.\n\n\
//    И сказал мой черт: — Ну, как, старина,\n\
//    Ну, как же мы порешим?\n\
//    Подпишем союз, и айда в стремена,\n\
//    И еще чуток погрешим!\n" ;
    
//    Пятое задание
//    char symbol;
//    cout << "Введите строчную или заглавную букву: ";
//    cin >> symbol;
//    int resultOfSlower = islower(symbol);
//    cout << resultOfSlower << endl;
    
//    Шестое задание
    
    int dollars;
    cout << "Введите количество долларов: ";
    cin >> dollars;
    float funts = dollars * 1.487;
    float franks = dollars * 0.172;
    float deutschMarks = dollars * 0.584;
    float yens = dollars * 0.00955;
    cout << "Фунты стерлингов: " << funts << endl << "Франки: " << franks
    << endl << "Немецкие марки: " << deutschMarks << endl <<
    "Японские йены: " << yens << endl;
    
    return 0;
    

}
