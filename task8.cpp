#include <iostream>
using namespace std;
int main() {
    setlocale(0, "");
    int n;
    cout << "Введите четырёхзначное число: ";
    cin >> n;
    int first = n / 1000;
    int last = n % 10;
    cout << "Первая цифра = " << first << endl;
    cout << "Последняя цифра = " << last << endl;
    return 0;
}