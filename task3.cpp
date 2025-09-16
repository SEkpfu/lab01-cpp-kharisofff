#include <iostream>
#include <cmath>
using namespace std;

int main() {
    setlocale(0, "");
    double a, b, c;
    cout << "Введите три числа: ";
    cin >> a >> b >> c;
    double ar = (a + b + c) / 3.0;
    double gm = pow(a * b * c, 1.0/3.0);
    (ar < 10) ? cout << ar << " " << gm : cout << (a < c ? a : c);
    return 0;
}
