
#include "Shape.h"
#include "Line.h"
#include"Point.h"
using namespace stdl;
#include<iostream>
Line::Line()
{
	
}
Line::Line(Point start_point,Point end_point)
{
	this->start_Point = start_point;
	this->end_point = end_point;
	Shape::get_thick();
}
int Line :: area()
{
	return	(start_point.get_x() - end_point.get_x()) + (start_point.get_y()-<<end_point.get_y())
}
void Line :: Display()
{
	cout<<"start_point : "<<start_point.get_x()<<","<<start_point.get_y();
	cout<<"end_point : "<<end_point.get_x()<<","<<end_point.get_y();
	cout<<"Area : "<<area();
	cout<<"Thickness : "<<Shape::get.thick();
}





