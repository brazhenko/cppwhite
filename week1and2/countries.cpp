#include <iostream>
#include <string>
#include <map>

using namespace std;

void		dump(const map<string, string> &book)
{
	if (book.size() == 0)
	{
		cout << "There are no countries in the world" << endl;
		return ;
	}
	for (auto i : book)
	{
		cout << i.first << "/" << i.second << endl;
	}
}

void		about(map<string, string> &book, string country)
{
	if (book.count(country) == 0)
		cout << "Country " << country << " doesn't exist" << endl;
	else
		cout << "Country " << country << " has capital " << book[country] << endl;
}

void		rename(map<string, string> &book, string o_country, string n_country)
{
	if (book.count(o_country) == 0 || n_country == o_country || book.count(n_country) != 0)
	{
		cout << "Incorrect rename, skip" << endl;
	}
	else
	{
		book[n_country] = book[o_country];
		book.erase(o_country);
		cout << "Country " << o_country << " with capital " << book[n_country] << " has been renamed to " << n_country << endl;
	}
}

void		change(map<string, string> &book, string country, string capital)
{
	if (book.count(country) == 0)
		cout << "Introduce new country " << country << " with capital " << capital << endl;
	else if (book[country] == capital)
		cout << "Country " << country <<  " hasn't changed its capital" << endl;
	else if (book[country] != capital)
		cout << "Country " << country << " has changed its capital from " << book[country] << " to " << capital << endl;
	book[country] = capital;
}

int					main(void)
{
	int q;
	cin >> q;
	
	map<string, string> handbook;

	for (int i = 0; i < q; i++)
	{
		string command;
		cin >> command;

		if (command == "CHANGE_CAPITAL")
		{
			string country, capital;
			cin >> country >> capital;
			change(handbook, country, capital);
		}
		else if (command == "RENAME")
		{
			string o_country, n_country;
			cin >> o_country >> n_country;
			rename(handbook, o_country, n_country);
		}
		else if (command == "ABOUT")
		{
			string country;
			cin >> country;
			about(handbook, country);
		}
		else if (command == "DUMP")
		{
			dump(handbook);
		}
	}
	return (0);
}
