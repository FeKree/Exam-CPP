#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    setlocale(LC_ALL, "ru");
    double fx, z, x, a, b, y;
    int num;
    cout << "Введите z: " << endl;
    cin >> z;
    cout << "Введите a: " << endl;
    cin >> a;
    cout << "Введите b: " << endl;
    cin >> b;
    cout << "Выберите значение f(x):" << endl;
    cout << "1. 2x" << endl;
    cout << "2. x^2" << endl;
    cout << "3. x/3" << endl;
    cin >> num;
    if (z < -1)
    {
        x = -z / 3;
    }
    else
    {
        x = abs(z);
    }

    if (num == 1)
    {
        fx = 2 * x;
    }
    else if (num == 2)
    {
        fx = pow(x, 2);
    }
    else if (num == 3)
    {
        fx = x / 3;
    }
    else 
    {
        cout << "Неверный выбор f(x)" << endl;
        return 1;
    }
    y = a * fx - log(x + 2.5) + b * (exp(x)-exp(-x));
    cout << "y равен: " << y << endl;
    return 0;
}
