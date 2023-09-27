#include <iostream>
#include "Shape.h"
#include "Square.h"
#include "Rectangle.h"
#include "Line.h"
#include "Point.h"
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	Square sq;
	Rectangle r1;
	Line l1;
	Shape * ptr;
	ptr = &sq;
	
	int ch;	
	do
	{
		cout<<"\n1) Area of square "<<endl;
		cout<<"2) Area of rectangle "<<endl;
		cout<<"5) Exit\n"<<endl;
		cin>>ch;
		switch(ch)
		{
			case 1:
			{
				int s;
				cout<<"Enter the side of square : ";
				cin>>s;
				sq.get_side(s);
				ptr = &sq;
				ptr->display();
					
				break;
			}
			case 2:
			{
				int len,bred;
				cout<<"Enter the length : ";
				cin>>len;
				cout<<"Enter the length : ";
				cin>>bred;
				r1.get_rec(len,bred);
				ptr = &r1;
				ptr->display();
				break;
			}
		/*	case 3:
				{	int x1,x2,y1,y2;
					cout<<"Start x co-ordinate : ";
					cin>>x1;
					cout<<"Start y co-ordinate : ";
					cin>>y1;
					cout<<"End x co-ordinate : ";
					cin>>x2;
					cout<<"End y co-ordinate : ";
					cin>>y2;
					Point p1(x1,y1);
					Point p2(x2,y2);
					
					Line l1(p1,p2);
					ptr = &l1;
					ptr-> display();
					
					
					break;
				}*/
			case 5: exit(0);
					break;
					
			default:cout<<"Enter valid input";
			
		}
	}while(ch!=5);
	
}
