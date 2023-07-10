//
//  main.cpp
//  stringCompare
//
//  Created by Maksim Grischenko on 06.07.2023.
//

#include <iostream>
#include <string>
using namespace std;

int main() {
    string name = "John";
    string userName;
    cout << "Введите ваше имя: ";
    cin >> userName;
    
    if (userName == name) {
        cout << "Hello, John" << endl;
    } else if (userName < name) {
        cout << "Ваше имя идет до имени John" << endl;
    } else {
        cout << "Ваше имя идет после имени John" << endl;
    }
    int n = userName.compare(0, 2, name, 0, 2);
    cout << "Первые две буквы вашего имени";
    if (n == 0) {
        cout << " совпадают c ";
    } else if (n < 0) {
        cout << " идут до ";
    } else {
        cout << " идут после ";
    }
    cout << name.substr(0, 2) << endl;
    return 0;
}
