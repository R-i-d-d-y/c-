#include<iostream>
using namespace std;
class MyClass
{
public:
    int a;
void ini(int x)
{a=x;

}
};
void print(MyClass obj)
{
cout<<obj.a;
}
int main()
{
MyClass obj;
obj.ini(10);
print(obj);
}
