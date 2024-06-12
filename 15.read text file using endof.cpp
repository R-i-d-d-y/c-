#include<bits/stdc++.h>
using namespace std;
int main()
{
string str;
ifstream file;
file.open("data.txt");
while(!file.eof())
{
getline(file,str);
cout<<str<<endl;
}
file.close();
}
