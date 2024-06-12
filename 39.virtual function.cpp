
#include<iostream>
using namespace std;
class A
{
public:
int num=8;
virtual void display()

};
class B:public A
{
int cum=5;
public:
void display()
{
cout<<"cum = "<<cum<<endl;
}
};
int main()
{
A *obj;
B obj1;
obj=&obj1;
obj->display();
}
