//
//  main.cpp
//  11
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
    /*
     с помощью этого метода возвращается ссылка на элемент массива! Этот метод позволяет одновременно
     получать элемент из массива и добавлять элемент в массив
     */
    int& access(int n) {
        if(n < 0 || n >= limit) {
            cout << "\nОшибочный элемент";
            exit(1);
        }
        return arr[n];
    }
};
int main() {
    SafeArray arr1;
    //Задаем значения элементов
    for(int j = 0; j < limit; j++) {
        arr1.access(j) = j * 10; //Значение j * 10 будет помещено в элемент массива, ссылка на который возвращается методом
    }
    
    for (int j = 0; j < limit; j++) {
        int temp = arr1.access(j);
        cout << "Элемент " << j << " = " << temp << endl;
    }
    return 0;
}
