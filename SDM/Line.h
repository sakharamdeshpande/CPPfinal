#ifndef LINE_H
#define LINE_H

#include "Point.h"
#include "Shape.h"

class Line : public Shape
{
	Point start_Point;
	Point end_point;
	public:
		Line();
		Line(Point,Point);
		int area();
		void display();
	protected:
};

#endif
