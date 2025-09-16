#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;
int main() {
    setlocale(0, "");
    double r, h;
    cout << "Введите радиус и высоту цилиндра: ";
    cin >> r >> h;
    double V = M_PI * r * r * h;
    double S = 2 * M_PI * r * (r + h);
    cout << "Объем = " << V << endl;
    cout << "Площадь поверхности = " << S << endl;
    return 0;
}