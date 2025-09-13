#include <iostream>
using namespace std;

int main() {
    setlocale(0, "");
    double tC;
    cout << "Введите температуру в градусах Цельсия: ";
    cin >> tC;

    double tF = (9.0 / 5.0) * tC + 32.0;
    double tK = tC + 273.0;

    cout << "Фаренгейт: " << tF << endl;
    cout << "Кельвин: " << tK << endl;

    return 0;
}