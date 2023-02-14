//
//  main.cpp
//  assign
//
//  Created by Maksim Grischenko on 10.02.2023.
//

#include <iostream>
using namespace::std;
//присваивание
int main() {
    int ans = 27;
    ans += 10;
    cout << ans << endl;
    ans -= 7;
    cout << ans << endl;
    ans *= 2;
    cout << ans << endl;
    ans /= 3;
    cout << ans << endl;
    ans %= 3;
    cout << ans << endl;
    std::cout << "Hello, World!\n";
    
//    Инкрементирование
    int value = 10;
    ++ value; // префиксная инкрементация
    cout << value << endl;
    value ++; // постфиксная инкрементация
    cout << value << endl;
    int value2 = 10;
    int newValue = 15;
    int totalValue = newValue * ++value2; //в префиксе инкремент будет выполнен первым
    cout << totalValue << endl;
    int value3 = 10;
    totalValue = newValue * value3++; //в постфиксе сначала выполнится умножение
    cout << totalValue << endl;
    cout << value3 << endl;
    
//    Декремент уменьшает значение на 1, также действует префиксная и постфиксная запись
    -- value3;
    cout << value3 << endl;
    return 0;
}
