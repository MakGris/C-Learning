//
//  main.cpp
//  QuickSort
//
//  Created by Maksim Grischenko on 25.05.2023.
//

#include <iostream>
using namespace std;

int partition(int[], int, int);
void quickSort(int[], int, int);

int main() {
    int list[5] = {3,19,8,0,48};
    
    cout << "Input array..." << endl;
    
    for(int i =0; i < 5; i++) {
        cout << list[i] << "\t";
    }
    cout << endl;
    quickSort(list, 0, 5);
    cout << "Sorted array..." << endl;
    
    for(int i =0; i < 5; i++) {
        cout << list[i] << "\t";
    }
    cout << endl;
    return 0;
}

int partition(int list[], int start, int pivot) {
    
    int i = start;
    
    while(i < pivot) {
        if(list[i] > list[pivot] && i == pivot-1)
                {
                    swap(list[i], list[pivot]);
                    pivot--;
                }
                
                else if(list[i] > list[pivot])
                {
                    swap(list[pivot - 1], list[pivot]);
                    swap(list[i], list[pivot]);
                    pivot--;
                }
                
                else i++;
            }
            return pivot;
}

void quickSort(int list[], int start, int end)
{
    if(start < end)
    {
        int pivot = partition(list, start, end);
        
        quickSort(list, start, pivot - 1);
        quickSort(list, pivot + 1, end);
    }
}
