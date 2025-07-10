#include <iostream>
using namespace std;

int main() {
    const int MAX_SIZE = 10;
    int arr[MAX_SIZE];
    int n;

    // Ввод размера массива
    cout << "Введите количество элементов (не более 10): ";
    cin >> n;

    // Проверка корректности размера
    if (n > MAX_SIZE || n <= 0) {
        cout << "Недопустимый размер массива!" << endl;
        return 1;
    }

    // Ввод элементов массива
    cout << "Введите " << n << " элементов массива: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Поиск индексов минимального и максимального элементов
    int min_idx = 0, max_idx = 0;
    for (int i = 1; i < n; i++) {
        if (arr[i] < arr[min_idx]) min_idx = i;
        if (arr[i] > arr[max_idx]) max_idx = i;
    }

    // Вычисление произведения элементов между min и max
    long long product = 1;
    int start = min(min_idx, max_idx) + 1;
    int end = max(min_idx, max_idx);

    if (end - start <= 0) {
        cout << "Между минимальным и максимальным элементами нет чисел" << endl;
    }
    else {
        for (int i = start; i < end; i++) {
            product *= arr[i];
        }
        cout << "Произведение элементов между min и max: " << product << endl;
    }

    return 0;
}
