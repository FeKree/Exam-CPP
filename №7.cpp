#include <iostream>
#include <ctime>

using namespace std;

int main() {

    setlocale(LC_ALL, "ru");

    int first, second, sum = 0;
    const int n = 7;
    int arr[n];

    srand(time(0));

    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 9 - 4; // Генерация чисел от -4 до 4
        cout << arr[i] << " ";
    }

    for (int x = 0; x < n; x++) {
        if (arr[x] < 0) {
            first = x;
            break;
        }
    }
    for (int x = first + 1; x < n; x++) {
        if (arr[x] < 0) {
            second = x;
            break;
        }
    }

    for (int x = first + 1; x < second; x++) {
        sum += arr[x];
    }

    cout << "сумма :" << sum;
}
