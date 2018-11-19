#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int			main(void)
{
	
	ifstream input("input.txt");
	ofstream output("output.txt", ios::app);
	string line;
	while (getline(input, line))
	{
		output << line << endl;
	}
	return (0);
}
