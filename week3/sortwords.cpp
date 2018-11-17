#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <locale>

using namespace std;

void		printer(vector<string> v)
{
	for (auto i : v)
		cout << i << " ";
	cout << endl;
}

int			ft_str_cmp(string a, string b)
{
	int i = 0;
	while (a[i] && b[i] && tolower(a[i]) == tolower(b[i]))
		i++;
	return (tolower(a[i]) - tolower(b[i]) < 0);
}

int			main(void)
{
	int n;
	cin >> n;
	vector<string> vals;

	for (int i = 0; i < n; i++)
	{
		string j;
		cin >> j;
		vals.push_back(j);
	}
	sort(begin(vals), end(vals), ft_str_cmp);

	printer(vals);

	return (0);
}
