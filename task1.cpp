#include <iostream>
#include <cmath>
using namespace std;

int main() {
    setlocale(0, "");
    double r1, r2;
    cout << "Введите R1 и R2: ";
    cin >> r1 >> r2;
    double s1 = M_PI * r1 * r1;
    double s2 = M_PI * r2 * r2;
    double s3 = s1 - s2;
    cout << "S1 = " << s1 << endl;
    cout << "S2 = " << s2 << endl;
    cout << "S3 = " << s3 << endl;
    return 0;
}
