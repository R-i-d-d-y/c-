
//Assignment_09
#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
int i,len;
string str;
ifstream file("data.txt");
while(getline(file,str))
{
for(i=0;i<str.length();i++)
{
if(str[i]=='S'||str[i]=='s')
{
continue;
}
else
{
cout<<str[i];
}
}
}
}
