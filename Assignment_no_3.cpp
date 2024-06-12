#include<iostream>
#include<stdio.h>
#include<string.h>

using namespace std;
int main()
{
    char str[100] = "12 ICT 6 DEPT 9", new_str[100];
    int length, sum = 0, j = 0,p=0,q=0;
    length = strlen(str);
    for(int i=0; i<length; i++)
    {
        if(str[i]>='0' && str[i]<='9')
        {
            if(str[i+1]>='0' && str[i+1]<='9')
            {
                p = str[i]-48;
                q = str[i+1]-48;
                sum+=((p*10)+q);
                i++;
            }
            else
            {
                p = str[i]-48;
                sum = sum + p;
            }
        }

        else
        {
            new_str[j] = str[i];
            j++;
        }

    }
    cout<<sum<<endl;

    cout<<"And concatenation of all characters in the string:";

    for(int i=0; i<strlen(new_str); i++)
    {
        cout<<new_str[i];
    }
    cout<<endl;
    return 0;
}
