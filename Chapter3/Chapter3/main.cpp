//
//  main.cpp
//  Chapter3
//
//  Created by Maksim Grischenko on 20.02.2023.
//

#include <iostream>
#include <iomanip>
#include <unistd.h>
using namespace::std;

int main() {
    //    Ложь - истина
    //    int numb;
    //    cout << "Введите число: ";
    //    cin >> numb;
    //    cout << "numb <10 равно " << (numb < 10) << endl;
    //    cout << "numb >10 равно " << (numb > 10) << endl;
    //    cout << "numb ==10 равно " << (numb == 10) << endl;
    
    //    Цикл For с одним оператором
    //    int j;
    //    for (j = 0; j < 15; j++)
    //        cout << j * j << " ";
    //    cout << endl;
    //    Цикл for с несколькими операторами
    //    int numb;
    //    for(numb = 1; numb <= 15; numb++) {
    //        cout << setw(4) << numb;
    //        int cube = numb * numb * numb;
    //        cout << setw(6) << cube << endl;
    //    }
    /*Вычисление факториала представляет собой умножение всех целых
     положительных чисел, непревышающих заданное число
     */
    //    unsigned int numb;
    //    unsigned long fact = 1;
    //    cout << "Введите целое число, факториал которого мы будем вычислять: ";
    //    cin >> numb;
    //    for(int j = numb; j > 0; j--) {
    //        fact *= j;
    //    }
    //    cout << "Факториал числа равен " << fact<< endl;
    
    //    Цикл while, отображаются значения, пока пользователь не введет 0
    //    int n = 99;
    //    while(n != 0) {
    //        cin >> n;
    //        cout << endl;
    //    }
    
    //    Возведение в 4 степень циклом while
    
    //    int numb = 1;
    //    int pow = 1;
    //
    //    while (pow < 10000) {
    //        cout << setw(4) << numb;
    //        cout << setw(5) << pow << endl;
    //        ++numb;
    //        pow = numb * numb * numb * numb;
    //    }
    
    //    Последовательность Фибоначчи
    
    //    const unsigned int limit = 8294967295;
    //
    //    unsigned long next = 0;
    //    unsigned long last = 1;
    //
    //    while(next < limit / 2) { // Арифметические операции всегда имеют более высокий приоритет, чем операции сравнения
    //        cout << last << " ";
    //        long sum =next + last;
    //        next = last;
    //        last = sum;
    //    }
    //    cout << endl;
    
    //    Цикл do-while
    //    long dividend, divisor;
    //    char answer;
    //
    //    do {
    //        cout << "Введите делимое: ";
    //        cin >> dividend;
    //        cout << "Введите делитель: ";
    //        cin >> divisor;
    //        cout << "Частное равно: " << dividend / divisor << "\n";
    //        cout << "Остаток от деления равен: " << dividend % divisor << "\n";
    //        cout << "Еще раз?(y/n): ";
    //        cin >> answer;
    //    }
    //    while (answer != 'n');
    
    //    Условный оператор if-else
    //    int x;
    //    cout << "Введите число: ";
    //    cin >> x;
    //
    //    if (x > 100) {
    //        cout << "Число " << x << " ";
    //        cout << "больше, чем 100\n";
    //    } else {
    //        cout << "Число " << x << " " << "меньше, чем 100" << endl;
    //    }
    //    Совместное использование цикла и оператора ветвления if
    //    int n, j;
    //    cout << "Введите число: ";
    //    cin >> n;
    //
    //    for (j = 2; j <= n / 2; j++) {
    //        if (n % j == 0) {
    //            cout << "Число не является простым. " << "Делится на " << j << endl;
    //            exit(0);
    //        }
    //    }
    //    cout << "Число является простым" << endl;
    
    //    подсчет символов (1 вариант) - инициализация ch в начале
    //    int chcount = 0;
    //    int wdcount = 1;
    //    char ch = 'a';
    //    cout << "Введите строку: ";
    //    while (ch != '\n') {
    //        ch = getchar();
    //        if (ch == ' ') {
    //            wdcount++;
    //        } else {
    //            chcount++;
    //        }
    //    }
    //    cout << "\nСлов: " << wdcount << endl;
    //    cout << "Букв: " << (chcount - 1) << endl;
    // подсчет символов (2 вариант) инициализация ch в условии цикла
    //    int chcount = 0;
    //    int wdcount = 1;
    //    char ch;
    //    cout << "Введите строку: ";
    //    while ((ch = getchar()) != '\n') {
    //        if (ch == ' ') {
    //            wdcount++;
    //        } else {
    //            chcount++;
    //        }
    //    }
    //    cout << "\nСлов: " << wdcount << endl;
    //    cout << "Букв: " << (chcount) << endl;
    
    //    Мини игра с движением по направлениям не работает!!
//Проблема с getchar(), если заменить на cin то все становится нормально
//    Мне кажется, что за счет того, что getchar() считывает все вводимые
//    символы, то учитывается нажатие enter и поэтому цикл прогоняется
//    лишний раз и печатает два раза подряд фразы про координаты и направление
//    движения
//    char dir = 'a';
//    int x = 10, y = 10;
//    cout << "Для выхода нажмите q...\n";
//
//    while (dir != 'q') {
//        cout << "\nВаши координаты: " << x << ", " << y;
//        cout << "\nВыберете направление движения (n, s, e, w): ";
//        dir = getchar();
//        if (dir == 'n')
//            y--;
//        else if (dir == 's')
//            y++;
//        else if (dir == 'e')
//            x++;
//        else if (dir == 'w')
//            x--;
//    }
//
//    Рабочий вариант
//    int x = 10, y = 10;
//    cout << "Для выхода из программы нажмите q..." << endl;
//    cout << "Ваши координаты: " << x << ", " << y << endl;
//    cout << "Выберете направление движения (n, s, e, w): ";
//    char direction = 'a';
//    while (direction != 'q') {
//        direction = getchar();
//        if (direction == 'n') {
//            --y;
//            cout << "Ваши координаты: " << x << ", " << y << endl;
//            cout << "Выберете направление движения (n, s, e, w): ";
//        } else if(direction == 's') {
//            ++y;
//            cout << "Ваши координаты: " << x << ", " << y << endl;
//            cout << "Выберете направление движения (n, s, e, w): ";
//        } else if (direction == 'e') {
//            ++x;
//            cout << "Ваши координаты: " << x << ", " << y << endl;
//            cout << "Выберете направление движения (n, s, e, w): ";
//        } else if(direction == 'w') {
//            --x;
//            cout << "Ваши координаты: " << x << ", " << y << endl;
//            cout << "Выберете направление движения (n, s, e, w): ";
//        }
//    }
    
//   
//    int a, b, c;
//    cout << "Введите числа a, b и с: ";
//    cin >> a >> b >> c;
//    if(a == b) {
//        if (b == c)
//            cout << "a, b и с равны\n";
//    } else {
//        cout << "a и b не равны \n";
//    }
    
//    int speed;
//    cout << "Введите число 33, 45 или 78: ";
//    cin >> speed;
//    switch (speed) {
//        case 33:
//            cout << "Долгоиграющий формат\n";
//            break;
//        case 45:
//            cout << "Формат сингла\n";
//            break;
//        case 78:
//            cout << "Устаревший формат\n";
//            break;
//    }
//    char dir = 'a';
//    int x = 10, y = 10;
//
//    while(dir != 'q') {
//        cout << "Ваши координаты: " << x << ", " << y << endl;
//        cout << "Выберете направление движения (n, s, e, w): ";
//        cin >> dir;
//        switch (dir) {
//            case 'n':
//                y--;
//                break;
//            case 's':
//                y++;
//                break;
//            case 'e':
//                x++;
//                break;
//            case 'w':
//                x--;
//                break;
//            case 'q':
//                cout << "Выход...\n";
//                break;
//            default:
//                cout << "Попробуйте еще\n";
//        }
//    }
    
//    Условная операция
//    int min;
//    int alpha = 5, beta = 3;
//    if (alpha < beta) {
//        min = alpha;
//    } else {
//        min = beta;
//    }
    
//   Тоже самое, только через условное выражение
//    min = (alpha < beta) ? alpha : beta;
//    cout << min << endl;
    
//   еще условные выражения
//    for (int j = 0; j < 80; j++) {
//        char ch = (j%8) ? ' ': 'x';
//        cout << ch;
//    }
    
//Операция логического "И" и "ИЛИ"
/* Целочисленные выражения тоже могут рассматриваться как булевые,
 x = 0 (false)
 x = 5 (true)
 Выражение x рассматривается как истинное, если его значение не равно 0
 
 Выражение !x будет истинным, если x = 0.
 
 
 */
    char dir = 'a';
        int x = 10, y = 10;
    
        while(dir != 'q') {
            cout << "Ваши координаты: " << x << ", " << y << endl;
            if (x == 5 || x > 15) {
                cout << "Осторожно драконы!\n";
            }
            if (!(x%7) && !(y%7)) {
                cout << "Вы нашли гриб!\n";
            }
            cout << "Выберете направление движения (n, s, e, w): ";
            cin >> dir;
            switch (dir) {
                case 'n':
                    y--;
                    break;
                case 's':
                    y++;
                    break;
                case 'e':
                    x++;
                    break;
                case 'w':
                    x--;
                    break;
                case 'q':
                    cout << "Выход...\n";
                    break;
                default:
                    cout << "Попробуйте еще\n";
            }
            if (x == 7 && y == 11) {
                cout << "Вы нашли сокровище!\n";
                exit(0);
            }
        }
        return 0;
    }
