#include <iostream>
using namespace std;

int main() {
    setlocale(0, "");
    const double PI = 3.14159;
    double r;
    cout << "Введите радиус шара: ";
    cin >> r;
    double V = (4.0 / 3.0) * PI * r * r * r;
    cout << "Объем шара = " << V << endl;
    return 0;
}