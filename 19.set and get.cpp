#include<iostream>
using namespace std;
class Date
{
int day,year;
string month;
public:
void set(int d,string m,int y)
{
day=d;
month=m;
year=y;
}
void get()
{
cout<<day<<' '<<month<<' '<<year<<endl;
}
};
int main()
{
Date obj;
obj.set(25,"October",2000);
cout<<"My Birthday:"<<endl;
obj.get();
}
