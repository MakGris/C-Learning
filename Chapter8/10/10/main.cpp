//
//  main.cpp
//  10
//
//  Created by Maksim Grischenko on 28.08.2023.
//

#include <iostream>
using namespace std;

const int limit = 100;

class SafeArray {
private:
    int arr[limit];
public:
    //Один из способов добавления элемента в массив
    void putElement(int n, int element) {
        if(n < 0 || n >= limit) {
            cout << "\nОшибочный индекс!";
            exit(1);
        }
        arr[n] = element;
    }
    //Один из способов получения элемента из массива
    int getElement(int n) {
        if(n < 0 || n >= limit) {
            cout << "\nОшибочный индекс!";
            exit(1);
        }
        return arr[n];
    }
};

int main() {
    SafeArray arr1;
    for(int j = 0; j < limit; j++) {
        arr1.putElement(j, j * 10);
    }
    
    for(int j = 0; j < limit; j++) {
        int temp = arr1.getElement(j);
        cout << "Элемент " << j << " = " << temp << endl;
    }
    return 0;
}
