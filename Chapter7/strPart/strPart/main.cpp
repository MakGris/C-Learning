//
//  main.cpp
//  strPart
//
//  Created by Maksim Grischenko on 04.07.2023.
//

#include <iostream>
using namespace std;

class Part {
private:
    char partName[30];
    int partNumber;
    double cost;
public:
    void setPart(char prtName[], int number, double price) {
        strcpy(partName, prtName);
        partNumber = number;
        cost = price;
    }
    void showPart() {
        cout << "Название - " << partName
        << ", номер - " << partNumber
        << ", цена - $" << cost << endl;
    }
};

int main() {
    Part part1, part2;
    part1.setPart("муфта", 4473, 217.55);
    part2.setPart("вороток", 9924, 419.25);
    cout << "Первая деталь:" << endl;
    part1.showPart();
    cout << "Вторая деталь:" << endl;
    part2.showPart();
    return 0;
}
