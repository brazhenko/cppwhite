#include <iostream>
#include <map>
#include <string>

using namespace std;

int		main(void)
{
	map<string, int> m;
	int a = m["a"];
	cout << a << endl;
	cout << m.size();
}
