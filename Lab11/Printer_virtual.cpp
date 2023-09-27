#include <iostream>
using namespace std;
#include <String.h>

class Printer1
{
    char printer1Name[10];
    char printer1Type[25];
    double printer1Price;

public:
    Printer1(char printer1Name[], char printer1Type[], double printer1Price)
    {
        strcpy(this->printer1Name, printer1Name);
        this->printer1Price = printer1Price;
        strcpy(this->printer1Type, printer1Type);
    }
    virtual void display()
    {
        cout << "Name of Printer1 : " << printer1Name << endl;
        cout << "Type of Printer1 : " << printer1Type << endl;
        cout << "Price of Printer1 : " << printer1Price << endl;
    }
};
class Printer2
{
    char Printer2Name[10];
    char Printer2Type[25];
    double Printer2Price;

public:
    Printer2(char Printer2Name[], char Printer2Type[], double Printer2Price)
    {
        strcpy(this->Printer2Name, Printer2Name);
        this->Printer2Price = Printer2Price;
        strcpy(this->Printer2Type, Printer2Type);
    }
    virtual void display() = 0;
};
class CPU : public Printer2
{
    char CPUName[20];
    double CPUPrice;

public:
    CPU(char CPUName[], double CPUPrice, char Printer2Name[], char Printer2Type[], double Printer2Price) : Printer2(Printer2Name, Printer2Type, Printer2Price)
    {
        strcpy(this->CPUName, CPUName);
        this->CPUPrice = CPUPrice;
    }
    void display()
    {
        cout << "CPU name : " << CPUName << endl;
        cout << "Price of CPU : " << CPUPrice << endl;
    }
};
class Computer : public Printer1,public CPU
{
    char name[10];
    double price;

public:
    Computer(char name1[], char type1[], double price1, char CPUName[], double CPUPrice, char Printer2Name[], char Printer2Type[], double Printer2Price, char name[], double price) : Printer1(name1, type1, price1), CPU(CPUName, CPUPrice, Printer2Name, Printer2Type, Printer2Price)
    {
        strcpy(this->name, name);
        this->price = price;
    }
    void display()
    {
        cout << "Computer name : " << name << endl;
        cout << "Price of Computer : " << price << endl;
    }
    void displayPrinter1()
    {
        Printer1::display();
        cout << "Computer name : " << name << endl;
        cout << "Price of Computer : " << price << endl;
    }
};
int main()
{
    // Computer c("HP","Black n White Printer",13000,"Canon","Colour Printer",15000,"HP",40000);
    // c.displayPrinter1();
    // c.displayPrinter2();

    Printer1 *ptr = new Computer("HP", "Black n White Printer", 13000, "Dell", 10000, "Canon", "Colour Printer", 15000, "HP", 40000);
    ptr->display();

    CPU *ptr2 = new Computer("HP", "Black n White Printer", 13000, "Dell", 10000, "Canon", "Colour Printer", 15000, "HP", 40000);
    ptr2->display();
}
