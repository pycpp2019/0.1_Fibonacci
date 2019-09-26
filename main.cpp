#include <iostream>
using namespace std;
long long int fibonachi(int number){
    long long int a = 1, b = 0;
    for(int i = 0; i < number; i++){
        int k = b;
        b = a + b;
        a = k;
    }
    return b;
}
int main(){
    int number;
    cin >> number;
    cout << fibonachi(number) << endl;
    return 0;
}
