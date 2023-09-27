#include<iostream>
#include<string.h>
using namespace std;
class string1{
	int len;
	char *ptr;
	public:
		string1(char *);
		void show();
		string1(char,int);
		string1(int);
		string1();
};
string1::string1(){
	int len;
	cout<<"enter the length";
	cin>>len;
	this->len = len;
	char ch[len+1];
	ptr=new char[this->len+1];
	cout<<"Enter the string";
	cin>>ch;
	strcpy(ptr,ch);
}



string1::string1(int len){
	this->len = len;
	ptr=new char[this->len];
	cout<<"enter the string: ";
	cin>>ptr;
	
}


string1::string1(char* ptr1){
	len=strlen(ptr1);
	//x=this->len;
	ptr=new char[this->len+1];
	strcpy(this->ptr,ptr1);
}
string1::string1(char ch,int len){
		int i;
	this->len = len;

	ptr=new char[this->len+1];
	for(i=0;i<this->len;i++){
		ptr[i]=ch;
		cout<<ptr[i];
	}
	ptr[i] = '\0';

}
void string1::show(){
	cout<<"Length : "<<len<<endl;
	cout<<"String : "<<ptr<<endl;
}
int main(){
	string1 s1("cdac");
	s1.show();
	string1 s2('*',50);
	string1 s3(5);
	s3.show();
	string1 s4;
	s4.show();
	
}
