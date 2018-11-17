#include <iostream>
#include <string>
#include <vector>
#include <map>

using namespace std;

int						main(void)
{
	map<vector<string>, int> buses;
	int nu = 1;
	int q;
	cin >> q;
	
	for (int i = 0; i < q; i++)
	{
		int n;
		cin >> n;
		vector<string> key;
		for (int j = 0; j < n; j++)
		{
			string s;
			cin >> s;
			key.push_back(s);
		}
		if (buses.count(key) == 0)
		{
			buses[key] = nu;
			cout << "New bus " << nu << endl;
			nu++;
		}
		else
			cout << "Already exists for " << buses[key] << endl;
	}

	return (0);
}
