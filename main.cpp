#include <iostream>

using namespace std;

int main(){
    int number;
    cin >> number;
    int64_t a = 1, b = 0;
    for(int i = 0; i < number; i++){
        int64_t k = b;
        b = a + b;
        a = k;
    }
    cout << b << endl;
    return 0;
}
