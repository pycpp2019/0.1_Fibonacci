#include <iostream>
using namespace std;
int main(){
	int n;
	long long int num1=0;
	long long int num2=1;
	long long int numres;
	cin>>n;
	if(n==1){
	cout<<0<<endl;	
	}
	else{
	
		for(int i=1;i<n;i++){
			numres=num1+num2;
			num1=num2;
			num2=numres;
		}
	cout<<numres<<endl;
	}
	return 0;
}
