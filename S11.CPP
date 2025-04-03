#include <iostream>
using namespace std;

int main(){
    //Деление нацело:
    setlocale(0, "Russian");
    int a;
    int b;
    cout << "Введите число для деления нацело: ";
    cin >> a;
    cout << "Введите число, на которое нужно разделить: ";
    cin >> b;
    cout << "Результат: " << a/b << endl;


    //Определение остатка от деления:
    int c;
    int d;
    cout << "Введите число для деления с остатком: ";
    cin >> c;
    cout << "Введите число, на которое нужно разделить: ";
    cin >> d;
    cout << "Результат: " << c/d << endl << "Остаток: " << c%d;
    return 0;
}
