#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    const int n = 3; // Количество строк
    const int m = 4; // Количество столбцов
    int array[n][m];
    
    // Инициализация генератора случайных чисел
    srand(time(0));
    
    // Заполнение массива случайными числами от -5 до 6
    cout << "Исходный массив:" << endl;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            array[i][j] = rand() % 12 - 5; // Генерация чисел от -5 до 6
            cout << array[i][j] << "\t";
        }
        cout << endl;
    }
    
    // Проверка строк и вычисление произведения
    bool hasPositiveRows = false;
    for(int i = 0; i < n; i++) {
        bool hasNegative = false;
        // Проверка на наличие отрицательных элементов в строке
        for(int j = 0; j < m; j++) {
            if(array[i][j] < 0) {
                hasNegative = true;
                break;
            }
        }
        
        // Если в строке нет отрицательных элементов, вычисляем произведение
        if(!hasNegative) {
            hasPositiveRows = true;
            long long product = 1; // Используем long long для больших произведений
            for(int j = 0; j < m; j++) {
                product *= array[i][j];
            }
            cout << "Произведение элементов в строке " << i + 1 << ": " << product << endl;
        }
    }
    
    // Если не найдено строк без отрицательных элементов
    if(!hasPositiveRows) {
        cout << "В массиве нет строк без отрицательных элементов" << endl;
    }
    
    return 0;
}
