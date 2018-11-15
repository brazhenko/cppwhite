#include <iostream>

using namespace std;

int				Factorial(int n)
{
	if (n == 0 || n == 1)
		return (1);
	else if (n < 0)
		return (1);
	else
		return (Factorial(n - 1) * n);
}

int				main(void)
{
	int n;
	cin >> n;
	cout << Factorial(n);
	return (0);
}
