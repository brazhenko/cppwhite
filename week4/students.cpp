#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct				Student{
	string name;
	string surname;
	int day;
	int month;
	int year;
};


int				main(void)
{
	vector<Student> book;
	
	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		string name;
		string surname;
		int d, m, y;
		cin >> name >> surname >> d >> m >> y;
		book.push_back({name, surname, d, m , y});
	}

	int m;
	cin >> m;

	for (int j = 0; j < m; j++)
	{
		string command;
		cin >> command;
		if (command == "name")
		{
			int i;
			cin >> i;
			if (n >= i && i > 0)
				cout << book[i - 1].name << " " << book[i - 1].surname << endl;
			else
				cout << "bad request" << endl;
		}
		else if (command == "date")
		{
			int i;
			cin >> i;
			if (n >= i && i > 0)
				cout << book[i - 1].day << "." << book[i - 1].month << "." << book[i - 1].year << endl;
			else
				cout << "bad request" << endl;
		}
		else 
		{
			cout << "bad request" << endl;
		}
	}
	return (0);
}
