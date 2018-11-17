#include <iostream>
#include <string>
#include <vector>

using namespace std;

typedef struct	s_day{
	vector<string> todo_list;
}				t_day;

void		print_calendar(const vector<vector<string>> &calendar)
{
	for (int i = 0; i < calendar.size(); i++)
	{
		cout << i << " ";
		for (string deal : calendar[i])
			cout << deal << " ";
		cout << endl;
	}
}

void		add(vector<string> &todo, string deal)
{
	todo.push_back(deal);
}


void		dump(const vector<string> &day)
{
	cout << day.size() << " ";
	for (auto deal : day)
		cout << deal << " ";
	cout << endl;
}

int			main(void)
{
	int n;
	cin >> n;

	int current_month = 0;
	vector<int> days_in_month = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	vector<vector<string>> calendar(days_in_month[current_month] + 1);
	for (int i = 0; i < n; i++)
	{
		string command;
		cin >> command;
		if (command == "ADD")
		{
			int day;
			string deal;
			cin >> day;
			cin >> deal;
			add(calendar[day], deal);
		}
		else if (command == "NEXT")
		{
			current_month += 1;
			current_month %= 12;
			if (days_in_month[current_month] < calendar.size())
			{
				int first_extra_day = days_in_month[current_month] + 1;
				int last_okay_day = first_extra_day - 1;
				for (int i = first_extra_day; i < calendar.size(); i++)
				{
					calendar[last_okay_day].insert(end(calendar[last_okay_day]), begin(calendar[i]), end(calendar[i]));
				}
			}
			calendar.resize(days_in_month[current_month] + 1);
		}
		else if (command == "DUMP")
		{
			int day;
			cin >> day;
			dump(calendar[day]);
		}
		else if (command == "printall")
			print_calendar(calendar);
	}
	// print_calendar(calendar);
	return (0);
}
