#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int			main(void)
{
	vector<string> strs = {"", "", ""};
	cin >> strs[0] >> strs[1] >> strs[2];
	sort(begin(strs), end(strs));
	cout << strs[0];
	return (0);
}
