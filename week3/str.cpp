#include <iostream>
#include <vector>
#include <map>
#include <string>

// using namespace std;

class					ReversibleString
{
	public:
		ReversibleString()
		{
			word1 = "";
		}
		ReversibleString(const string &word)
		{
			word1 = word;
		}
		string				ToString() const
		{
			return (word1);
		}
		void				Reverse()
		{
			int		len = word1.size();
			string temp(len, ' ');
			for (int i = len; i > 0; i--)
			{
				temp[i - 1] = word1[len - i];
			}
			word1 = temp;
		}
	private:
		string word1;
};
/*
int				main(void)
{
	ReversibleString s("live");
  	s.Reverse();
	cout << s.ToString() << endl;
	return (0);
}
*/
