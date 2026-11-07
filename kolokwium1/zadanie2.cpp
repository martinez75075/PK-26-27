#include <iostream> 
#include <iomanip>
using namespace std;

int main() {
    float cisnienie;
    int jednostka;

    cout << "Podaj wartość ciśnienia: ";
    cin >> cisnienie;
    if (cisnienie < 0) {
        cout << "Wartość nie może być ujemna." << endl;
        return 1;
    }

    cout << "Podaj jednostkę [1] kPa [2] hPa: ";
    cin >> jednostka;
    cout << fixed << setprecision(2);

    if (jednostka == 1) {
        cout << cisnienie << " hPa = " << cisnienie * 10 << " kPa" << endl;
    }
    else if (jednostka == 2) {
        cout << cisnienie << " kPa = " << cisnienie / 10 << " hPa" << endl;
    }
    else {
        cout << "Niepoprawny wybór jednostki." << endl;
    }
    return 0;
}