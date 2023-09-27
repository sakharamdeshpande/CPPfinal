#include<iostream>
using namespace std;

class shape{
	public :
		virtual int area()=0;
		
};

class square : public shape{
	int side;
	public :
		square(int side){
			this->side = side;
		}
		int area(){
			return (side * side);
		}
};
class rectangle : public shape{
	int l,b;
	public :
		rectangle(int l ,int b){
			this->l = l;
			this->b = b;
		}
		int area(){
			return (l * b);
		}
};

int main(){
	shape * ptr;
	square sq(20);
	ptr = &sq;
	cout<<ptr->area()<<endl;
	rectangle rc(12,15);
	ptr = &rc;
	cout<<ptr->area()<<endl;
	
	
}





