// Napisz program, który wczytuje znak do zmiennej char na następnie wypisuje na ekran znak i jego kod ASCII w postaci dziesiętnej i szesnastkowej.

// Wyjście:

// Podaj znak: a
// Znak: 'a'
// Kod: 97 (0x61)

#include <iostream>
using namespace std;

int main (){
    char a;
    cout << "Podaj znak: ";
    cin >> a;
    cout << "Znak: " << "'" << a << "'" << endl;
    cout << "Kod: " << static_cast<int>(a);
    cout << showbase << hex << " (" <<static_cast<int>(a) << ")" << endl;
    
    return 0;
}