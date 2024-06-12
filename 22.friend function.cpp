#include<iostream>
using namespace std;
class A
{
    int a,c;
public:
    void input()
    {
        cout<<"Enter 2 numbers";
        cin>>a>>c;
    }
    friend void add(A b);
};
void add(A b)
{
    int sum=b.a+b.c;
    cout<<sum;
}
int main()
{
    A p;
    p.input();
    add(p);
}
