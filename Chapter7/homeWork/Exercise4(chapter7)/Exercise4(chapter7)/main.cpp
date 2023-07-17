//
//  main.cpp
//  Exercise4(chapter7)
//
//  Created by Maksim Grischenko on 16.07.2023.
//

#include <iostream>
using namespace std;

const int maxSize = 4;
int main() {
    void compare(int [], int);
    int intArray[maxSize];
    cout << "Введите четыре разных числа: ";
    
    for(int i = 0; i < maxSize; i++) {
        cin >> intArray[i];
    }
    compare(intArray, maxSize);
    return 0;
}

void compare( int array[], int count) {
    int biggerNumber = 0;
    int index = 0;
    for(int i = 0; i < count - 1; i++) {
        if (array[i] > array[i+1] && array[i] > biggerNumber) {
            biggerNumber = array[i];
            index = i;
        } else if (array[i+1] > biggerNumber) {
            biggerNumber = array[i+1];
            index = i + 1;
        }
    }
    cout << biggerNumber << '[' << index << ']' << endl;
   
}
