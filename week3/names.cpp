#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

class Person {
public:
	void ChangeFirstName(int year, const string &first_name)
	{
		history[year][0] = first_name;
	}
	void ChangeLastName(int year, const string &last_name)
	{
		history[year][1] = last_name;
	}
	string GetFullName(int year)
	{
		if (history[year][0] == "" && history[year][1] == "")
			return ("Incognito");
		else if (history[year][0] == "" && history[year][1] != "")
			return (history[year][1] + " with unknown first name");
		else if (history[year][0] != "" && history[year][1] == "")
			return (history[year][0] + " with unknown last name");
		else
			return (history[year][0] + " " + history[year][1]);
	}
private:
	map<int, map<int, string>> history;
};

int		main(void)
{
	 Person person;
	   
	     person.ChangeFirstName(1965, "Polina");
		   person.ChangeLastName(1967, "Sergeeva");
		     for (int year : {1900, 1965, 1990}) {
			     cout << person.GetFullName(year) << " " << year << endl;
				   }
	
	return (0);
}

