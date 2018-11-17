#include <iostream>
#include <map>
#include <vector>
#include <set>
#include <string>

using namespace std;

set<string> BuildMapValuesSet(const map<int, string>& m)
{
	set<string> mp;
	for (auto c : m)
	{
		mp.insert(c.second);
	}
	return (mp);
}
