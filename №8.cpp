#include <iostream>
#include<ctime>

using namespace std;

int main() {

    setlocale(LC_ALL, "ru");

    const int n = 3, m = 3;
    int arr[n][m];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << "введите элемент" << i + 1 << j + 1 << " :" << endl;
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        bool has_negative = false;
        for (int j = 0; j < m; j++) {
            if (arr[i][j] < 0) {
                has_negative = true;
                break;
            }
        }
        if (has_negative) {
            int result = 0;
            for (int j = 0; j < m; j++) {
                result += arr[i][j];
            }
            cout << "сумма элементов в строке " << i + 1 << ": " << result << endl;
        }
        else cout << "в строке " << i + 1 << " нету отрицательных элементов" << endl;
    }

}
