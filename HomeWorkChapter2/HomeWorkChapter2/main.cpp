//
//  main.cpp
//  HomeWorkChapter2
//
//  Created by Maksim Grischenko on 13.02.2023.
//

#include <iostream>
#include <iomanip>
using namespace::std;
int main() {
    int x = 10;
    cout << x << endl;
    cout << "Jim" << endl;
    cout << 509 << endl;
    cout << setw(10) << "george" << endl;
    
    int temp;
    cout << "Введите температуру: ";
    cin >> temp;
    cout << "Текущая температура: " << temp << endl;
//    temp += 23;
    temp = temp + 23;
    cout << temp << endl;
    
    int var1 = 0;
    cout << var1 -- << endl;
    cout << var1 << endl;
    cout << ++var1 << endl;
    
    return 0;
}
