#include<iostream>
using namespace std;
const float PI = 3.142;

class Shape
{
	int thickness;
	//char colour[20];
	public:
		float get_thick()
		{
			return this->thickness;
		}
		void set_thick()
		{
			cout<<"enter thickness : ";
			cin>>thickness;
		}
		virtual void display()=0;
		//virtual double area();
	
};


class Point 
{
	int x,y;
	public:
	//Shape obj;
		Point()
		{
			x = 0 ;
			y = 0;
		}
		void get_point(int x,int y)
		{
			this->x = x;
			this->y = y;
			//Shape::set_thick();
		}
		void display()
		{
			cout<<"X co-ordinate "<<x<<endl;
			cout<<"Y co-ordinate "<<y<<endl;
		}
};


class Line:public Shape
{
	Point x;
	Point Y;
	double start_point, end_point;
	public : 
	//Shape obj;
		Line()
		{
			start_point = 0;
			end_point = 0;
		}
		void get_line(	Point x,Point Y)
		{
			this->start_point;
			this->end_point;
			Shape::set_thick();
		}
		void display()
		{
			cout<<"Start : "<<start_point;
			cout<<"End : "<<end_point;
			cout<<"Thickness of line : "<<Shape::get_thick();
		}
};





class Rectangle : public Shape
{
	int len,bred;
	public :
	//Shape obj;
		Rectangle()
		{
			len = 0;
			bred = 0;	
		}
		void get_rec(int len,int bred)
		{
			this->len = len;
			this->bred = bred;
			Shape::set_thick();
		}
		double area()
		{
			return (this->len * this->bred);
		}
		void display(){
			cout<<"Area of rectangle : "<<area();
			cout<<"Thickness of rectangle : "<<Shape::get_thick();			
		}
	
};

class Circle: public Shape//public Point
{
	int radius;
	public:
	    //Shape obj;
		Circle(){
			radius = 0;
		}
		void get_circle(int r){
			this->radius = r;
			Shape::set_thick();
		}
		
		double area(){
			return ( PI * radius * radius);
		}
		
		void display(){
			cout<<"Area of circle : "<<area();
			cout<<"Thickness : "<<Shape::get_thick();
		}
};

class Ellipse : public Shape 
{
	int x,y;
	public:
		//Shape obj;
	//	Point obj1;
		Ellipse()
		{
			x = 0;
			y = 0;
		}
		void get_ellipse(int x,int y)
		{
			this->x = x;
			this->y = y;
			Shape::set_thick();
		}
		double area()
		{
			return (PI * this->x * this->y);	
		}
		void display(){
			cout<<"Area of ellipse : "<<area();
		//	obj.display();
			cout<<"Thickness of circle : "<<Shape::get_thick();
		}
		
	
};

class Square : public Shape
{
	int side;
	public:
//	Shape obj;
		Square()
		{
			side = 0;
		}
		void get_square(int side)
		{
			this->side = side;
			Shape::set_thick(); 	
		}
		double area(){
			return (side * side);
		}
		void display()
		{
			cout<<"Area of display : "<<area();
			Shape::get_thick();	
		}
	
};

class line{
	
};

int main(){
	int x,thick=0;
	Square s1;
	Circle c1;
	Rectangle r1;
	Ellipse e1;
	Shape * ptr ;
	ptr = &s1;
		cout<<"1) Area of circe "<<endl;
			cout<<"2) Area of square "<<endl;
			cout<<"3) Area of Recatangle"<<endl;
			cout<<"4) Area of Ellipce"<<endl;
			cout<<"5) Exit"<<endl;
			cin>>x;
		
		switch(x){
			
			case 1: int r;
					cout<<"Enter the radius : ";
					cin>>r;
					 
					c1.get_circle(r);
					ptr = &c1;
					ptr->display();
				break;
			case 2: int s;
					cout<<"Enter the side : ";
					cin>>s; 
					s1.get_square(s);
					ptr = &s1;
					ptr->display();
				break;
			case 3: int l,b;
					cout<<"Enter the lenghth : ";
					cin>>l; 
					cout<<"Enter the breadth : ";
					cin>>b;
					
					r1.get_rec(l,b);
					r1.display();
				break;
			case 4:	int x1,y1;
					cout<<"Enter X co ordinate : ";
					cin>>x1;
					cout<<"Enter Y co ordinate : ";
					cin>>y1;
					
					e1.get_ellipse(x1,y1);
					e1.display();
				break;
			case 5 : 
					cout<<"Thankyou";
					break;					
			default : cout<<"wrong input :";			
			
		}
		}

