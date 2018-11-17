#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> Reversed(const vector<int> &v)
{
	vector<int> b;
	int i = v.size();
	while (i)
	{
		i--;
		b.push_back(v[i]);
	}
	return (b);
}
/*
int			main(void)
{
	vector<int> a = {9, 8, 7, 6, 5, 4, 3, 2, 1};
	vector<int> b = Reversed(a);
	for (auto num : b)
		cout << num;
	return (0);
}
*/

