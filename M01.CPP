#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    setlocale(0, "Russian");
    const int size = 10; //размер таблицы

    cout << "Таблица Пифагора\n\n";
    cout << "\t"; //табуляция для строки

    for (int i = 1; i <= size; ++i){ //строка чисел
        cout << setw(4) << i; //ширина между числами
    }

    cout << "\n";
    cout << "--------------------------------------------------\n"; //разграничительная линия (горизонталь)

    for (int i = 1; i <= size; ++i){ //столбец чисел
        cout << setw(4) << i << "|"; //ширина + разграничительная линия (вертикаль)

        for (int j = 1; j <= size; ++j){
            cout << setw(4) << i * j; //вывод произведения
        }

        cout << "\n"; //перенос строки после завершения внутреннего цикла
    }

    return 0;
}
