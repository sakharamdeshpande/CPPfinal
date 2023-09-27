#include<iostream>
using namespace std;
#include<string.h>

class string1{
	int len;
	char * ptr;
	public:
		string1(char* p){
			this->len  = strlen(p);
			ptr = new char[this->len +1];
			strcpy(ptr,p);
		}
		void display(){
			cout<<"Length : "<<this->len<<endl;
			cout<<"String : "<<this->ptr<<endl;
		}
		~string1();
		
};
string1 :: ~string1(){
	cout<<"Destructor is called : "<<endl;
	if(ptr)
	delete[] ptr;
	ptr = NULL;
}
int main(){
	string1 o1("abhishek");
	o1.display();
	{
		string1 o2(o1);
		o2.display();
		//o2.~string1();
	}
	o1.display();
}




	
