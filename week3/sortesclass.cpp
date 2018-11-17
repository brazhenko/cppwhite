#include <iostream>
#include <set>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

class SortedStrings
{
	public:
		void	AddString(const string &s)
		{
			words.push_back(s);
			sort(begin(words), end(words));
		}
		
		vector<string> GetSortedStrings()
		{
			return words;
		}
	private:
		vector<string> words;
};

/*
int					main(void)
{
	SortedStrings strings;
	strings.AddString("idi");
	strings.AddString("na");
	strings.AddString("hui");

	vector<string> n = strings.GetSortedStrings();
	for (auto i : n)
		cout << i << " ";
	return (0);
}
*/
