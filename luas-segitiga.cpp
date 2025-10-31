#include <iostream>
using namespace std;

double luas(double alas, double tinggi) {
    return 0.5 * alas * tinggi;
}

int main() {
    double alas, tinggi;

    cout << "alas segitiga: ";
    cin >> alas;

    cout << "tinggi segitiga: ";
    cin >> tinggi;

    cout << "Luas segitiga: " << luas(alas, tinggi) << endl;

    return 0;
}
   