//
//  main.cpp
//  Exercises(chapter6, ex4)
//
//  Created by Maksim Grischenko on 30.05.2023.
//

#include <iostream>
using namespace std;

enum Etype { laborer, secretary, manager, accountant, executive, researcher };

class Date {
private:
    int day;
    int month;
    int year;
public:
    Date() : day(0), month(0), year(0) {}
    
    void setDate() {
        char slash = '/';
        cout << "Пожалуйста введите дату приема на работу сотрудника в формате день/месяц/год: ";
        cin >> day >> slash >> month >> slash >> year;
    }
    
    void displayDate() const{
        if(day < 10) {
            cout  << "0" << day <<'/';
        } else {
            cout  << day <<'/';
        }
        if(month < 10) {
            cout  << "0" << month <<'/';
        } else {
            cout  << month <<'/';
        }
        
        cout << year;
    }
    
};

class Employee {
private:
    int idNumber;
    float salary;
    Date date;
    Etype jobType;
    
public:
    Employee() : idNumber(0), salary(0) {}
    
    void setEmployee() {
        char job;
        cout << "Пожалуйста введите идентификационный номер сотрудника: ";
        cin >> idNumber;
        cout << "Пожалуйста введите размер заработной платы сотрудника: ";
        cin >> salary;
        date.setDate();
        cout << "Введите первую букву должности (a/e/l/m/r/s) первого сотрудника: ";
        cin >> job;
        switch (job) {
            case 'a':
            jobType = accountant;
            break;
            case 'e':
                jobType = executive;
            break;
            case 'l':
                jobType = laborer;
            break;
            case 'm':
                jobType = manager;
            break;
            case 'r':
                jobType = researcher;
            break;
            case 's':
                jobType = secretary;
            break;
            default:
            cout << "Введено неверное значение!\n";
            break;
            }
        }
    
    void showEmployee() const {
        cout << "Идентификационный номер сотрудника: " << idNumber << endl;
        cout << "Зарплата сотрудника №" << idNumber <<": "<< salary << endl;
        cout << "Дата приема на работу сотрудника №" << idNumber << ": "; date.displayDate();
        cout << endl;
        switch(jobType) {
                
            case laborer:
                cout << "Должность сотрудника №" << idNumber << ": Рабочий" << endl;
                break;
            case secretary:
                cout << "Должность сотрудника №" << idNumber << ": Секретарь" << endl;
                break;
            case manager:
                cout << "Должность сотрудника №" << idNumber << ": Менеджер" << endl;
                break;
            case accountant:
                cout << "Должность сотрудника №" << idNumber << ": Бухгалтер" << endl;
                break;
            case executive:
                cout << "Должность сотрудника №" << idNumber << ": Администратор" << endl;
                break;
            case researcher:
                cout << "Должность сотрудника №" << idNumber << ": Исследователь" << endl;
                break;
        }
    }
};

int main() {
    Employee empl1, empl2, empl3;
    cout << "Вам необходимо внести в базу трех сотрудников." << endl;
    empl1.setEmployee();
    empl2.setEmployee();
    empl3.setEmployee();
    
    empl1.showEmployee();
    empl2.showEmployee();
    empl3.showEmployee();
    return 0;
}
