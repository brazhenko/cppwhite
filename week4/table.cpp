#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <iomanip>

using namespace std;

int				main(void)
{
	ifstream input("input.txt");
	
	int nu;
	int n , m;
	vector<vector<int>> table;

	input >> n;
	input >> m;


	for (int i = 0; i < n; i++)
	{
		// vector<int> temp;
		for (int j = 0; j < m; j++)
		{
			// getline(input, nu, ',');
			input >> nu;
			input.ignore(1);

			cout << setw(10) << nu;
			if (j != m - 1)
				cout << " ";
			// temp.push_back(nu);
		}
		cout << endl;
		// table.push_back(temp);
	}
	/*
	for (auto s : table)
	{
		for (auto n : s)
		{
			cout << setw(10) << n;
		}
		cout << endl;
	}
	*/
	return (0);
}
