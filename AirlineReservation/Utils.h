#pragma once
#include <string>
using namespace std;
class Utils
{
public:
	Utils();
	~Utils();
	
	static bool isValidDate(int month, int day, int year);
	static string toUpper(string s);
	static string toString(int month, int day, int year);
	static void printCalendar(int year,int month);
};

