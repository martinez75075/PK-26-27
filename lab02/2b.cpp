// Wybierz precyzję:
// [1] pojedyncza precyzja
// [2] podwójna precyzja
// Wybór: 1
// Podaj a: 1
// Podaj b: 3
// Suma: 4.000000000000
// Różnica: -2.000000000000
// Iloczyn: 3.000000000000
// Iloraz: 0.333333343267


// Wybierz precyzję:
// [1] pojedyncza precyzja
// [2] podwójna precyzja
// Wybór: 2
// Podaj a: 1
// Podaj b: 3
// Suma: 4.000000000000
// Różnica: -2.000000000000
// Iloczyn: 3.000000000000
// Iloraz: 0.333333333333


// Wybierz precyzję:
// [1] pojedyncza precyzja
// [2] podwójna precyzja
// Wybór: 1
// Podaj a: 0.12345
// Podaj b: 10000000
// Suma: 10000000.000000000000
// Różnica: -10000000.000000000000
// Iloczyn: 1234500.000000000000
// Iloraz: 0.000000012345


// Wybierz precyzję:
// [1] pojedyncza precyzja
// [2] podwójna precyzja
// Wybór: 3
// Niepoprawny wybór

#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int precyzja;
    cout << "Wybierz precyzję: " << endl << "[1] pojedyncza precyzja" << endl << "[2] podwójna precyzja" << endl << "Wybór: ";
    cin >> precyzja;
    if (precyzja == 1){
        float a, b, suma, roznica, iloczyn, iloraz;
        cout << "Podaj a: ";
        cin >> a;
        cout << "Podaj b: ";
        cin >> b;
        suma = a + b;
        roznica = a - b;
        iloczyn = a * b;
        iloraz = a / b;
        cout << fixed << setprecision(12);
        cout << "Suma: " << suma << endl;
        cout << "Różnica: " << roznica << endl;
        cout << "Iloczyn: " << iloczyn << endl;
        cout << "Iloraz: " << iloraz << endl;

    }
    else if (precyzja == 2){
        double a, b, suma, roznica, iloczyn, iloraz;
        cout << "Podaj a: ";
        cin >> a;
        cout << "Podaj b: ";
        cin >> b;
        suma = a + b;
        roznica = a - b;
        iloczyn = a * b;
        iloraz = a / b;
        cout << fixed << setprecision(12);
        cout << "Suma: " << suma << endl;
        cout << "Różnica: " << roznica << endl;
        cout << "Iloczyn: " << iloczyn << endl;
        cout << "Iloraz: " << iloraz << endl;
    }
    else {
        cout << "Niepoprawny wybór" << endl;
    }
    return 0;
}