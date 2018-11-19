#include <iostream>
#include <fstream>
#include <iomanip>


using namespace std;

int				main(void)
{
	ifstream input("input.txt");
	double nu;
	string n;
	cout << fixed << setprecision(3);
	if (input)
	{
		while (input >> nu) 
		{
			cout << nu << endl;
		}

	}
	return (0);
}
