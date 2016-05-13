#include "includes.h"


/* Setter method which sets the length to len */
void Rectangle::set_length(int len)
{
	return this->length = len;	// This method returns void, yet here you are returning non void. This is an error
}

/* Setter method which sets the width to wid */
void Rectangle::set_width(int wid)
{
	return this->width = wid;	// This method returns void, yet here you are returning non void. This is an error
}

/* Getter method which returns the length */
int Rectangle::get_length()
{
	return this->length;
}

/* Getter method which returns the width */
int Rectangle::get_width()
{
	return this->width;
}

/* This method will return the area of the rectangle.
 * Do we need to use the getter functions in here to
 * access the length and width?
 * Hint
 * no.
 * We don't since this method is part of the class, therefore
 * it can access the private data. So to access the length
 * and the width in this method we only need to call
 * this->length and this->width respectively.
 */
int Rectangle::area()
{
	return this->length * this->width;
}
