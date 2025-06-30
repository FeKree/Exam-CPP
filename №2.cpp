#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    setlocale(LC_ALL, "ru");
    double x;
    cout << "Введите x: " << endl;
    cin >> x;
    double y;
    cout << "Введите y: " << endl;
    cin >> y;
    double z;
    cout << "Введите z: " << endl;
    cin >> z;
    double h = (pow(x, y + 1) + exp(y - 1)) / 1 + x * abs(y - tan(z)) * (1 + abs(y - x)) + (pow(abs(y - x), 2) / 2) - (pow(abs(y - x), 3) / 3);
    cout << "Итог: " << h << endl;
    return 0;
}
