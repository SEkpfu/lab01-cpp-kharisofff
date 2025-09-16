#include <iostream>
using namespace std;

int main() {
    setlocale(0, "");
    int n;
    cout << "Введите трехзначное число: ";
    cin >> n;
    int a = n / 100;       
    int b = (n / 10) % 10; 
    int c = n % 10;        
    int m = b * 100 + a * 10 + c;
    cout << "Новое число: " << m << endl;
    return 0;
}
