#include <iostream>

using namespace std;

long long count(int i) {
    long long n0 = 0;
    long long n1 = 1;
    long long number;
    int check = 0;
    if (i < 0) {
        i = -i;
        check = 1;
    } 

    for (int j = 0; j < i; j++) {
        number = n0;
        n0 += n1;
        n1 = number;
    }
    if ((check == 1) && (i % 2 == 0)) {
        n0 = -n0;
    }
    return n0;
}

int main() {
    int i;
    cout << "Input i" << endl;
    cin >> i;
    cout << count(i) << endl;
    return 0;
}

//git config -- global user.name "Mona Lisa"
//git config -- global user.email "monalisa@example.org"