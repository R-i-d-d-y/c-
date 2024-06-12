#include<iostream>
using namespace std;
int main()
{
    int divident,divisor,quotient;
    try
    {

    cout<<"Enter divident:";
    cin>>divident;
    cout<<endl;
    cout<<"Enter divisor:";
    cin>>divisor;
    cout<<endl;
    if(divisor==0)
        throw 0;
    quotient=divident/divisor;
    cout<<"quotient="<<quotient;
    }
    catch(int)
    {
        cout<<"division by zero";
    }
}
