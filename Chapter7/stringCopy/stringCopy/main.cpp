//
//  main.cpp
//  stringCopy
//
//  Created by Maksim Grischenko on 29.06.2023.
//

#include <iostream>
#include <cstring>
using namespace std;


//    // Копирование строк перебором
//int main() {
//    char str1 [ ] = "Маленькой елочке холодно зимой.";
//    const int size = 80;
//    int j;
//    char str2 [size];
//
//    for(j = 0; j < strlen(str1); j++) {
//        str2[j] = str1[j];
//    }
//    str2[j] = '\0';
//
//    cout << str2 << endl;
//    return 0;
//}

//Копирование строки функцией strcopy

int main() {
    char str1 [ ] = "Маленькой елочке холодно зимой.";
    const int size = 80;
    char str2 [size];
    
//    strcopy(destination, source)
    strcpy(str2, str1);
    
    cout << str2 << endl;
    return 0;
}
