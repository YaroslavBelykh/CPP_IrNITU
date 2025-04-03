#include <iostream>
using namespace std;

int main(){
    setlocale(0, "Russian");
    int sum = 0; //Калькулятор суммы
    int i = 1; //Число из диапазона 1-1000

    while (i <= 1000) { //Перебор чисел из диапазона
        if (i % 7 ==0) { // Условие (делится на 7 без остатка)
            sum += i; // Сумма чисел, которые делятся на 7 из диапазона
        }
        i += 4; //Шаг (4)
    }

    cout << "Sum: " << sum << endl;

    return 0;
}
