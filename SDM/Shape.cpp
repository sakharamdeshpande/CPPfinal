#include "Shape.h"
#include<iostream>
using namespace std;

Shape::Shape()
{
	thickness = 0;
}

int Shape:: get_thick()
{
	return thickness;
}

void Shape :: set_thick()
{
	cout<<"Enter thickness : ";
	cin>>thickness;
}
