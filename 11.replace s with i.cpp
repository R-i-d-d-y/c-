#include<iostream>
#include<string>
#include<fstream>
using namespace std;
int main()
{
 int i;
 fstream file;
 string s;
 file.open("data.txt");
 while(getline(file,s))
 {
     for(i=0;i<s.length();i++)
     {
         if(s[i]=='s')
         {
             s[i]='i';
         }
     }
     cout<<s;
 }
}
