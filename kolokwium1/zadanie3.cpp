#include <iostream>
using namespace std;

int main(){
    int N;

    cout << "Podaj rozmiar: ";
    cin >> N;
    
    if (N < 3 || N > 21 || N % 2 == 0) {
        cout << "Nieprawidłowy rozmiar." << endl;
        return 1;
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++){
            if (i == N / 2) {
                cout << "+";
            }
            else if (j == N / 2) {
                cout << "+";
            }
            else {
                cout << ".";
            }
        }
        cout << endl;
    }
    return 0;
}