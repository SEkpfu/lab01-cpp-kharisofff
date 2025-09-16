#include <iostream>
using namespace std;

int main() {
    setlocale(0, "");
    double a, b, c;
    cout << "Введите три ребра a, b, c: ";
    cin >> a >> b >> c;

    double V = a * b * c;
    double S = 2 * (a * b + b * c + a * c);

    cout << "Объем = " << V << endl;
    cout << "Площадь поверхности = " << S << endl;

    return 0;
}