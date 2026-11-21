#include<iostream>
using namespace std;

long long fib(int n) {
    long long a, b, c;
    if (n < 1) {
        return 0;
    }
    else if (n == 1) {
        return 1;
    }
    else {
        return fib(n - 1) + fib (n - 2);
    }
}

int main() {
    int n;
    cin >> n;
    cout << fib(n) << endl;
}