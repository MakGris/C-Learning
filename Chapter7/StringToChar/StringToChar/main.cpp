//
//  main.cpp
//  StringToChar
//
//  Created by Maksim Grischenko on 10.07.2023.
//

#include <iostream>
#include <string>
using namespace std;

int main() {
    char chrArray [80];
    string word;
    cout << "Введите слово: ";
    cin >> word;
    unsigned long lenght = word.length();
    
    cout << "По одному символу: ";
    for (int j = 0; j < lenght; j++) {
        cout << word.at(j); // вывод с проверкой выхода за пределы массива
//        cout << word[j]; вывод без проверки
    }
    cout << endl;
    
    word.copy(chrArray, lenght, 0);
    chrArray[lenght] = 0; //вставка нуля после последнего символа строки
    cout << "Массив содержит: " <<chrArray << endl;
    return 0;
}
