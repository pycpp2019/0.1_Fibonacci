#include <iostream>
using namespace std;

int main()
{
	long long int a,b,k;
	int n;
	a = 1;
	b = 1;
	cin >> n;
	for (int i = 0; i < n - 2; i++)
	{
		k = b;
		b = a + b;
		a = k;
	}
	cout << b << endl;
	return 0;
}