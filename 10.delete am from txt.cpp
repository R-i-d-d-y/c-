
#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
int i,len,j;
string str;
ifstream check("data.txt");
while(getline(check,str))
{
len=str.length();
for(i=0; i<str.length(); i++)
{
if(str[i]=='a'&& str[i+1]=='m')
{
for(j=i; j<len; j++)
{
str[j]=str[j+2];
}
len-=2;
}
}
cout<<str<<endl;
}
}
