#include <iostream>

#include <map>
#include <string>
using namespace std;

int 		main(void)
{
	string hw = "Hello, world!\n";
	cout <<  hw;
	map<string, int> name_val;
	name_val["one"] = 1;

	name_val["two'"] = 2;

	cout << name_val["one"];
	return (0);
}
