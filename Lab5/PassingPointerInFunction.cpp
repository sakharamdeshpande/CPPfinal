#include <iostream>
using namespace std;

void multiply(int *a, int *b, int *c)
{
    *c = *a * *b;
}
int main()
{
    int a = 10, b = 20, c;

    multiply(&a, &b, &c);
    cout<<"Multiplication of a and b is : "<<c;
}
