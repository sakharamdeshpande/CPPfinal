#include<iostream>
using namespace std;
int main(){
	int n,res=1;
	cout<<"accept num";
	cin>>n;
	while(n!=0){
		res=res*n;
		n--;
	}
	cout<<res;
	
}
