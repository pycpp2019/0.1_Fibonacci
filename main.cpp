#include <iostream>
using namespace std;
long long int fibonachi(int number){
    long long int a = 0,b = 1;
    for(int i=0;i < number;i++){
        b = a + b;
        a = b - a;
    }
    return b;
}
int main(){
    int number;
    cin >> number;
    cout << fibonachi(number) << endl;
    return 0;
}
