//
//  main.cpp
//  cardGame(Class)
//
//  Created by Maksim Grischenko on 19.05.2023.
//

#include <iostream>
using namespace std;

enum Suit {clubs, diamonds, hearts, spades};
const int jack = 11;
const int queen = 12;
const int king = 13;
const int ace = 14;

class Card {
private:
    int number;
    Suit suit;
    
public:
    /*
     Пустой конструктор используется для создания объектов, которые не
     инициализируются при создании (temp, chosen, prize)
     */
    Card() {}
    
    Card(int n, Suit s) {
        number = n;
        suit = s;
    }
    
    void display();
    bool isEqual(Card);
    
};

void Card::display() {
    if (number >=2 && number <=10) {
        cout << number;
    } else {
        switch (number) {
            case (jack):
                cout << "Валет";
                break;
            case (queen):
                cout << "Королева";
                break;
            case (king):
                cout << "Король";
                break;
            case (ace):
                cout << "Туз";
                break;
        }
    }
    switch (suit) {
        case (clubs):
            cout << " треф";
            break;
        case (diamonds):
            cout << " бубен";
            break;
        case (hearts):
            cout << " червей";
            break;
        case (spades):
            cout << " пик";
            break;
    }
}

bool Card::isEqual(Card card) {
    return (number == card.number && suit == card.suit) ? true : false;
}

void changeCards(Card& card1, Card& card2) {
    Card temp;
    temp = card1;
    card1 = card2;
    card2 = temp;
}

int main() {
    Card chosen, prize;
    int position;
    
    Card card1(7, clubs);
    cout << "\nКарта 1: ";
    card1.display();
    
    Card card2(jack, hearts);
    cout << "\nКарта 2: ";
    card2.display();
    
    Card card3(ace, spades);
    cout << "\nКарта 3: ";
    card3.display();
    
    prize = card3;
    
    cout << "\n Меняем местами карты 1 и 3...";
    changeCards(card1, card3);
    
    cout << "\n Меняем местами карты 2 и 3...";
    changeCards(card2, card3);
    
    cout << "\n Меняем местами карты 1 и 2...";
    changeCards(card1, card2);
    
    cout << "\n На какой позиции (1, 2 или 3) теперь ";
    prize.display();
    cout <<"?";
    cin >> position;
    
    switch (position) {
        case (1):
            chosen = card1;
            break;
        case (2):
            chosen = card2;
            break;
        case (3):
            chosen = card3;
            break;
    }
    
    if(chosen.isEqual(prize)) {
        cout << "Правильно! Вы выиграли!\n";
    } else {
        cout << "Неверно. Вы проиграли. " << "Вы выбрали карту: ";
        chosen.display();
        cout << endl;
    }
    
    return 0;
}
