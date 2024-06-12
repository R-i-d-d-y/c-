#include<iostream>
using namespace std;
int sum(string s)
{
    int n=(int)s.size();
    int sum=0,num=0,i;
    for(i=0;i<n;i++)
    {

    if(s[i]>='0'&&s[i]<='9')
    {
        num=num*10+(s[i]-'0');
    }
    else
    {
            sum=sum+num;
            num=0;

    }
    }
return sum+num;
}
int main()
{
    char str[]="12 ICT 6 Dept 9";
    int i;
    string a;
    for(i=0;str[i]!='\0';i++)
    {
        if(((str[i]>='A')&&(str[i]<='Z'))||((str[i]>='a')&&(str[i]<='z')))
        {
            a.push_back(str[i]);
        }

    }
    cout<<"Sum of numbers are:"<<sum(str);
    cout<<endl;
     cout<<"Concatanation of strings are:"<<a;
}
