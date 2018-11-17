#include <iostream>
#include <string>

using namespace std;

bool			IsPalindrom(string s)
{
	int len = s.size();
	if (len < 2)
		return true;
	
	for (int i = 0; i <= len / 2; i++)
	{
		if (s[i] != s[len - 1 - i])
			return false;
	}
	return true;
}

int				main(void)
{
	string s;
	cin >> s;
	if (IsPalindrom(s))
		cout << "true";
	else
		cout << "false";
	return (0);
}
