#include <iostream>
using namespace std;

int main() {
    char znak;
    int wartosc;
    cout << "Podaj znak: ";
    cin >> znak;

    cout << "Znak: '" << znak << "'" << endl;
    wartosc = static_cast<int>(znak);
    
    if (wartosc >= 65 && wartosc <= 90) {
        cout << "Rodzaj: wielka litera" << endl;
    }
    else if (wartosc >= 97 && wartosc <= 122) {
        cout << "Rodzaj: mała litera" << endl;
    }
    else if (wartosc >= 48 && wartosc <= 57) {
        cout << "Rodzaj: cyfra" << endl;
    }
    else {
        cout << "Rodzaj: inny znak" << endl;
    }
    cout << "Kod dziesiętnie: " << wartosc << endl;
    cout << "Kod szesnastkowo: " << showbase << hex << wartosc << endl;

    return 0;
}