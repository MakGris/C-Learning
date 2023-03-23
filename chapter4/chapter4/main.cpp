//
//  main.cpp
//  chapter4
//
//  Created by Maksim Grischenko on 23.03.2023.
//

#include <iostream>
#include <iomanip>

using namespace::std;

struct Distance {
    int feet;
    float inches;
};

struct Room {
    Distance lenght;
    Distance width;
};


//const int clubs = 0;
//const int diamonds = 1;
//const int hearts = 2;
//const int spades = 3;

const int jack = 11;
const int queen = 12;
const int king = 13;
const int ace = 14;

enum Suit { clubs, diamonds, hearts, spades };

struct Card {
    int number;
    Suit suit;
};
enum daysOfWeek { Sun, Mon, Tue, Wed, Thu, Fri, Sat };

enum itsWord { NO, YES };

//Примеры для чего лучше использовать enum

enum Months { Jan, Feb, Mar, Apr, May, Jun, Jul, Aug, Sep, Oct, Nov, Dec};

enum Switch { off, on };

enum Meridian { AM, PM };

enum Chess { pawn, knight, bishop, rock };

enum Coins { penny, nickel, dime, quarter, halfdollar, dollar };



int main() {
//    Пример 1
//    Distance d1, d3;
//    Distance d2 = {11, 6.25};
//
//    cout << "\nВведите число футов: ";
//    cin >> d1.feet;
//    cout << "Введите число дюймов: ";
//    cin >> d1.inches;
//    d3.inches = d1.inches + d2.inches;
//    d3.feet = 0;
//    if(d3.inches >= 12.0) {
//        d3.inches -= 12.0;
//        d3.feet ++;
//    }
//    d3.feet += d1.feet + d2.feet;
//
//    cout << d1.feet << "\'-" <<d1.inches <<"\" + ";
//    cout << d2.feet << "\'-" <<d2.inches <<"\" = ";
//    cout << d3.feet << "\'-" <<d3.inches <<"\"\n";
    
//    Пример 2
//    Room dining;
//    dining.lenght.feet = 13;
//    dining.lenght.inches = 6.5;
//    dining.width.feet = 10;
//    dining.width.inches = 0.0;
//    Перевод в футы для вычисления площади в кв. футах
//    float roomLenght = dining.lenght.feet + dining.lenght.inches / 12;
//    float roomWidth = dining.width.feet + dining.width.inches / 12;
//    cout << "Площадь комнаты равна: " << roomLenght * roomWidth << " квадратных футов\n";
    
//    Пример 3 (Игра в угадывание карт)
    Card temp, chosen, prize;
    int position;
    Card card1 = { 7, clubs };
    cout << "Карта 1: 7 треф\n";
    Card card2 = { jack, hearts };
    cout << "Карта 2: валет червей\n";
    Card card3 = { ace, spades };
    cout << "Карта 3: туз пик\n";
    prize = card3;
    cout << "Меняем местами карту 1 и карту 3...\n";
    temp = card3;
    card3 = card1;
    card1 = temp;
    cout << "Меняем местами карту 2 и карту 3...\n";
    temp = card3;
    card3 = card2;
    card2 = temp;
    cout << "Меняем местами карту 1 и карту 2...\n";
    temp = card2;
    card2 = card1;
    card1 = temp;
    cout << "На какой позиции (1, 2, 3) теперь туз пик?: ";
    cin >> position;
    switch (position) {
        case 1:
            chosen = card1;
            break;
        case 2:
            chosen = card2;
            break;
        case 3:
            chosen = card3;
            break;
    }
    if(chosen.number == prize.number && chosen.suit == prize.suit) {
        cout << "Правильно! Вы выиграли!\n";
    } else {
        cout << "Неправильно. Вы проиграли.\n";
    }
//    Пример 4 перечисления (enum)
//    daysOfWeek day1, day2;
//    day1 = Mon;
//    day2 = Thu;
//    В enum  значениям перечислений присваиваются численные значения, за счет этого можно производить арифметические вычисления, когда они имеют смысл
//    int difference = day2 - day1;
//    cout << "Разница в днях: " << difference << endl;
//    if(day1 < day2) {
//        cout << "day1 наступит раньше, чем day2\n";
//    }
    
//    Пример 5
//    itsWord isWord = NO;
//    char ch = 'a';
//    int wordcount = 0;
//    cout << "Введите предложение:\n";
//
//    do {
//        ch = getchar();
//        if(ch == ' ' || ch == '\n') {
//            if(isWord == YES) {
//                wordcount ++;
//                isWord = NO;
//            }
//            } else if(isWord == NO) {
//                isWord = YES;
//            }
//        }
//    }
//    while (ch != '\n');
//    cout << "\n---Число слов: " << wordcount << "---\n";
    return 0;
}
