//
//  main.cpp
//  Exercise3(chapter7)
//
//  Created by Maksim Grischenko on 16.07.2023.
//

#include <iostream>
using namespace std;

class Distance {
private:
    int feet;
    float inches;
public:
    
    Distance() : feet(0), inches(0.0) {}
    
    void getDistance() {
        cout << "Введите количество футов: ";
        cin >> feet;
        cout << "Введите количество дюймов: ";
        cin >> inches;
    }
    
    void showDistance() {
        cout << feet << "\'-" << inches << "\"";
    }
    
    void addDist(Distance d2) {
        
        inches += d2.inches;
        
        if (inches >= 12) {
            inches -= 12;
            feet ++;
        }
        
        feet += d2.feet;
    }
    
    void divDist(int divisor) {
        float fltfeet = feet + inches / 12.0;
        fltfeet /= divisor;
        feet = static_cast<int>(fltfeet);
        inches = (fltfeet - feet) * 12.0;
    }
};
int maxSize = 4;

int main() {
    Distance summary;
    Distance distances [maxSize];
    int n = 0;
    char repeat;
    
    do {
        if (n == maxSize) {
            cout << "Превышен лимит ввода!" << endl;
            break;
        }
        distances[n++].getDistance();
        cout << "Желаете повторить ввод(y/n)?: ";
        cin >> repeat;
        
    } while(repeat != 'n');
    
    for( int i = 0; i < n; i++) {
        summary.addDist(distances[i]);
        summary.showDistance();
        cout << endl;
    }
    summary.divDist(n);
    cout << "Средняя длина = ";
    summary.showDistance();
    cout << endl;
    return 0;
}
