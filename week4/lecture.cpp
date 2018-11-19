#include <iostream>
#include <string>
#include <vector>

// using namespace std;

struct			Specialization{
	string s;
	explicit Specialization(const string &data)
	{
		s = data;
	}
};

struct			Course{
	string c;
	explicit Course(const string &data)
	{
		c = data;
	}

};

struct			Week{
	string w;
	explicit Week(const string &data)
	{
		w = data;
	}
};

struct			LectureTitle {
	string specialization;
	string course;
	string week;

	LectureTitle(Specialization new_s, Course new_c, Week new_w)
	{
		specialization = new_s.s;
		course = new_c.c;
		week = new_w.w;
	}
};
/*
int		main(void)
{
	LectureTitle title(Specialization("C++"), Course("White belt"), Week("4"));

	return (0);
}
*/
