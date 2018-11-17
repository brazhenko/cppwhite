#include <iostream>
#include <string>
#include <vector>

using namespace std;

void		worry(vector<bool> &origin, int index)
{
	origin[index] = 1;
}

void		quiet(vector<bool> &origin, int index)
{
	origin[index] = 0;
}

void		come(vector<bool> &origin, int count)
{
	origin.resize(origin.size() + count);
}
int			main(void)
{
	int n;
	vector<bool> origin;
	string command;
	int	i;
	cin >> n;
	for (int j = 0; j < n; j++)
	{
		cin >> command;
		if (command == "WORRY")
		{
			cin >> i;
			worry(origin, i);
		}
		else if (command == "QUIET")
		{
			cin >> i;
			quiet(origin, i);
		}
		else if (command == "COME")
		{
			cin >> i;
			come(origin, i);
		}
		else if (command == "WORRY_COUNT")
		{
			int sum = 0;
			for (int i = 0; i < origin.size(); i++)
				sum += origin[i];
			cout << sum << endl;
		}
	}
	
	return (0);
}
