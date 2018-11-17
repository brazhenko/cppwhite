#include <string>
#include <set>
#include <iostream>

using namespace std;

int			main(void)
{
	int n;
	cin >> n;
	
	set<string> us;

	for (int i = 0; i < n; i++)
	{
		string k;
		cin >> k;
		us.insert(k);
	}
	cout << us.size();
	return (0);
}
