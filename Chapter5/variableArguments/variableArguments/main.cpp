//
//  main.cpp
//  variableArguments
//
//  Created by Maksim Grischenko on 06.04.2023.
//

#include <iostream>
using namespace std;

void repeatCharacter(char, int);

int main() {
    char character;
    int repeatCount;
    cout << "Введите символ: ";
    cin >> character;
    cout << "Введите число повторений символа: ";
    cin >> repeatCount;
    repeatCharacter(character, repeatCount);
    return 0;
}

void repeatCharacter(char character, int reps) {
    
    for(int j = 0; j < reps; j++) {
        cout << character;
    }
    cout << endl;
}
