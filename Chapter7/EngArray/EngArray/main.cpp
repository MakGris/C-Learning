//
//  main.cpp
//  EngArray
//
//  Created by Maksim Grischenko on 28.06.2023.
//

#include <iostream>
using namespace std;
class Distance {
private:
    int feet;
    float inches;
public:
    void getDistance() {
        cout << "Введите количество футов: ";
        cin >> feet;
        cout << "Введите количество дюймов: ";
        cin >> inches;
    }
    void showDistance() {
        cout << feet << "\'-" << inches << "\"";
    }
    
    void addDist(Distance d2, Distance d3) {
        
        inches = d2.inches + d3.inches;
        feet = 0;
        
        if (inches >= 12) {
            inches -= 12;
            feet ++;
        }
        
        feet += d2.feet + d3.feet;
    }

};


int main() {
    int size = 2;
    Distance dist [size];
    int n = 0;
    char answer;
    
    do {
        if(n >= size) {
            cout << "\n Массив полон!" << endl;
            break;
        }
        cout << "Введите длину номер " << n + 1 << endl;
        dist[n++].getDistance();
        cout << endl;
        cout << "Продолжить ввод (y/n)?: ";
        cin >> answer;
    } while(answer != 'n');
    
    for(int j = 0; j < n; j++) {
        cout << "Длина номер " << j + 1 << ": ";
        dist[j].showDistance();
        cout << endl;
    }
    
    
    return 0;
}
