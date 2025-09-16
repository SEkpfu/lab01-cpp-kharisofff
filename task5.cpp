
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    setlocale(0, "");
    double x, y;
    cin >> x >> y;
    double a = x * log(x) + y / (cos(x) - x / 3.0);
    double b = sin(sqrt(x + 1.0)) - sin(sqrt(x - 1.0));
    cout << showpos << fixed << setprecision(5) << a << endl;
    cout << scientific << b << endl;
    return 0;
}
