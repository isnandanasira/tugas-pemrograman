#include <iostream>
using namespace std;

double luas(double a, double b, double tinggi) {
    return(0.5 * (a + b) * tinggi);
}

int main() {
    double a, b, tinggi;

    cout << "masukkan a: ";
    cin >> a;

    cout << "masukkan b: ";
    cin >> b;

    cout << "masukkan tinggi: ";
    cin >> tinggi;

    cout << "luas trapesium: " << luas(a, b, tinggi) << endl;

    return 0;
}