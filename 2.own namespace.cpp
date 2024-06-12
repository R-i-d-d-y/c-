#include<iostream>
using namespace std;
namespace first
{
    int inp(int a,int b)
    {
        return (a+b);
    }
}
namespace second
{
    class A
    {
        public:
        A()
        {
            cout<<"Inside class";
        }
    };
}
int main()
{ int p,q;
cout<<"Enter p and q=";
cin>>p>>q;
  using namespace first;
  using namespace second;
  cout<<"sum=" <<inp(p,q)<<endl;
  A a;

}
