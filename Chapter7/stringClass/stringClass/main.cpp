//
//  main.cpp
//  stringClass
//
//  Created by Maksim Grischenko on 04.07.2023.
//

#include <iostream>
#include <cstring>
using namespace std;
class String {
private:
    static const int size = 80;
    char str[size];
public:
    String() {str[0] = '\0';}
    String(char s[]) {
        strcpy(str, s);
    }
    void display() {
        cout << str << endl;
    }
    void concat(String s2) {
        if(strlen(str) + strlen(s2.str) < size) {
            strcat(str, s2.str);
        } else {
            cout << "\nПереполнение!";
        }
    }
};
int main(int argc, const char * argv[]) {
    /*
     кастим к char * для того, чтобы не ругался компилятор, т.к. в 11 стандарте
     была запрещена конверсация string literal в char
     */
    String s1 ((char *) "Happy new year!");
    String s2 = (char *) " and happy Christmas!";
    String s3;
    cout << "\n s1 = ";
    s1.display();
    cout << "\n s2 = ";
    s2.display();
    cout << "\n s3 = ";
    s3.display();
    /*
     Поместив массив char в класс, мы можем присваивать значение одного
     объекта класса другому. Если бы у нас было просто объявлено две разных
     переменных типа char [] мы бы так сделать не смогли
     */
    s3 = s1;
    cout << "\n s3 = ";
    s3.display();
    s3.concat(s2);
    cout << "\n s3 = ";
    s3.display();
    
    return 0;
}
