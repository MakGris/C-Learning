//
//  main.cpp
//  stringin3
//
//  Created by Maksim Grischenko on 29.06.2023.
//

#include <iostream>
using namespace std;
/*
 Инициализация строки постоянным значением. Строка это массив char, т.е. по сути
 мы должны были инициализировать ее {'Я',' ', 'п', 'а'} и т.д., но язык позволяет
 инициализировать строку упрощенным способом в виде нормальной фразы.
 */

int main() {
//    const int max = 600;
    char string [ ] = "Я памятник себе воздвиг нерукотворный";

    cout << string << endl;

    return 0;
}
