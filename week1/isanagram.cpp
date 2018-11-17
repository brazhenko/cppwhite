#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int			main(void)
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		string a, b;
		cin >> a >> b;
		sort(begin(a), end(a));
		sort(begin(b), end(b));
		if (a == b)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	return (0);
}
