//
//  main.cpp
//  population
//
//  Created by Maksim Grischenko on 09.02.2023.
//

#include <iostream>
#include <iomanip> //для использования setw
using namespace::std;

int main() {
    
    long pop1 = 8425785, pop2 = 9761, pop3 = 47;
    cout << setw(9) << "City" << setw(12) << "Population" << endl
    << setw(9) << "Moscow" << setw(12) << pop1 << endl
    << setw(9) << "Kirov" << setw(12) << pop2 << endl
    << setw(9) << "Ygrumovka" << setw(12) << pop3 << endl;
    return 0;
}
