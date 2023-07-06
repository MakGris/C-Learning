//
//  main.cpp
//  sstrio
//
//  Created by Maksim Grischenko on 06.07.2023.
//

#include <iostream>
#include <string>
using namespace std;

int main() {
    string fullName, nickName, address;
    string greeting = "Hello, ";
    cout << "Введите ваше имя: ";
    getline(cin, fullName);
    cout << "Ваше имя: " << fullName << endl;
    
    cout << "Введите ваш псевдоним: ";
    cin >> nickName;
    greeting += nickName;
    cout << greeting << endl;
    
    cout << "Введите ваш адрес в несколько строк:\n";
    getline(cin, address, '$');
    cout << "Ваш адрес: " << address << endl;
    
    
    
    return 0;
}

