//
//  main.cpp
//  Exercise10(chapter7)
//
//  Created by Maksim Grischenko on 09.08.2023.
//

#include <iostream>
using namespace std;

class MatrixArray {
private:
    int sizeAr1;
    int sizeAr2;
    int mArray[10][10];
public:
    MatrixArray(int size1, int size2): sizeAr1(size1), sizeAr2(size2) {
        mArray[sizeAr1][sizeAr2];
    }
    void putElem(int one, int two, int element) {
        if(one <= sizeAr1 && two <= sizeAr2) {
        mArray[one][two] = element;
        } else {
            cout << "Невозможно добавить элемент, вы вышли за пределы массива" << endl;
        }
    }
    int getElem(int one, int two) {
        if(one <= sizeAr1 && two <= sizeAr2) {
            return mArray[one][two];
        } else {
            cout << "Невозможно отобразить элемент, вы вышли за пределы массива" << endl;
        }
        return 0;
    }
    
    
    
};
int main() {
    MatrixArray array1(20,20);
    int element = 1325;
    array1.putElem(20, 20, element);
    cout << array1.getElem(20, 20) << endl;
    
    
    return 0;
}
