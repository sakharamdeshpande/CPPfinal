#include "Point.h"

Point::Point()
{
	start_point = 0;
	end_point = 0;
}

Point :: get_Point(int start_point,int end_point)
{
	this->start_point = start_point;
	this->end_point = end_point;	
}

int Point :: get_x()
{
	return start_point;
}
int Point :: get_y()
{
	return end_point;
}
