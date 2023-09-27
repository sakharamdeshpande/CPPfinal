#ifndef SQUARE_H
#define SQUARE_H

#include "Shape.h"

class Square : public Shape
{
	int side;
	public:
		Square();
		void get_side(int);
		int area();
		void display();
	protected:
};

#endif
