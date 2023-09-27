#ifndef POINT_H
#define POINT_H
#include "Shape.h"
class Point
{
	int start_point,end_point;
	public:
		Point();
		Point(int,int);
		int get_x();
		int get_y();
	protected:
};

#endif
