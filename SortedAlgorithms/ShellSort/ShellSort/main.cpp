//
//  main.cpp
//  ShellSort
//
//  Created by Maksim Grischenko on 29.05.2023.
//

#include <iostream>
using namespace std;

void shellSort(int [], int);


int main() {
    int list[8] = {3,19,8,0,48, 4, 5, 12};
    
    cout << "Input array..." << endl;
    
    for(int i =0; i < 8; i++) {
        cout << list[i] << "\t";
    }
    cout << endl;
    shellSort(list, 8);
    cout << "Sorted array..." << endl;
    
    for(int i =0; i < 8; i++) {
        cout << list[i] << "\t";
    }
    cout << endl;
    return 0;
}

void shellSort(int list[], int listLength)
{
    for(int step = listLength/2; step > 0; step /= 2)
    {
        for (int i = step; i < listLength; i += 1)
        {
            int j = i;
            while(j >= step && list[j - step] > list[i])
            {
                swap(list[j], list[j - step]);
                j-=step;
            }
        }
    }
}
