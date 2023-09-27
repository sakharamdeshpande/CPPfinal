#include<iostream>
using namespace std;
#include<string.h>

class date{
	int dd,mm,yy;
	public:
		date(int,int,int);//parametrised constructor
		void show();
};
date :: date(date & d_new){ // copy constructure definition
	this->dd = d_new.dd;
	this->mm = 05;
	this->yy = 2023;
}
date :: date(int d,int m,int y){
	dd = d;
	mm = m;
	yy = y;
}
void date::show(){
	cout<<dd<<"/"<<mm<<"/"<<yy<<endl;
}
int main(){
	date d(18,8,2018);
	date d2(d);
	d.show();
	d2.show();
}
