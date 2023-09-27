#include<iostream>
using namespace std;
class emp{
	int id;
	public :
		emp(){
			id = 0;
		}
		virtual int sal()= 0;
};
class wage : public emp{
	int hr,rate;
	public:
		wage(){
			hr = 0;
			rate = 0;
		}
		int sal(){
			cout<<"In wage"<<endl;
			return (hr * rate);
		}
		
};
class sales : public wage{
	int sale, com;
	public :
		sales(){
			sale = 0;
			com = 0;
		}
	/*	int sal(){
			return (wage::sal() + (sale * com));
		}*/
};
int main(){
	emp *p =  new wage();
	wage w1;
	p = &w1;
	cout<<p->sal();
	sales s1;
	p = &s1;
	cout<<p->sal();
	
	
}
