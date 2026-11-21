#include<iostream>
using namespace std;

long long silnia(int n) {
    if (n < 1) {
        return 1;
    }
    else {
        return n * silnia(n - 1);
    }
}

int main() {
    int n;
    cin >> n;
    cout << silnia(n) << endl;
}