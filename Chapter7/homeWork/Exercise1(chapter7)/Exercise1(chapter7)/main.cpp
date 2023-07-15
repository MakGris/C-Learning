//
//  main.cpp
//  Exercise1(chapter7)
//
//  Created by Maksim Grischenko on 11.07.2023.
//

#include <iostream>
#include <cstring>
using namespace std;

void reversit(char []);

int main() {
    int max = 80;
    char greeting [max];
    cout << "Введите фразу: ";
    cin.get(greeting, max);
    reversit(greeting);
    return 0;
}

void reversit(char word []) {
    int count = static_cast<int>(strlen(word) - 1);
    for (int j = 0; j < strlen(word) / 2; j++) {
        char swap = word[j];
        word [j] = word [count];
        word [count] = swap;
        count -= 1;
    }
    cout << word << endl;
}
