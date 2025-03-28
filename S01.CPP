#include <iostream>
using namespace std;

int main() {
    setlocale(0, "Russian");
    int a = 8; // Переменная целого числа
    double b = 4.5; // Вещественное число двойной точности
    float c = 2.0f; // Вещественное число одинарной точности
    long d = 58541; // Целочисленная переменная (в диапазоне от -2 147 483 648 до 2 147 483 647)

    // Арифметические операторы
    cout << "Сложение int + double: " << a + b << endl;
    cout << "Вычитание float - long: " << c - d << endl;
    cout << "Умножение double * int: " << b * a << endl;
    cout << "Деление int / float: " << a / c << endl;

    return 0;
}
