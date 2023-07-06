//
//  main.cpp
//  stringFind
//
//  Created by Maksim Grischenko on 06.07.2023.
//

#include <iostream>
#include <string>
using namespace std;

int main() {
    string s1 = "Many hands make light work";//самый левый символ нумеруется как 0
    int n;
    n = s1.find("hands"); //Метод для поиска строки
    cout << "Слово найдено на позиции: " << n << endl;
    n = s1.find_first_of("Mbh");//Поиск любого символа из группы, возвращает номер первого найденного
    cout << "Символ найден на позиции: " << n << endl;
    n = s1.find_first_not_of("absM"); //Поиск любого первого символа не входящего в заданную группу
    cout << "Символ найден на позиции: " << n << endl;
    return 0;
}
