//
//  main.cpp
//  Exercise2(chapter7)
//
//  Created by Maksim Grischenko on 15.07.2023.
//

#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    string name;
    long idNumber;
public:
    Employee(string nm, long id) : name(nm), idNumber(id) {}
    Employee() : name("default"), idNumber(0) {}
    void getData() {
        cout << "Введите имя сотрудника: ";
        getline(cin, name);
        cout << "Введите идентификационный номер сотрудника: ";
        cin >> idNumber;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    
    void showEmployee() {
        cout << "Имя сотрудника: " << name << endl;
        cout << "Идентификационный номер сотрудника: " << idNumber << endl;
    }
    
};

int arraySize = 100;

int main() {
    Employee employers [arraySize];
    int count = 0;
    char repeat;
    do {
        employers[count].getData();
        count += 1;
        cout << count;
        cout << "Ввести данные для еще одного сотрудника(y/n)?: ";
        cin >> repeat;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');//Для того, чтобы getline нормально работал в петле, без этого не дает ввести имя сотрудника во второй раз
        if(count == arraySize) {
            cout << "Превышен лимит ввода сотрудников" << endl;
            break;
        }
    }while(repeat != 'n');

    for(int i = 0; i < count; i++) {
        employers[i].showEmployee();
    }
    
    return 0;
}
