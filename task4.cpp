#include <iostream>
using namespace std;

int main() {
    setlocale(0, "");
    double x;
    cout << "Введите x: ";
    cin >> x;
    double x2 = x * x;
    double x4 = x2 * x2;
    double x8 = x4 * x4;
    double x16 = x8 * x8;
    double y = x16 - x4 + x2 - 2;
    cout << "y = " << y << endl;
    return 0;
}
