//included header file for input-output operation
#include<iostream>
using namespace std;

int stringLength(char[]); //declaration of method for calulating string length
void stringConcatination(char *,char *); //declaration of method for concatenation of strings
void stringCopy(char *,char []); //declaration of method for copying of string
int main(){
	cout<<"Enter size of String 1 : "; //Asking User to Enter Size of String 1
	int ct; 
	cin>>ct; //Entering size of String 1
    char* string1=new char[ct+1]; //Dynamically allocating memory 
    cout<<"Enter String 1 : "; //Asking user to Enter String 1
    cin>>string1; //Entering String 1
    cout<<"Enter size of String 2 : ";  //Asking user to enter size of String 2
	int ct1;
	cin>>ct1; //Entering Size of String 2 
    char* string2=new char[ct1+1]; //dynamically allocating memory
	cout<<"Enter String 2 :";
	cin>>string2; //Entering String 2
	cout<<"-----------------------------------------"<<endl;
    stringConcatination(string1,string2); //Calling Concatenation Function
    cout<<"String after concatenation : "<<string1<<endl;
    cout<<"------------------------------------------"<<endl;
    cout<<"String before Copying : "<<string2<<endl;
    char string[stringLength(string1)+1];
    stringCopy(string,string2); //Calling Copy Function
    cout<<"String after Copying : "<<string<<endl;
    cout<<"-------------------------------------------"<<endl;
    cout<<"Length of first string is : "<<stringLength(string1)<<endl; //calling Length Function
    cout<<"Length of second string is : "<<stringLength(string2)<<endl;
    
    delete[] string1; //deleting the memory allocated at runtime
    delete[] string2;
}

//definition of Concatenation Function
void stringConcatination(char *str1,char *str2){
    for(int i=0,j=0;i<((stringLength(str1)+stringLength(str2)));i++){
        if(str1[i]=='\0'){
            str1[i]=str2[j];
            str1[i+1]='\0';
            j++;
        }
    }
}

//definition of Copy Function
void stringCopy(char *str,char str1[]){
    int i;
    for(i=0;i<stringLength(str1);i++){
        if(str1[i]=='\0'){
            break;
        }
        else{
            str[i]=str1[i];
        }
    }
    str[i]='\0';
}

//Definitiion of Length Function
int stringLength(char str[]){
    int count=0;
    for(int i=0;;i++){
        if(str[i]=='\0'){
            break;
        }
        else{
            count++;
        }
    }
    return count;
}



