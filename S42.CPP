#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    setlocale(0, "Russian");
    const int  size = 10;
    int a[size] = {1, 8, 3, 6, 5, 4, 9, 2, 8, 12};
    sort (a, a + size, greater<int>()); //greater - для сортировки по убыванию
    for (int i = 0; i < size; ++i) {
        cout << a[i] << " ";
}
    return 0;
}
