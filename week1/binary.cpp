#include <iostream>

using namespace std;

void			bin_printer(int n)
{
	if (n > 1)
		bin_printer(n / 2);
	cout << n % 2;
}

int				main(void)
{
	int n;
	cin >> n;
	bin_printer(n);
	return (0);
}
