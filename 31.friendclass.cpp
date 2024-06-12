
#include<iostream>
using namespace std;
class ClassA
{
int X,Y,result;
public:
ClassA(int a,int b)
{
X=a;
Y=b;
}
void sum()
{
result=X+Y;
}
friend class ClassB;
};
class ClassB
{
public:
void output(ClassA B)
{
cout<<"Sum is:"<<B.result<<endl;
}
};
int main()
{
ClassA obj(5,5);
obj.sum();
ClassB Z;
Z.output(obj);
return 0;
}
