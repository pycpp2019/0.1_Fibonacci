#include <iostream>

using namespace std;

int main() {
    int i;
    long long n, a = 1, b = 1;

    cin >> i;
    if (i == 1) {cout << 1; return 0;}
    if (i == 2) {cout << 1; return 0;}

    for (int j = 0 + 2; j < i; j++) {
        n = a + b;
        a = b;
        b = n;
    }

    cout << n;

    return 0;
}