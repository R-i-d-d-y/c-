#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
    ifstream vowelfile;
    vowelfile.open("data.txt");
    string s;
    cout<<"Word starting with vowel are :";
    while(vowelfile>>s)
    {
        if((s[0]=='a')||(s[0]=='e')||(s[0]=='i')||(s[0]=='o')||(s[0]=='u')||
           (s[0]=='A')||(s[0]=='E')||(s[0]=='I')||(s[0]=='O')||(s[0]=='U'))
        {
            cout<<s<<ends;
        }
    }
vowelfile.close();
return 0;
}


