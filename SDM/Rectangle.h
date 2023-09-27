#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Shape.h"

class Rectangle : public Shape
{
	int len,bred;
	public:
		Rectangle();
		void get_rec(int,int);
		int area();
		void display();
	protected:
};

#endif
