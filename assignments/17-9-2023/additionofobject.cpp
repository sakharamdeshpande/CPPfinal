#include<iostream>
using namespace std;

class temp
{
	int a;
	public :
		void get(){
			cin>>this->a;
		}
		void show(){
			cout<<"Value : "<<a;
		}
		temp add(temp &c){
			temp to;
			to.a = this->a + c.a;
			return ot;
		}		
};
int main(){
	temp o1,o2;
	o1.get();
	o2.get();
	temp x = o1.add(o2);
	x.show();
}
