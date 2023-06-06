//
//  main.cpp
//  Exercises(chapter6, ex8)
//
//  Created by Maksim Grischenko on 06.06.2023.
//

#include <iostream>
using namespace std;
class Part {
private:
    int partId;
    static int count;
public:
    Part(): partId(count) {count++;}
    void getId () {
        cout << "Мой порядковый номер: " << partId << endl;
    }
};

int Part :: count = 1;
int main() {
    Part part1, part2, part3;
    part1.getId();
    part2.getId();
    part3.getId();
    
    return 0;
}
