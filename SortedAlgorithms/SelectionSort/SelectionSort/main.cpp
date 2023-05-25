//
//  main.cpp
//  SelectionSort
//
//  Created by Maksim Grischenko on 25.05.2023.
//

#include <iostream>
using namespace std;

int smallestPosition(int[], int, int);
void selectionSort(int[], int);

int main() {
    int list[5] = {3,19,8,0,48};
    
    cout << "Input array..." << endl;
    
    for(int i =0; i < 5; i++) {
        cout << list[i] << "\t";
    }
    cout << endl;
    selectionSort(list, 5);
    cout << "Sorted array..." << endl;
    
    for(int i =0; i < 5; i++) {
        cout << list[i] << "\t";
    }
    cout << endl;
    return 0;
}
//Функция для нахождения наименьшего значения в массиве
int smallestPosition(int list[], int startPosition, int listLenght) {
    
    int smallestPosition = startPosition;
    
    for(int i = startPosition; i < listLenght; i++) {
        if(list[i] < list[smallestPosition]) {
            smallestPosition = i;
        }
    }
    return smallestPosition;
}

void selectionSort(int list[], int listLenght) {
    for(int i =0; i < listLenght; i++) {
        
        int smallest = smallestPosition(list, i, listLenght);
        swap(list[i], list[smallest]);
    }
}
