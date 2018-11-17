#include <string>
#include <vector>
#include <iostream>

using namespace std;

void		Reverse(vector<int> &v)
{
	vector<int> b;
	int i = v.size();
	while (i)
	{
		i--;
		b.push_back(v[i]);
	}
	v = b;
}

/*
int			main(void)
{
	vector<int> a = {9, 8, 7, 6, 5, 4, 3, 2, 1};
	Reverse(a);
	for (auto num : a)
		cout << num;
	return (0);
}
*/
