//
//  main.cpp
//  StakArray
//
//  Created by Maksim Grischenko on 28.06.2023.
//

#include <iostream>
using namespace std;
class Stack {
private:
    static const int max = 10;
    int st[max];
    int top;
public:
    
    Stack() {top = 0;}
    void push(int var) {
        st[++top] = var;
    }
    int pop() {
        return st[top--];
    }
};

int main() {
    Stack stack;
    stack.push(11);
    stack.push(22);
    cout << "1: " << stack.pop() << endl;
    cout << "2: " << stack.pop() << endl;
    stack.push(33);
    stack.push(44);
    stack.push(55);
    stack.push(66);
    cout << "3: " << stack.pop() << endl;
    cout << "4: " << stack.pop() << endl;
    cout << "5: " << stack.pop() << endl;
    cout << "6: " << stack.pop() << endl;
    return 0;
}
