//
//  main.cpp
//  trySomeChars
//
//  Created by Maksim Grischenko on 22.07.2023.
//

#include <iostream>
#include <string>

using namespace std;
int main() {
    char array [] = "He,llo";
    char newWord [7];
//    char temporary;
    
    for (int i = 0; i < 8; i++) {
        if (array[i] == ',') {
        newWord[i] = array[i];
            i++;
        }
    }
   
    
    
    cout << newWord << endl;
    return 0;
}
