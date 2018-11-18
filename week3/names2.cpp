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
	string GetFullNameHistory(int year)
	{
	
	}
private:
	map<int, map<int, string>> history;
};
/*
int		main(void)
{
	Person person;
	
	person.ChangeFirstName(1965, "Polina");
  	person.ChangeLastName(1967, "Sergeeva");
    cout << person.GetFullName(1965) << endl;

	cout << person.GetFullName(1967) << endl;
	cout << person.GetFullName(1968) << endl;
	return (0);
}
*/
