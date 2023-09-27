#include <iostream>  
#include <fstream>  
using namespace std;  
int main () {  
  ofstream filestream("filehandling.txt");  
  if (filestream.is_open())  
  {  
    filestream << "hi hello\n";  
    filestream << "pgdac\n";  
    filestream.close();  
  }  
  else cout <<"File opening is fail.";  
  return 0;  
}  

