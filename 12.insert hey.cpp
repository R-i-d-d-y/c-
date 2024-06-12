#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
int i;
string str;
ifstream file("data.txt");
while(getline(file,str))
{
str="Hey!"+str;
cout<<str<<endl;
cout<<str.insert(7,"ridu ");
}
}
