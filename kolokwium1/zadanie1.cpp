#include <iostream>
using namespace std;

int main(){
    int n, max, min, temp;
    cout << "Liczba pomiarów: ";
    cin >> n;
    while (n <= 0) {
        cout << "Liczba pomiarów musi być większa od zera." << endl;
        cout << "Liczba pomiarów: ";
        cin >> n;
    }
    cout << "Podaj temperatury: ";
    cin >> temp;
    max = temp;
    min = temp;
    for (int i = 1; i < n; i++) {
        cin >> temp;
        if (temp > max) {
            max = temp;
        }
        else if (temp < min) {
            min = temp;
        }
    }
    if (max == min) {
        cout << "Wszystkie temperatury są takie same: " << max << endl;
    }
    else {
        cout << "Najwyższa temperatura: " << max << endl;
        cout << "Najniższa temperatura: " << min << endl;
        cout << "Różnica: " << max - min << endl;
    }
    return 0;
}