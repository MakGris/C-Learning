//
//  main.cpp
//  Exercise8(chapter7)
//
//  Created by Maksim Grischenko on 07.08.2023.
//

#include <iostream>
using namespace std;

class SafeArray {
private:
    static const int limit = 20;
    int safearray[limit];
public:
    SafeArray() {}
    void putElement(int index, int element) {
        if(index >= 0 && index < limit) {
            safearray[index] = element;
        } else {
            cout << "Элемент вышел за границы массива!" << endl;
        }
    }
    
    int getElement(int index) {
        int element = 0;
        if(index >= 0 && index < limit) {
            element = safearray[index];
        } else {
            cout << "Индекс вышел за границы массива!" << endl;
        }
        return element;
    };
};


int main() {
    SafeArray safeArr;
    safeArr.putElement(7, 1325);
    safeArr.getElement(21);
    safeArr.putElement(21, 7);
    cout << safeArr.getElement(7) << endl;
    return 0;
}
