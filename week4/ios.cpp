#include <iostream>
#include <fstream>

using namespace std;

int			main(void)
{
	ifstream input("hello.txt");
	
	int a, b, c, d;

	ofstream output("output.txt", ios::app);
	output << 11 << endl;
	
	/*
	if (input)
	{
		input >> a;
		input.ignore(1);
		input >> b;
		input.ignore(1);

	
	
			while (getline(input, line))
			{
				cout << line << endl;
			}
	
	}
	else
	{
		cout << "Error!" << endl;
	}

	cout << a << ' ' << b;
	*/
	return (0);	
}
