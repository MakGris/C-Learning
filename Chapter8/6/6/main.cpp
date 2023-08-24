//
//  main.cpp
//  6
//
//  Created by Maksim Grischenko on 23.08.2023.
//

#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;
class String {
private:
    const static int max = 80;
    char str[max];
public:
    String() {
        strcpy(str, "");
    }
    String(char const s[]) {
        if(strlen(s) < max) {
        strcpy(str, s);
        } else {
            cout << "Переполнение!";
            exit(1);
        }
    }
    void display() const {
        cout << str << endl;
    }
    String operator+(String ss) const {
        String temp;
        if ((strlen(str) + strlen(ss.str)) < max) {
            strcpy(temp.str, str);
            strcat(temp.str, ss.str);
        } else {
            cout << "Переполнение!";
            exit(1);
        }
        return temp;
    }
};

int main() {
    String s1 = "Happy Christmas!";
    String s2 = "Happy New Year!";
    String s3;
    s1.display();
    s2.display();
    s3.display();
    s3 = s1 + s2;
    s3.display();
    return 0;
}
