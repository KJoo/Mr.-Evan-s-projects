#include "Date.h"

using namespace std;

// Default constuctor which sets the date to January 1, 2016
Date::Date()
: day(1), month(1), year(2016), monthName("January")
{	
}

// Constructor which sets the date to m/d/y. Don't forget to set the month
// name as well. You must make sure that the user cannot input an invalid
// date. If the user does not input an invalid date, then your program must
// print an error message and construct a date to the closest valid date.
//
// Example:
// Date a(3, 33, 2016);
//
// Output:
// Invalid date: Setting date to 3 / 31 / 2016
//
// Example:
// Date a(13, 33, 2232);
//
// Output:
// Invalid date: Setting date to 12 / 31 / 2232
Date::Date(unsigned m, unsigned d, unsigned y)
{
	month = m;
	day = d;
	year = y;
}

// Constructor which sets the date to mn d, y. Don't forget to set the month 
// number as well!
//
// If the user inputs an invalid date then it must correct it and print an 
// error message, similar to what we have above.
Date::Date(const string &mn, unsigned d, unsigned y)
{
	monthName = mn;
	day = d;
	year = y;

	if(y > 12)
	{
		y = 12;
	}
	else if(y < 1)
	{
		y = 1;
	}
	else if(d > daysPerMonth)
	{
		m = daysPerMonth;
	}
	else if(d < daysPerMonth)
	{
		m = 1;
	}
	

}

// Prints the date of the form m/d/y to the screen
void Date::printNumeric() const
{
	cout << a.month << '/' << a.day << '/' << a.year << endl;
}

// Prints the date of the form mn d, y to the screen
void Date::printAlpha() const
{
	cout << a.monthName << ' ' << a.day << ' ' << a.year << endl;
}

// Helper methods:

// Returns true if the yr passed is a leap year. Otherwise it will return false
bool Date::isLeap(unsigned yr) const
{
	if (yr % 400)
		return true;
	else if (yr % 100)
		return false;
	else if (yr % 4)
		return true;
}

// Returns the number of days in a given month and year. Remember the rhyme
// Thiry days has September
// April, June, and November.
// All the rest have thirty-one
// Except for February 28
unsigned Date::daysPerMonth(unsigned m, unsigned yr) const
{
	if(m == 1)
	{
		return 31;
	}
	else if(isLeap = true; m == 2)
	{
		return 29;
	}
	else if(isLeap = false; m == 2)
	{
		return 28;
	}
	else if(m == 3)
	{
		return 31;
	}
	else if(m == 4)
	{
		return 30;
	}
	else if(m == 5)
	{
		return 31;
	}
	else if(m == 6)
	{
		return 30;
	}
	else if(m == 7)
	{
		return 31;
	}
	else if(m == 8)
	{
		return 31;
	}
	else if(m == 9)
	{
		return 30;
	}
	else if(m == 10)
	{
		return 31;
	}
	else if(m == 11)
	{
		return 30;
	}
	else if(m == 12)
	{
		return 31;
	}
}

// Returns the month name of a given month. For example, if you pass in 3 the
// method should return "March". If you pass in 12 the method will return
// "December". If an invalid month is passed in, then the function should
// return some error message of your choosing.
string Date::name(unsigned m) const
{
	if(m == 1)
	{
		return "January";
	}
	else if(m == 2)
	{
		return "February";
	}
	else if(m == 3)
	{
		return "March";
	}
	else if(m == 4)
	{
		return "April";
	}
	else if(m == 5)
	{
		return "May";
	}
	else if(m == 6)
	{
		return "June";
	}
	else if(m == 7)
	{
		return "July";
	}
	else if(m == 8)
	{
		return "August";
	}
	else if(m == 9)
	{
		return "September";
	}
	else if(m == 10)
	{
		return "October";
	}
	else if(m == 11)
	{
		return "November";
	}
	else if(m == 12)
	{
		return "December";
	}
}

// Returns the number cooresponding to the month name passed in. For example,
// number("March") will return 3.
unsigned Date::number(const string &mn) const
{
	if(m == 1)
	{
		return "January";
	}
	else if(m == 2)
	{
		return "February";
	}
	else if(m == 3)
	{
		return "March";
	}
	else if(m == 4)
	{
		return "April";
	}
	else if(m == 5)
	{
		return "May";
	}
	else if(m == 6)
	{
		return "June";
	}
	else if(m == 7)
	{
		return "July";
	}
	else if(m == 8)
	{
		return "August";
	}
	else if(m == 9)
	{
		return "September";
	}
	else if(m == 10)
	{
		return "October";
	}
	else if(m == 11)
	{
		return "November";
	}
	else if(m == 12)
	{
		return "December";
	}

}

// Extra Credit:
// Add an integer to a date to get another. This integer may be either positve
// or negative. If you decide to implement this then you must make sure that
// the method returns a valid date. So you must check that the date it returns
// actually exists in the real world. This can be challenging but it is really
// neat to have once you got it working.
//
// To test this method properly, you will need to test it on a number of input
// values. To check that your output is correct, you can check it against my
// implementation, or use the website Wolfram Alpha.
Date Date::addDays(int offset) const
{
}
