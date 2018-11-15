#include <iostream>
#include <vector>
#include <string>

using namespace std;

void		MoveStrings(vector<string> &source, vector<string> &destination)
{
	for (auto str : source)
		destination.push_back(str);
	source.clear();
}
/*
int			main(void)
{
	vector<string> s = {"ab", "cd", "ef", "gh"};
	vector<string> d = {"zz", "ww", "yy", "kk"};
	MoveStrings(s, d);

	for (auto str : d)
		cout << str << " ";
	cout << "\nHEHEY!\n";
	for (auto str : s)
		cout << str;
	
	return (0);
}

*/
