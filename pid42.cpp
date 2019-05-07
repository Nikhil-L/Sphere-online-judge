
#include<iostream>
using namespace std;

unsigned long long int rev(unsigned long long int a)
{
	unsigned long long int r = 0;

	while(a)
	{
		r = r*10 + a%10;
		a = a/10;
	}
	return r;
}

unsigned long long int cal(unsigned long long int a)
{
	while(1)
	{
		if(a%10 == 0)
		{
			a = a/10;
		}

		else
			break;

	}	
	return a;
}

int main()
{
	unsigned long long int a, b, n;
	cin >> n;
	while(n--)
	{
		cin >> a >> b;
		a = cal(a);
		a = rev(a);
		b = cal(b);
		b = rev(b);
		unsigned long long int sum = rev(a+b);
		sum = cal(sum);
		cout << sum << endl;
	}
	return 0;
}