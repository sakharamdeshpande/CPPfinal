#include<iostream>
using namespace std;

int main(int argc, char* argv)
{
    cout<<"The arguments are:\n " << argc<<endl;
 
    for (int i = 0; i < argc; i++) {
        cout<< argv[i];
        cout<<"argc = "<< argc;
    }
    return 0;
}
