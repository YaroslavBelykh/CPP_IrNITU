#include <iostream>
using namespace std;

class Complex {
private:
    double r; // Действительная часть
    double i; // Мнимая часть
public:
    Complex(double real = 0, double imag = 0) : r(real), i(imag) {} // Конструктор для действительной и мнимой части

    Complex operator+(const Complex& other) { // Перегрузка оператора сложения
        return Complex(r + other.r, i + other.i);
    }

    Complex operator-(const Complex& other) { // Перегрузка оператора вычитания
        return Complex(r - other.r, i - other.i);
    }

    Complex operator*(const Complex& other) { // Перегрузка оператора умножения
        return Complex(r * other.r - i * other.i, r * other.i + i * other.r);
    }

    Complex operator/(const Complex& other) { // Перегрузка оператора деления
        double denominator = other.r * other.r + other.i * other.i;
        return Complex((r * other.r + i * other.i) / denominator,
                       (i * other.r - r * other.i) / denominator);
    }

    void display() { // Функция вывода знаков комплексного числа
        if (i >= 0)
            cout << r << " + " << i << "i" << endl;
        else
            cout << r << " - " << -i << "i" << endl;
    }
};

int main() {
    setlocale(0,"Russian");
    Complex a(4, 5); // Создание двух комплексных чисел
    Complex b(2, 3);

    Complex sum = a + b;
    cout << "Сложение: ";
    sum.display();

    Complex diff = a - b;
    cout << "Вычитание: ";
    diff.display();

    Complex multi = a * b;
    cout << "Умножение: ";
    multi.display();

    Complex division = a / b;
    cout << "Деление: ";
    division.display();

    return 0;
}
