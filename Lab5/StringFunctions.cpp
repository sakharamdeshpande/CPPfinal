#include<iostream>
using namespace std;

int stringLength(char[]);
bool stringComparision(char [],char []);
void stringConcatination(char *,char *);
void stringCopy(char *,char []);
int main(){
    char string1[]="IET";
    char string2[]="CDAC";

    cout<<"Length of first string is : "<<stringLength(string1)<<endl;
    cout<<"Length of second string is : "<<stringLength(string2)<<endl;
    if(stringComparision(string1,string2)){
        cout<<"String are same\n";
    }
    else{
        cout<<"String are not same\n";
    }
    stringConcatination(string1,string2);
    cout<<string1<<endl;
    cout<<string2<<endl;
    char string[stringLength(string1)+1];
    stringCopy(string,string2);
    cout<<string<<endl;
}
bool stringComparision(char str1[],char str2[]){
    int ct=0;
    for(int i=0;i<stringLength(str1);i++){
        if(str1[i]==str2[i]){
            ct++;
        }
        else{
            break;
        }
    }
    if(ct==stringLength(str1)){
        return true;
    }
    else{
        return false;
    }

}
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
void stringConcatination(char *str1,char *str2){
    for(int i=0,j=0;i<((stringLength(str1)+stringLength(str2)));i++){
        if(str1[i]=='\0'){
            str1[i]=str2[j];
            str1[i+1]='\0';
            j++;
        }
    }
}
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