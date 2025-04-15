#include <iostream>
using namespace std;

void sort(int arr[], int size){
    for (int i = 0; i < size - 1; i++){ //сортировка "пузырьком"
        for (int j = 0; j < size - i - 1; j++){
            if (arr[j] < arr[j + 1]){ // Сравниваем элементы

                int temp = arr[j]; // Меняем местами, если элементы идут не по порядку
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main(){
    setlocale(0, "Russian");
    int arr[10] = {1, 8, 3, 6, 5, 4, 9, 2, 8, 12};

    sort(arr, 10);
    cout << "Отсортированный массив: ";
    for (int i = 0; i < 10; i++){
        cout << arr[i] << " ";
    }

    return 0;
}
