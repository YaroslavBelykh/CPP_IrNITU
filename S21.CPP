#include <iostream>
#include <fstream>
using namespace std;

int main(){
    setlocale(0, "Russian");
    int A, B;

    cout << "Введите число А: " << endl;
    cin >> A;

    cout << "Введите число В (В>A): " << endl;
    cin >> B;

    if (A>=B){
        cout << "Введите число В > А!"; //Проверка условия
        return 1; //Вывод ошибки, если условие не выполнено
    }

    ofstream outputFile("output.txt");

    for (int i = A; i <= B; ++i){ //Цикл значений от A до B
        outputFile << i * 3 << endl; //Запись значений в файл
    }

    return 0;
}
