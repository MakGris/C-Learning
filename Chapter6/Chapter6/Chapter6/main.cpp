//
//  main.cpp
//  Chapter6
//
//  Created by Maksim Grischenko on 09.05.2023.
//

#include <iostream>
using namespace std;

class SmallObject {
private:
    int somedata;
    
public:
    void setData(int data) {
        somedata = data;
    }
    void showData() {
        cout << "Значение поля равно: " << somedata << endl;
    }
    
};

class Part {
private:
    int modelNumber;
    int partNumber;
    float cost;
    
public:
    
    void setPart(int modelNum, int partNum, float costPrice) {
        modelNumber = modelNum;
        partNumber = partNum;
        cost = costPrice;
    }
    
    void showPart() {
        cout << "Модель " << modelNumber;
        cout << ", деталь " << partNumber;
        cout << ", cтоимость " << cost << endl;
    }
};

int main() {
    SmallObject object1, object2;
    object1.setData(1066);
    object2.setData(1776);
    object1.showData();
    object2.showData();
    
    Part part1;
    part1.setPart(6244, 373, 217.55);
    part1.showPart();
    return 0;
}
