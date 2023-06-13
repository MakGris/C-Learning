//
//  main.cpp
//  HomeworkPart2(chapter2)
//
//  Created by Maksim Grischenko on 14.02.2023.
//

#include <iostream>
#include <iomanip>
#include <ctype.h>
#include <cmath>
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
//        int x = 10;
//        cout << x << endl;
//        x += 10;
//        cout << x << endl;
//        cout << --x << endl;
    
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
    
    //    int dollars;
    //    cout << "Введите количество долларов: ";
    //    cin >> dollars;
    //    float funts = dollars * 1.487;
    //    float franks = dollars * 0.172;
    //    float deutschMarks = dollars * 0.584;
    //    float yens = dollars * 0.00955;
    //    cout << "Фунты стерлингов: " << funts << endl << "Франки: " << franks
    //    << endl << "Немецкие марки: " << deutschMarks << endl <<
    //    "Японские йены: " << yens << endl;
    
    //    Седьмое задание
    
    //    int celsius;
    //    cout << "Введите температуру в градусах Цельсия: ";
    //    cin >> celsius;
    //    int fahrengeit = (celsius * 9 / 5) + 32;
    //    cout << "Температура по Фаренгейту: " << fahrengeit << endl;
    
    //    Восьмое задание
    //        int pop1 = 135, pop2 = 7290, pop3 = 11300, pop4 = 16200;
    //        int year = 1990;
    //        cout << year << setw(12) << setfill('.') << pop1 << endl <<
    //        ++year << setw(12) << pop2 << endl << ++year << setw(12) <<
    //        pop3 << endl << ++year << setw(12) << pop4 << endl;
    
//        Девятое задание
//        int a;
//        int b;
//        int c;
//        int d;
//        char dummychar = '/';
//        cout << "Введите первую дробь: ";
//        cin >> a >> dummychar >> b;
//        cout << "Введите вторую дробь: ";
//        cin >> c >> dummychar >> d;
//        int numerator = (a*d + b*c);
//        int divider = b*d;
//        cout << "Сумма равна: " << numerator << dummychar << divider << endl;
//    
    
    //    Десятое задание
    //    int funt;
    //    int shilling;
    //    int penny;
    //    cout << "Введите количество фунтов: ";
    //    cin >> funt;
    //    cout << "Введите количество шиллингов: ";
    //    cin >> shilling;
    //    cout << "Введите количество пенсов: ";
    //    cin >> penny;
    //    int oldPennys = (funt * 20 * 12) + (shilling * 12) + penny;
    //    float newPennys = oldPennys / 2.4;
    //    float newFunt = newPennys / 100;
    //    cout << "Десятичных фунтов: " << "£" << round(newFunt*100)/100 << endl;
    
    //    Одиннадцатое задание
    
    
    cout << setw(20) << setiosflags(ios::left)  << "Фамилия" << setw(15) << setiosflags(ios::left) << "Имя" << setw(20) << setiosflags(ios::left) << "Адрес" << setw(20) << setiosflags(ios::left)<< "Город" << endl;
    cout  << setw(55) << setfill('-') << "" << endl;
    cout << setfill(' ') << setiosflags(ios::left) << setw(19) << "Петров" << setiosflags(ios::left) << setw(19) << "Василий" << setiosflags(ios::left) <<setw(23) << "Кленовая 16" << setiosflags(ios::left) << setw(20) << "Санкт-Петербург" << endl;
    cout << setiosflags(ios::left) << setw(19) << "Иванов" << setiosflags(ios::left) << setw(18) << "Сергей" << setiosflags(ios::left) <<setw(23) << "Осиновая 3" << setiosflags(ios::left) << setw(20) << "Находка" << endl;
    cout << setiosflags(ios::left) << setw(20) << "Сидоров" << setiosflags(ios::left) << setw(16) << "Иван" << setiosflags(ios::left) <<setw(24) << "Березовая 21" << setiosflags(ios::left) << setw(20) << "Калининград" << endl;
    
    //    Двенадцатое задание
//    int funt;
//    int shilling;
//    int penny;
//    cout << "Введите количество фунтов: ";
//    cin >> funt;
//    cout << "Введите количество шиллингов: ";
//    cin >> shilling;
//    cout << "Введите количество пенсов: ";
//    cin >> penny;
//    int oldPennys = (funt * 20 * 12) + (shilling * 12) + penny;
//    float newPennys = oldPennys / 2.4;
//    float newFunt = newPennys / 100;
//    cout << "Десятичных фунтов: " << "£" << round(newFunt*100)/100 << endl;
//    float newPounds;
//    int oldPunds;
//    float shillings;
//    float pens;
//    cout << "Введите число десятичных фунтов: ";
//    cin >> newPounds;
//    oldPunds = static_cast<int>(newPounds);
//    shillings = (newPounds - oldPunds) * 20;
//    pens = (shillings - static_cast<int>(shillings)) * 12;
//    cout << "Эквивалентная сумма в старой форме записи: " << "£" << oldPunds << '.' <<  trunc(shillings) << '.' << trunc(pens) << endl;
    
    
    
    return 0;
}
