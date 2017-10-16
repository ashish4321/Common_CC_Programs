#include <iostream>

using namespace std;

int main()
{
	long long int exp, base, ans = 1;
	int mod;

	cout << "Enter base: ";
	cin >> base;
	cout << "Enter exponent: ";
	cin >> exp;
	cout << "Enter modular: ";
	cin >> mod;

	while(exp > 0)
	{
		if(exp % 2 == 1)
		{
			ans = (ans * base) % mod;
		}
		exp = exp >> 1;
		base = (base * base) % mod;
	}

	cout << ans;

	return 0;
}
