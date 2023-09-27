#include "Rectangle.h"
using namespace std;
#include<iostream>
#include"Shape.h"

Rectangle::Rectangle()
{
}
void Rectangle :: get_rec(int len,int bred)
{
	this->len = len;
	this->bred = bred;
	Shape::set_thick();
}
int Rectangle:: area()
{
	return (this->len * this->bred);
}
void Rectangle:: display()
{
	cout<<"Area of rectangle : "<<area()<<endl;
	cout<<"Thickness of rectangle : "<<Shape::get_thick();			
}
