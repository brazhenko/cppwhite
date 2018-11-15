#include <iostream>
#include <vector>
#include <string>

using namespace std;

int			main(void)
{
	int n;
	int av = 0;
	cin >> n;
	vector<int> temp(n);
	for (int i = 0; i < n; i++)
	{
		cin >> temp[i];
		av += temp[i];
	}

	av /= n;
	for (int i = 0; i < n; i++)
	{
		if (temp[i] > av)
			cout << i << " ";
	}

	return (0);
}
