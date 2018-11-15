#include <iostream>
#include <string>
#include <vector>

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

vector<string> 	PalindromFilter(vector<string> words, int minLength)
{
	vector<string> ready;
	for (string word : words)
	{
		if (IsPalindrom(word) && word.size() >= minLength)
			ready.push_back(word);
	}
	return (ready);
}
/*
int				main(void)
{
	string s, t, q, v;
	cin >> s >> t >> q >> v;
	vector<string> words = {s, t, q, v};
	vector<string> words1 = PalindromFilter(words, 4);
	for (auto w : words1)
		cout << w << " ";
	return (0);
}
*/
