#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <string>

using namespace std;

void											new_bus(map<string, vector<string>> &buses, map<string, vector<string>> &stops, string bus, string stop)
{
	(buses[bus]).push_back(stop);
	(stops[stop]).push_back(bus);
}

void											print_map(map<string, vector<string>> &any)
{
	cout << "! ";
	for (auto c : any)
	{
		for (auto k : any[c.first])
			cout << k << " ";
	}
	cout << endl;
}

void											print_buses(string stop, vector<string> &buses)
{
	cout << "Bus" << " " <<  stop << ":";
	for (auto bus : buses)
	{
		cout << " " << bus;
	}
	cout << endl;
}

void											print_stops(string stop, vector<string> &buses)
{
	for (auto bus : buses)
	{
		cout << bus << " ";
	}
	cout << endl;
}

int				main(void)
{
	int q;
	cin >> q;

	
	map<string, vector<string>> buses;
	map<string, vector<string>> stops;
	
	for (int i = 0; i < q; i++)
	{
		string command;
		cin >> command;
		

		if (command == "NEW_BUS")
		{
			string bus;
			int stops_count;

			cin >> bus;
			cin >> stops_count;
			for (int i = 0; i < stops_count; i++)
			{
				string stop;
				cin >> stop;
				new_bus(buses, stops, bus, stop);
			}
		}
		else if (command == "BUSES_FOR_STOP")
		{
			string stop;
			cin >> stop;
			if (stops.count(stop) == 0)
				cout << "No stop" << endl;
			else
				print_stops(stop, stops[stop]);
		}
		else if (command == "STOPS_FOR_BUS")
		{
			string bus;
			cin >> bus;
			if (buses.count(bus) == 0)
				cout << "No bus" << endl;
			else
				print_buses(bus, buses[bus]);

		}
		else if (command == "ALL_BUSES")
		{
			if (buses.size() == 0)
				cout << "No buses" << endl;
			else
			{
				for (auto b : buses)
				{
					print_stops(b.first, buses[b.first]);	
				}
			}
		}
	}
	return (0);
}
