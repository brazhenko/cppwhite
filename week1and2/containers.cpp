#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int			main(void)
{
	string name = "Andrew";
	vector<int> nums = {9, 8, 6, 4, 3, 2, 1};
//	for (int i = 0; i < name.size(); i++)
//	{
//		cout << name[i] << "\n";
//	}
	sort(begin(nums), end(nums));

	for (auto c : nums)
	{
		cout << c;
	}
	int a;
	cin >>  a;
	cout << a;
	return (0);
}
