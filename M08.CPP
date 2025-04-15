#include <iostream>
#include <math.h>
using namespace std;

double get_angle(double a, double b, double c){

    double angle_rad = acos((b * b + c * c - a * a) / (2 * b * c)); //
    double angle_deg = angle_rad * (180.0 / M_PI); // Переводим радианы в градусы

    return angle_deg;
}

int main(){
    setlocale(0, "Russian");
    double a, b, c;
    cout << "Введите длины сторон треугольника (a, b, c): ";
    cin >> a >> b >> c;
    if (a <= 0 || b <= 0 || c <= 0) {  //проверка исходных значений
        cerr << "Длины сторон должны быть больше 0!" << endl;
        return 1;
    }

    double angle = get_angle(a, b, c);
    if (angle != -1) { // Проверка на корректность результата
        cout << angle << " градусов" << endl;
        return 0;
    }


}
