#include<iostream>
using namespace std;
int main(){
    int size;
    cout<<"Enter size of Array : ";
    cin>>size;
    int num[size];
    int* ptr[size];

    for(int i=0;i<size;i++){
        cout<<"Enter elements in array at position "<<i+1<<" : ";
        cin>>num[i];
        ptr[i]=&num[i];
    }
    cout<<"Your Formed array is :"<<endl;
    for(int i=0;i<size;i++){
        // cout<<*ptr[i];
        cout<<*(num+i);
    }
    cout<<endl;
    char* name[]={"Abhishek","Gaikwad"};
    char* name1[]={"Sakharam","Deshpreme"};
    for(int i=0;i<2;i++){
        cout<<*(name+i)<<"\t";
    }
    for(int i=0;i<2;i++){
        cout<<*(name1+i)<<"\t";
    }
}
