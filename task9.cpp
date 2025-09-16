#include <iostream>
using namespace std;

int main() {
    setlocale(0, "");
    int N;
    cout << "Введите количество секунд: ";
    cin >> N;

    int hours = N / 3600;
    int minutes = (N % 3600) / 60;
    int seconds = N % 60;

    cout << "Часы: " << hours << ", Минуты: " << minutes << ", Секунды: " << seconds << endl;

    return 0;
}