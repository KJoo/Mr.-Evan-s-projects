#ifndef RECTANGLE_H_
#define RECTANGLE_H_

class Rectangle
{
	private:
		int length;
		int width;

	public:
		/* Setters */
		void set_length(int);
		void set_width(int);

		/* Getters */
		int get_length();
		int get_width();

		/* Method for computing the area of the rectangle */
		int area();
};

#endif	// RECTANGLE_H_
