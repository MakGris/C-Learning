//
//  main.cpp
//  stringin2
//
//  Created by Maksim Grischenko on 29.06.2023.
//

#include <iostream>
#include <iomanip>
using namespace std;


    //Безопасный ввод с ограничением, для избежания переполнения массива

    int main() {
        const int size = 20;
        char string [size];
    
        cout << "Введите строку: ";
        
    /*
     Все символы, превышающие size, будут отсечены (всего отобразится 19 символов.
     Так как строка должна завершаться байтом, содержащим 0, двадцатый символ
     отведен под него.
     Метод setw определяет максимальное количество символов, которые сможет принять
     буфер
     */

        cin >> setw(size) >> string;
    
        cout << "Вы ввели: " << string << endl;
        return 0;
    }

   
