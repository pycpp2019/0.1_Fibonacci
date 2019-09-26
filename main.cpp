
#include <iostream>

using namespace std;

    int Fib(long long i){
    if (i==1) return 0;
    if (i==2) return 1;
    return Fib(i-1)+Fib(i-2);
    }

int main()
    {  long long x;
        cout << "enter number" << endl;
        cin>>x;
    cout<< Fib(x)<<endl;


        return 0;
    }
