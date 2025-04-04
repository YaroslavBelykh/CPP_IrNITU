#include <iostream>
#include <string>
using namespace std;

int main(){
    setlocale(0,"Russian");
    string digits[] = {"Ноль", "Один", "Два", "Три", "Четыре",
                        "Пять", "Шесть", "Семь", "Восемь", "Девять"
    };

    int number;
    cout << "Введите число от 0 до 9: ";
    cin >> number;

    if (number >=0 && number <=9){
        cout << "Название числа: " << digits[number] << endl;
    } else{
        cout << "Пожалуйста, введите число от 0 до 9!";
        return 1;
    }

    return 0;
}
