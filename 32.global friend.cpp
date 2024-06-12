#include<iostream>
using namespace std;
class ClassA
{
int X;
public:
ClassA()
{
X=5;
}
friend void value(ClassA a);
};
void value(ClassA a)
{
cout<<"Value is:"<<a.X<<endl;
}
int main()
{
ClassA obj;
value(obj);
return 0;
}
