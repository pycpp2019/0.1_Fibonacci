#include <iostream>
using namespace std;
int main()
{
    long long int data[3];
     data[0]=0;
     data[1]=1;
    long long int i;
    cin>>i;
    if (i>2)
    {
        for (long long int j=3; j<=i; j++)
        {
            data[2]=data[1]+data[0];
            data[0]=data[1];
            data[1]=data[2];
        }
    }else
    {
        data[2]=data[i];
    }
    
    cout<<data[2]<<endl;
    
    return 0;
}