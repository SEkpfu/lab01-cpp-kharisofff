#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;
int main() {
    setlocale(0, "");
    double area;
    cout << "Введите площадь круга S = ";
    cin >> area;
    double radius = sqrt(area / M_PI);
    double length = 2.0 * M_PI * radius;
    cout << "Радиус = " << radius << endl;
    cout << "Длина окружности = " << length << endl;
    return 0;
}