#include <iostream>
#include <string>

using namespace std;

class Incognizable
{
	public:
		/*
		Incognizable()
		{
			int a = 0, b = 0;
		}
		Incognizable(int a1)
		{
			int a = a1;
			int b = 0;
		}
		*/
		
		Incognizable(int a1 = 0, int b1 = 1)
		{
			int a = a1, b = b1;
		}
		
};
/*
int main()
{
	Incognizable a;
    Incognizable b = {};
	Incognizable c = {0};
	Incognizable d = {0, 1};
	return 0;
}
*/
