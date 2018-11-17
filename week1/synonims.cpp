#include <iostream>
#include <set>
#include <vector>
#include <map>

using namespace std;

int				search(vector<set<string>> &dict, string word)
{
	for (int i = 0; i < dict.size(); i++)
	{
		if (dict[i].count(word) > 0)
			return (i);
	}
	return (-1);
}

int			main(void)
{
	int q;
	cin >> q;

	vector<set<string>> dict;

	for (int i = 0; i < q; i++)
	{
		string command;
		cin >> command;
		if (command == "ADD")
		{
			string a, b;
			cin >> a >> b;
			int search_res = search(dict, a);
			if (search_res == -1)
			{
				set<string> tmp = {a, b};
				dict.push_back(tmp);
			}
			else 
			{
				dict[search_res].insert(b);
			}
		}
		else if (command == "COUNT")
		{
			string word;
			cin >> word;

			int count = 0;
			for (int i = 0; i < dict.size(); i++)
			{
				if (dict[i].count(word) > 0)
					count = ((dict[i].size()) - 1);
				cout << count << endl;
			}
		}
		else if (command == "CHECK")
		{
			string a, b;
			cin >> a >> b;

			if (search(dict, a) == -1)
			{
				cout << "NO" << endl;
			}
			else if (dict[search(dict, a)].count(b) > 0)
			{
				cout << "YES" << endl;
			}
			else
				cout << "NO" << endl;
		}
	}
	return (0);
}
