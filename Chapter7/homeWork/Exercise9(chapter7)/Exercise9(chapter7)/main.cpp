//
//  main.cpp
//  Exercise9(chapter7)
//
//  Created by Maksim Grischenko on 07.08.2023.
//

#include <iostream>
using namespace std;
class Queue {
private:
    static const int max = 10;
    int st[max];
    int head;
    int tail;
public:
    
    Queue() {
        head = 0;
        tail = 0;
    }
    void push(int var) {
        if(tail == max - 1) {
            tail = -1;
        }
        st[tail++] = var;
    }
    int pop() {
        if(head == max - 1) {
            head = -1;
        }
        return st[head++];
    }
    
};

int main() {
    Queue queue1;
    queue1.push(1);
    queue1.push(2);
    queue1.push(3);
    queue1.push(4);
    queue1.push(5);
    queue1.push(6);
    queue1.push(7);
    queue1.push(8);
    queue1.push(9);
    queue1.push(10);
    queue1.push(11);
    queue1.push(12);
    queue1.push(13);
    queue1.push(14);
    queue1.push(15);
    queue1.push(16);
    queue1.push(17);
    queue1.push(18);
    queue1.push(19);
    queue1.push(20);
    
    cout << "1: "<< queue1.pop() << endl;
    cout << "2: "<< queue1.pop() << endl;
    cout << "3: "<< queue1.pop() << endl;
    cout << "4: "<< queue1.pop() << endl;
    cout << "5: "<< queue1.pop() << endl;
    cout << "6: "<< queue1.pop() << endl;
    cout << "7: "<< queue1.pop() << endl;
    cout << "8: "<< queue1.pop() << endl;
    cout << "9: "<< queue1.pop() << endl;
    cout << "10: "<< queue1.pop() << endl;
    
    return 0;
}
