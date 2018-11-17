#include <iostream>
#include <string>

using namespace std;

int			main(void)
{
	string name;
	cin >> name;
	
	int flag = 0;
	for (int i = 0; i < name.size(); i++)
	{
		if (name[i] == 'f')
		{
			if (flag)
			{
				cout << i;
				return (0);
			}
			else
				flag = 1;
		}
	}
	if (flag)
		cout << -1;
	else
		cout << -2;
	return (0);
}
