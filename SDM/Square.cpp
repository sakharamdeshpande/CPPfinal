#include "Square.h"
#include<iostream>
#include "Shape.h"
using namespace std;

Square::Square()
{
	side = 0;
}

void Square :: get_side(int side)
{
	this->side = side;
	Shape::set_thick();
}

int Square :: area()
{
	return (side * side);
}

void Square :: display()
{
	cout<<"Area of square : "<<area()<<endl;
	cout<<"Thickness of square : "<<Shape::get_thick()<<endl;
}
