#include<iostream>
using namespace std;

long long potegowanie(int p, int w) {
    long long wynik;
    if (w == 0) {
        return 1;
    }
    else {
        return p * potegowanie(p, w - 1);
    }
}

int main() {
    int p, w;
    cin >> p >> w;
    cout << potegowanie(p, w) << endl;
}