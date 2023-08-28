//
//  main.cpp
//  12
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
//  используем перегрузку оператора [ ]
    int& operator[](int n) {
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
        arr1[j] = j * 10;
    }
    
    for(int j = 0; j < limit; j++) {
        int temp = arr1[j];
        cout << "Элемент " << j << " = " << temp << endl;
    }
    return 0;
}
