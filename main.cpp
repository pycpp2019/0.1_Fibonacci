#include <iostream>
using namespace std;

int F(int n) {
    int a = 0, b = 1, i;
    if (i <= 2) {
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
    int n;
    cin >> n;
    cout << F(n) << endl;
    return 0;
}
