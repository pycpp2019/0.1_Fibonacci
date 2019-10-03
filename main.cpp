#include <iostream>
using namespace std;

long long int F(long long int n) {
    long long int a = 0, b = 1, i;
    if (n <= 2) {
        return 1;
    } else {
        for (i = 3; i <= n; i++) {
            a = a + b;
            b = a - b;
        }
        return a;
    }
}

int main() {
    long long int n;
    cin >> n;
    cout << F(n) << endl;
    return 0;
}
