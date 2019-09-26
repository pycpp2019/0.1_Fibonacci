#include <iostream>

using namespace std;

long fibb(int n) {
    if (n <= 2)
        return 1;
    else return fibb(n-1) + fibb(n-2);
}

int main() {
    int n = 4;
    //cin >> n >> endl;
    cout << fibb(n) << endl;
}