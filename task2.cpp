#include <iostream>
using namespace std;

int main() {
    setlocale(0, "");
    double a, b;
    cout << "Введите два числа: ";
    cin >> a >> b;
    cout << "Сумма = " << a + b << endl;
    cout << "Разность = " << a - b << endl;
    cout << "Произведение = " << a * b << endl;

    return 0;
}