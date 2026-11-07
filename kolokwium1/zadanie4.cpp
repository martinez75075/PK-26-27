#include <iostream>
using namespace std;

int main() {
    int A, B, suma = 0;
    cout << "Podaj A: ";
    cin >> A;
    cout << "Podaj B: ";
    cin >> B;

    if (A >= B) {
        cout << "Błąd: A musi być mniejsze lub równe B." << endl;
        return 2;
    }

    if (A + (3 - A % 3) > B) {
        cout << "Brak liczb spełniających warunek." << endl;;
        return 1;
    }

    for (int i = A; i <= B; i++) {
        if (i % 2 == 1 && i % 3 == 0) {
            suma += i;
        }
    }
    cout << "Suma liczb nieparzystych i podzielnych przez 3 z przedziału [" << A << ", " << B << "] wynosi: "<< suma << endl;
    return 0;
}