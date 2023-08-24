//
//  main.cpp
//  8
//
//  Created by Maksim Grischenko on 24.08.2023.
//

#include <iostream>
#include <string.h>
using namespace std;

class String {
private:
    static const int max = 80;
    char str [max];
public:
    String() {
        strcpy(str, "");
    }
    String (char const s[]) {
        if(strlen(s) < max) {
            strcpy(str, s);
        } else {
            cout << "Переполнение!" << endl;
        }
    }
    void display() const {
        cout << str << endl;
    }
    void getString() {
        cin.get(str, max);
    }
    bool operator==(String ss) const {
        return (strcmp(str, ss.str) == 0) ? true : false;
    }
};
int main() {
    String s1("да");
    String s2("нет");
    String s3;
    cout << "\nВведите 'да' или 'нет': ";
    s3.getString();
    if (s3 == s1) {
        cout << "Вы ввели 'да'" << endl;
    } else if (s3 == s2) {
        cout << "Вы ввели 'нет'" << endl;
    } else {
        cout << "Следуйте инструкциям!" << endl;
    }
    return 0;
}
