#include <iostream>
#include <iomanip>
#include <fstream>
#include <vector>

using namespace std;

int				main(void)
{
	vector<double> nums = {1, 0.05, 0.000005};
	cout << fixed << setprecision(2):
	for (auto n : nums)
	{
		cout << n  << setw(10) << " ";
	}
	cout << endl;
	for (auto n : nums)
	{
		cout << n << setw(10) << " ";
	}
	return (0);
}
