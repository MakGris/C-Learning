//
//  main.cpp
//  Exercise1(chapter7)
//
//  Created by Maksim Grischenko on 11.07.2023.
//

#include <iostream>
#include <cstring>
using namespace std;


int main() {
    char greeting [] = "Following world";
    int k = strlen(greeting) - 1;
    cout << k << endl;
   
    for (int j = 0; j < strlen(greeting) / 2; j++) {
        char swap = greeting[j];
        greeting [j] = greeting [k];
        greeting [k] = swap;
        k -= 1;
    }
    cout << greeting << endl;
    return 0;
}

//char reversit(char word [max]) {
//
//}
//Hello
//olleh
/*
 1.oellh
 2.olleh
 */
