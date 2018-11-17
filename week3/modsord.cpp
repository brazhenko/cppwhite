#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void		printer(vector<int> v)
{
	for (auto i : v)
		cout << i << " ";
	cout << endl;
}

int			main(void)
{
	int n;
	cin >> n;
	vector<int> vals;

	for (int i = 0; i < n; i++)
	{
		int j;
		cin >> j;
		vals.push_back(j);
	}
	sort(begin(vals), end(vals), [](int x, int y){return abs(x) < abs(y);});

	printer(vals);
	return (0);
}
