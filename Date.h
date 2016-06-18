#ifndef DATE_H_
#define DATE_H_

#include <iostream>

class Date
{
	public:
		unsigned day;
		unsigned month;
		std::string monthName;
		unsigned year;

		// Private helper methods //
		bool isLeap(unsigned) const;
		unsigned daysPerMonth(unsigned, unsigned) const;
		std::string name(unsigned) const;
		unsigned number(const std::string&) const;
	
	public:
		// Constructor methods for the date class //
		Date();
		Date(unsigned, unsigned, unsigned);
		Date(const std::string&, unsigned, unsigned);

		// Methods to print the date in various forms //
		void printNumeric() const;
		void printAlpha() const;

		// Extra Credit
		Date addDays(int) const;
};


#endif	// DATE_H_