//
//  main.cpp
//  stringModify
//
//  Created by Maksim Grischenko on 06.07.2023.
//

#include <iostream>
#include <string>
using namespace std;

int main() {
    string s1 = "Many hands make light work.";
    string s2 = "legs";
    string s3 = "Few ";
    s1.erase(0, 5);//стираем many
    s1.replace(0, 5, s2);//заменяем hands на legs
    s1.insert(0, s3);
    s1.erase(s1.size() - 1);//стираем точку
    s1.append(3, '!');//добавляем !!!
    int x = s1.find(' ');//ищем пробелы
    while (x < s1.size()) {
        s1.replace(x, 1, "/");//заменяем пробел на /
        x = s1.find(' ');
    }
    cout << s1 << endl;
    return 0;
}
