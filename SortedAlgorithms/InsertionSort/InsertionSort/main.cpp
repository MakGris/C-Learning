//
//  main.cpp
//  InsertionSort
//
//  Created by Maksim Grischenko on 25.05.2023.
//

#include <iostream>
using namespace std;


void insertionSort(int[], int);

int main() {
    int list[5] = {3,19,8,0,48};
    
    cout << "Input array..." << endl;
    
    for(int i =0; i < 5; i++) {
        cout << list[i] << "\t";
    }
    cout << endl;
    
    insertionSort(list, 5);
    
    cout << "Sorted array..." << endl;
    
    for(int i =0; i < 5; i++) {
        cout << list[i] << "\t";
    }
    cout << endl;
    return 0;
    return 0;
}

void insertionSort(int list[], int listLength) {
    
    for(int i = 1; i < listLength; i++) {
            int j = i - 1;
            while(j >= 0 && list[j] > list[j + 1]) {
                swap(list[j], list[j + 1]);
                j--;
            }
        }
    }
