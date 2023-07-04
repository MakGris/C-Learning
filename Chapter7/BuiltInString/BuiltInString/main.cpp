//
//  main.cpp
//  BuiltInString
//
//  Created by Maksim Grischenko on 04.07.2023.
//

#include <iostream>
#include <string>
using namespace std;

//Использование встроенного класса string
int main() {
//Разные способы инициализации
    string s1 ("Рыба");
    string s2 = "Мясо";
    string s3;
    s3 = s1;
    cout << "s3 = " << s3 << endl;
    s3 = "Ни " + s1 + " ни ";
    s3 += s2;
    cout << "s3 = " << s3 << endl;
    
    s1.swap(s2);
    cout << s1 << " не " << s2 << endl;
    
    return 0;
}
