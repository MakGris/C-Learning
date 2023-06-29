//
//  main.cpp
//  CardArray
//
//  Created by Maksim Grischenko on 28.06.2023.
//

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

enum Suit {clubs, diamonds, hearts, spades};
const int joker = 11;
const int queen = 12;
const int king = 13;
const int ace = 14;

class Card {
private:
    int number;
    Suit suit;
public:
    Card() {}
    
    void set(int n, Suit s) {
        number = n;
        suit = s;
    }
    
    void cardDisplay() {
        if(number >= 2 && number <= 10) {
            cout << number;
        } else {
            switch (number) {
                case joker:
                    cout << "J";
                    break;
                case queen:
                    cout << "Q";
                    break;
                case king:
                    cout << "K";
                    break;
                case ace:
                    cout << "A";
                    break;
            }
        }
        switch (suit) {
            case clubs:
                cout << "\u2663";
                break;
            case diamonds:
                cout << "\u2666";
                break;
            case hearts:
                cout << "\u2665";
                break;
            case spades:
                cout << "\u2660";
                break;
           
        }
    }
    
};

int main() {
    
    Card deck [52];
    int j;
    
    
    for(j = 0; j < 52; j++) {
        int num = (j % 13) + 2;
        Suit suit = Suit(j / 13);
        deck[j].set(num, suit);
    }
    cout << "Упорядоченная колода:" << endl;
    for(j = 0; j < 52; j++) {
        deck[j].cardDisplay();
        cout << " ";
        if(! ((j + 1) % 13)) {
            cout << endl;
        }
    }
    
//    srand(time(NULL));
    
    for(j = 0; j < 52; j++) {
        int k = rand() % 52;
        Card temp = deck[j];
        deck [j] = deck[k];
        deck [k] = temp;
    }
    cout << "Перемешанная колода:" << endl;
    for(j = 0; j < 52; j++) {
        deck[j].cardDisplay();
        cout << " ";
        if(! ((j + 1) % 13)) {
            cout << endl;
        }
    }
    return 0;
}
