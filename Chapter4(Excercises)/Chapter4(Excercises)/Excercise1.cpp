//
//  main.cpp
//  Chapter4(Excercises)
//
//  Created by Maksim Grischenko on 27.03.2023.
//

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

struct Phone {
    int cityCode;
    int stationNumber;
    int subscriberNumber;
};

Phone myNumber, yourNumber;

struct Point {
    int x;
    int y;
};
Point p1, p2, p3;

struct Distance {
    int feet;
    int inches;
};

struct Volume {
    Distance lenght;
    Distance width;
    Distance height;
};

Volume kitchen;


struct Date {
    int day;
    int month;
    int year;
};
Date date;

enum Etype { laborer, secretary, manager, accountant, executive, researcher };
Etype etype;
//char jobTitle;

struct Employee {
    int id;
    float salary;
    Date date;
    char shortJobName;
    Etype jobName;
};
char dateSlash;
Employee employee1, employee2, employee3;

struct Fraction {
    int numerator;
    int divider;
};
Fraction fraction1, fraction2, resultFraction;

struct Time {
    int hours;
    int minutes;
    int seconds;
};
Time time1, time2, resultTime;

struct Sterling {
    int pounds;
    float shillings;
    int pence;
};
Sterling result;

int main() {
    /*    Упражнение 1
     myNumber = {212, 767, 8900};
     cout << "Введите код города, номер станции и номер абонента:\n";
     cin >> yourNumber.cityCode >> yourNumber.stationNumber >> yourNumber.subscriberNumber;
     cout << "Мой номер " << '(' << myNumber.cityCode << ") " << myNumber.stationNumber
     << '-' << myNumber.subscriberNumber << endl;
     cout << "Ваш номер " << '(' << yourNumber.cityCode << ") " << yourNumber.stationNumber
     << '-' << yourNumber.subscriberNumber << endl;
     */
    /*
     Упражнение 2
     cout << "Введите координаты точки p1: ";
     cin >> p1.x >> p1.y;
     cout << "Введите координаты точки p2: ";
     cin >> p2.x >> p2.y;
     p3 = {p1.x + p2.x, p1.y + p2.y};
     cout << "Координаты точки p1 + p2:\n" << "x: " << p3.x << ", y: " << p3.y << endl;
     */
    /*
     Упражнение 3
     kitchen.lenght.feet = 5;
     kitchen.lenght.inches = 15;
     kitchen.width.feet = 2;
     kitchen.width.inches = 5;
     kitchen.height.feet = 1;
     kitchen.height.inches = 2;
     float lenght = kitchen.lenght.feet + kitchen.lenght.inches/12.0;
     float width = kitchen.width.feet + kitchen.width.inches/12.0;
     float height = kitchen.height.feet + kitchen.height.inches/12.0;
     float volume = lenght * width * height;
     cout << "Объем помещения равен: " << volume << endl;
     */
    /*
     Упражнение 4
     cout << "Вам необходимо ввести данные сотрудников \n";
     cout << "Введите идентификационный номер первого сотрудника: ";
     cin >> employee1.id;
     cout << "Введите заработную плату первого сотрудника: ";
     cin >> employee1.salary;
     cout << "Введите идентификационный номер второго сотрудника: ";
     cin >> employee2.id;
     cout << "Введите заработную плату второго сотрудника: ";
     cin >> employee2.salary;
     cout << "Введите идентификационный номер третьего сотрудника: ";
     cin >> employee3.id;
     cout << "Введите заработную плату третьего сотрудника: ";
     cin >> employee3.salary;
     cout << "Информация по первому сотруднику: \n";
     cout << "Идентификационный номер сотрудника: " << employee1.id << endl;
     cout << "Заработная плата сотрудника: " << employee1.salary << endl;
     cout << "Информация по второму сотруднику: \n";
     cout << "Идентификационный номер сотрудника: " << employee2.id << endl;
     cout << "Заработная плата сотрудника: " << employee2.salary << endl;
     cout << "Информация по третьему сотруднику: \n";
     cout << "Идентификационный номер сотрудника: " << employee3.id << endl;
     cout << "Заработная плата сотрудника: " << employee3.salary << endl;
     */
    /*
     Упражнение 5
     
     char slash;
     cout << "Введите дату в формате dd/mo/year: ";
     cin >> date.day >> slash >> date.month >> slash >> date.year;
     cout << "Текущая дата: " << date.day << slash << date.month << slash << date.year << endl;
     */
    
    /*
     Упражнение 6
     cout << "Введите первую букву должности (a/e/l/m/r/s): ";
     cin >> jobTitle;
     switch (jobTitle) {
     case 'a':
     etype = accountant;
     break;
     case 'e':
     etype = executive;
     break;
     case 'l':
     etype = laborer;
     break;
     case 'm':
     etype = manager;
     break;
     case 'r':
     etype = researcher;
     break;
     case 's':
     etype = secretary;
     break;
     default:
     cout << "Введено неверное значение!\n";
     break;
     }
     
     switch (etype) {
     case accountant:
     cout << "Полное название должности: accountant\n";
     break;
     case executive:
     cout << "Полное название должности: executive\n";
     break;
     case laborer:
     cout << "Полное название должности: laborer\n";
     break;
     case manager:
     cout << "Полное название должности: manager\n";
     break;
     case researcher:
     cout << "Полное название должности: researcher\n";
     break;
     case secretary:
     cout << "Полное название должности: secretary\n";
     break;
     default:
     break;
     }
     */
    
    /*
     Упражнение 7
     cout << "Вам необходимо ввести данные сотрудников \n";
     cout << "Введите идентификационный номер первого сотрудника: ";
     cin >> employee1.id;
     cout << "Введите заработную плату первого сотрудника: ";
     cin >> employee1.salary;
     cout << "Введите дату приема на работу первого сотрудника (dd/mo/year): ";
     cin >> employee1.date.day >> dateSlash >> employee1.date.month >> dateSlash >> employee1.date.year;
     cout << "Введите первую букву должности (a/e/l/m/r/s) первого сотрудника:  ";
     cin >> employee1.shortJobName;
     switch (employee1.shortJobName) {
     case 'a':
     employee1.jobName = accountant;
     break;
     case 'e':
     employee1.jobName = executive;
     break;
     case 'l':
     employee1.jobName = laborer;
     break;
     case 'm':
     employee1.jobName = manager;
     break;
     case 'r':
     employee1.jobName = researcher;
     break;
     case 's':
     employee1.jobName = secretary;
     break;
     default:
     cout << "Введено неверное значение!\n";
     break;
     }
     
     cout << "Введите идентификационный номер второго сотрудника: ";
     cin >> employee2.id;
     cout << "Введите заработную плату второго сотрудника: ";
     cin >> employee2.salary;
     cout << "Введите дату приема на работу второго сотрудника (dd/mo/year): ";
     cin >> employee2.date.day >> dateSlash >> employee2.date.month >> dateSlash >> employee2.date.year;
     cout << "Введите первую букву должности (a/e/l/m/r/s) второго сотрудника:  ";
     cin >> employee2.shortJobName;
     switch (employee2.shortJobName) {
     case 'a':
     employee2.jobName = accountant;
     break;
     case 'e':
     employee2.jobName = executive;
     break;
     case 'l':
     employee2.jobName = laborer;
     break;
     case 'm':
     employee2.jobName = manager;
     break;
     case 'r':
     employee2.jobName = researcher;
     break;
     case 's':
     employee2.jobName = secretary;
     break;
     default:
     cout << "Введено неверное значение!\n";
     break;
     }
     
     
     cout << "Введите идентификационный номер третьего сотрудника: ";
     cin >> employee3.id;
     cout << "Введите заработную плату третьего сотрудника: ";
     cin >> employee3.salary;
     cout << "Введите дату приема на работу третьего сотрудника (dd/mo/year): ";
     cin >> employee3.date.day >> dateSlash >> employee3.date.month >> dateSlash >> employee3.date.year;
     cout << "Введите первую букву должности (a/e/l/m/r/s) третьего сотрудника:  ";
     cin >> employee3.shortJobName;
     switch (employee3.shortJobName) {
     case 'a':
     employee3.jobName = accountant;
     break;
     case 'e':
     employee3.jobName = executive;
     break;
     case 'l':
     employee3.jobName = laborer;
     break;
     case 'm':
     employee3.jobName = manager;
     break;
     case 'r':
     employee3.jobName = researcher;
     break;
     case 's':
     employee3.jobName = secretary;
     break;
     default:
     cout << "Введено неверное значение!\n";
     break;
     }
     
     cout << "Информация по первому сотруднику: \n";
     cout << "Идентификационный номер сотрудника: " << employee1.id << endl;
     cout << "Заработная плата сотрудника: " << employee1.salary << endl;
     cout << "Дата приема на работу: " << employee1.date.day << dateSlash << employee1.date.month << dateSlash << employee1.date.year << endl;
     switch (employee1.jobName) {
     case accountant:
     cout << "Должность сотрудника: accountant\n";
     break;
     case executive:
     cout << "Должность сотрудника: executive\n";
     break;
     case laborer:
     cout << "Должность сотрудника: laborer\n";
     break;
     case manager:
     cout << "Должность сотрудника: manager\n";
     break;
     case researcher:
     cout << "Должность сотрудника: researcher\n";
     break;
     case secretary:
     cout << "Должность сотрудника: secretary\n";
     break;
     default:
     break;
     }
     
     cout << "Информация по второму сотруднику: \n";
     cout << "Идентификационный номер сотрудника: " << employee2.id << endl;
     cout << "Заработная плата сотрудника: " << employee2.salary << endl;
     cout << "Дата приема на работу: " << employee2.date.day << dateSlash << employee2.date.month << dateSlash << employee2.date.year << endl;
     switch (employee2.jobName) {
     case accountant:
     cout << "Должность сотрудника: accountant\n";
     break;
     case executive:
     cout << "Должность сотрудника: executive\n";
     break;
     case laborer:
     cout << "Должность сотрудника: laborer\n";
     break;
     case manager:
     cout << "Должность сотрудника: manager\n";
     break;
     case researcher:
     cout << "Должность сотрудника: researcher\n";
     break;
     case secretary:
     cout << "Должность сотрудника: secretary\n";
     break;
     default:
     break;
     }
     
     
     cout << "Информация по третьему сотруднику: \n";
     cout << "Идентификационный номер сотрудника: " << employee3.id << endl;
     cout << "Заработная плата сотрудника: " << employee3.salary << endl;
     cout << "Дата приема на работу: " << employee3.date.day << dateSlash << employee3.date.month << dateSlash << employee3.date.year << endl;
     switch (employee3.jobName) {
     case accountant:
     cout << "Должность сотрудника: accountant\n";
     break;
     case executive:
     cout << "Должность сотрудника: executive\n";
     break;
     case laborer:
     cout << "Должность сотрудника: laborer\n";
     break;
     case manager:
     cout << "Должность сотрудника: manager\n";
     break;
     case researcher:
     cout << "Должность сотрудника: researcher\n";
     break;
     case secretary:
     cout << "Должность сотрудника: secretary\n";
     break;
     default:
     break;
     }
     */
    /*
     Упражнение 8
    char dummychar = '/';
    cout << "Введите первую дробь: ";
    cin >> fraction1.numerator >> dummychar >> fraction1.divider;
    cout << "Введите вторую дробь: ";
    cin >> fraction2.numerator >> dummychar >> fraction2.divider;
    resultFraction.numerator = (fraction1.numerator * fraction2.divider + fraction1.divider * fraction2.numerator);
    resultFraction.divider = fraction1.divider * fraction2.divider;
    cout << "Сумма равна: " << resultFraction.numerator << dummychar << resultFraction.divider << endl;
     */
    /*
     Упражнение 9
     */
    
    /*
     Упражнение 10
    float newPounds;
    cout << "Введите число десятичных фунтов: ";
    cin >> newPounds;
    result.pounds = newPounds;
    result.shillings = (newPounds - result.pounds) * 20;
    result.pence = (result.shillings - static_cast<int>(result.shillings)) * 12;
    cout << "Эквивалентная сумма в старой форме записи: " << "£" << result.pounds << '.' <<  trunc(result.shillings) << '.' << result.pence << endl;
    */
    /*
    Упражнение 11
    char colon = ':';
    cout << "Введите первое время (hh:min:sec): ";
    cin >> time1.hours >> colon >> time1.minutes >> colon >> time1.seconds;
    long totalsecs1 = time1.hours * 3600 + time1.minutes * 60 + time1.seconds;
    cout << "Введите второе время (hh:min:sec): ";
    cin >> time2.hours >> colon >> time2.minutes >> colon >> time2.seconds;
    long totalsecs2 = time2.hours * 3600 + time2.minutes * 60 + time2.seconds;
    long sumSecs = totalsecs1 + totalsecs2;
    resultTime.hours = sumSecs / 3600;
    resultTime.minutes = (sumSecs - (resultTime.hours * 3600)) / 60;
    resultTime.seconds = sumSecs - ((resultTime.hours * 3600) + (resultTime.minutes * 60));
    cout << "Общее время: " << resultTime.hours << colon << resultTime.minutes << colon << resultTime.seconds << endl;
    */
    
//    double firstNumerator, firstDivider, secondNumerator, secondDivider;
    char slash, action, repeat;
//    double result = 0.0;
    do {
        cout << "Введите первую дробь, знак желаемого действия и вторую дробь: ";
        cin >> fraction1.numerator >> slash >> fraction1.divider >> action >> fraction2.numerator >> slash >> fraction2.divider;
        
        switch (action) {
            case '+':
                resultFraction.numerator = (fraction1.numerator * fraction2.divider) + (fraction1.divider * fraction2.numerator);
                resultFraction.divider = fraction1.divider * fraction2.divider;
//                result = (firstNumerator*secondDivider + firstDivider*secondNumerator)/(firstDivider*secondDivider);
                break;
            case '-':
                resultFraction.numerator = (fraction1.numerator * fraction2.divider) - (fraction1.divider * fraction2.numerator);
                resultFraction.divider = fraction1.divider * fraction2.divider;
//                result = (firstNumerator*secondDivider - firstDivider*secondNumerator)/(firstDivider*secondDivider);
                break;
            case '*':
                resultFraction.numerator = fraction1.numerator * fraction2.numerator;
                resultFraction.divider = fraction1.divider * fraction2.divider;
//                result = (firstNumerator * secondNumerator)/(firstDivider * secondDivider);
                break;
            case '/':
                resultFraction.numerator = fraction1.numerator * fraction2.divider;
                resultFraction.divider = fraction1.divider * fraction2.numerator;
//                result = (firstNumerator * secondDivider)/(firstDivider * secondNumerator);
                break;
            default:
                cout << "Введен неверный знак операции!";
                break;
        }
        cout << "Результат равен: " << resultFraction.numerator << slash << resultFraction.divider << endl;
        cout << "Попробовать еще раз(y/n)?: ";
        cin >> repeat;
    }
    while(repeat != 'n');
    return 0;
}
