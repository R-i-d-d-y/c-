
#include<bits/stdc++.h>
using namespace std;
int main()
{
int c=0,i;
string str;
ifstream file;
file.open("data.txt");
string word;
while(!file.eof())
{
file>>word;
c++;
}
file.close();
cout<<c<<endl;
}
