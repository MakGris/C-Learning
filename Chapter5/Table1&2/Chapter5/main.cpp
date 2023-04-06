//
//  main.cpp
//  Chapter5
//
//  Created by Maksim Grischenko on 06.04.2023.
//

#include <iostream>
using namespace std;

//Вариант 1 (объявление функции в начале и ее определение в конце)
//void starline();
//
//int main() {
//    starline();
//    cout << "Тип данных     Диапазон" << endl;
//    starline();
//    cout << "char           -128...127" << endl
//    << "short          -32,768...32,767" << endl
//    << "int            Системно-зависимый" << endl
//    << "long           -2.147.483.648...2.147.483.647" << endl;
//    starline();
//    return 0;
//}
//
//void starline() {
//    for(int j = 0; j < 45; j++) {
//        cout << '*';
//    }
//    cout << endl;
//
//}


//Вариант 2 (Отсутствие объявления функции, определение функции в начале программы)
void starline() {
    for(int j = 0; j < 45; j++) {
        cout << '*';
    }
    cout << endl;
 
}

int main() {
    starline();
    cout << "Тип данных     Диапазон" << endl;
    starline();
    cout << "char           -128...127" << endl
    << "short          -32,768...32,767" << endl
    << "int            Системно-зависимый" << endl
    << "long           -2.147.483.648...2.147.483.647" << endl;
    starline();
    return 0;
}

