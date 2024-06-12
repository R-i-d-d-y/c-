#include<iostream>
using namespace std;
class A
{
public:
int num;
A()
{
num=8;
}
void operator ++()
{
num=num+100;
}
void display()
{
cout<<"num = "<<num<<endl;
}
};
int main()
{
A a;
++ a;
a.display();
}
