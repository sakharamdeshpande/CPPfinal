#include<iostream>
using namespace std;
class complex{
	int real,img;
	public:
		complex(){
			real =5;
			img = 6;
		}
		complex(int real,int img){
			this->real = real;
			this->img = img;
		}
		void show(){
			cout<<"real "<<real<<endl;
			cout<<"img "<<img<<endl;
		}
		void show() const
		{
			cout<<"real "<<real<<endl;
			cout<<"img "<<img<<endl;
		}
};


int main(){
	int n;
	cout<<"Enter the no of obj ";
	cin>>n;
	complex * ptr = new complex[n];
	for(int i =0;i<n;i++){
		cout<<""
		ptr[i].complex(a,b);
		ptr[i].show();
	}
}
