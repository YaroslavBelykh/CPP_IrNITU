#include <iostream>
#include <fstream>

using namespace std;

int main(){
    ifstream inputFile("output.txt"); // открытие файла

    int number;
    int n = 1;

    while (inputFile >> number) { //цикл, который работает до тех пор, пока в файле есть числа
        cout << n << ". " << number << endl;
        n++; //сумматор порядкового номера
    }

    return 0;
}
