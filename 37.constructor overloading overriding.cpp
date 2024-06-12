
#include<iostream>
using namespace std;
class construct
{
public:
int area;
construct()
{
area=0;
}
construct(int a,int b)
{
area=a*b;
}
void display()
{
cout<<"Area:"<<area<<endl;
}
};
int main()
{
construct obj1;
construct obj2(5,5);
obj1.display();
obj2.display();
return 0;
}
