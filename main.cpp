#include <iostream>
using namespace std;

long long int F(long long int n) {
    long long int a = 0, b = 1, i;
    if (i <= 2) {
        return 1;
    } else {
        for (i = 3; i <= n; i++) {
            long long int c = a;
            a = a + b;
            b = c;
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
