#include <iostream>
using namespace std;

long long int F(long long int i) {
    if (i<1) return 0;
    if (i==1) return 1;
    return F(i-1) + F(i-2);
    }

int main() {
long long int i;
cin >> i;
if (i < 80) {
    cout << F(i) << endl;
}
return 0;
}
