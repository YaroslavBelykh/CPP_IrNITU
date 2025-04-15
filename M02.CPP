#include <iostream>
#include <cmath>
using namespace std;

double Area(double A, int N){
    if (A <= 0 || N < 3){
        cout << "Неверно заданы значения" << endl;
        return 1;
    } else {
        double angle = 3.14f / N;
        double area = (N * A * A) / (4 * tan(angle));
        cout << "Площадь: " << area << endl;
        return area;
    }
}

int main(){
    setlocale(0, "Russian");
    double A, area;
    int N;

    cout << "Введите длину стороны: ";
    cin >> A;

    cout << "Введите количество сторон: ";
    cin >> N;

    area = Area(A, N);

    return 0;
}
