#include <iostream>
#include <cmath>
using namespace std;

int			main(void)
{
	double a, b, c, x1, x2;
	cin >> a >> b >> c;
	if (a == 0 && b == 0)
	{
		return (0);
	}
	else if (a == 0)
	{
		cout << -c / b;	
	}
	else
	{
		if (b * b - 4 * a * c >= 0)
		{
			x1 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
			x2 = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);
			if (x1 == x2)
				cout << x1;
			else
				cout << x1 << " " << x2;
		}
	}

	return (0);
}
