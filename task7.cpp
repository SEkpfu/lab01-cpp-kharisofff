#include <iostream>
using namespace std;
int main() {
    setlocale(0, "");
    int a, b;
    cout << "Введите два целых числа: ";
    cin >> a >> b;
    int sum = (a % 10) + (b % 10);
    cout << "Сумма последних цифр = " << sum << endl;
    return 0;
}