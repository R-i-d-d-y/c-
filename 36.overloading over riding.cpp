#include<iostream>
using namespace std;
class A
{ int x,y;
public:
    void set(int a)
    {x=a;
    cout<<"a="<<a<<endl;

    }
    void set(int a,int b)
    {
        x=a;
        y=b;
        cout<<"a="<<a<<"  b="<<b<<endl;
    }
    void show()
    {
        cout<<"i am a student"<<endl;
    }
};
class B:public A
{
public:
    void show()
    {
        cout<<"i am a teacher"<<endl;
    }
};
int main()
{
    A obj1;
    obj1.set(10);
    obj1.set(20,30);
    obj1.show();
    B obj2;
    obj2.show();
}
