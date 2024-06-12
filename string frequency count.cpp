#include<iostream>
#include<cstring>
#include<string>
using namespace std;
int main()
{
    char str1[100];
    cout<<"Enter a string :"<<endl;
    cin.getline(str1,100);
    int i,vowel=0,consonent=0,digit=0,space=0,others=0;
    for(i=0; str1[i]!='\0'; i++)
        {
            if(str1[i] == 'a'|| str1[i] == 'e'|| str1[i] == 'i'|| str1[i] == 'o'|| str1[i] == 'u'
               ||str1[i] == 'A'|| str1[i] == 'E'|| str1[i] == 'I'|| str1[i] == 'O'|| str1[i] == 'U' )
                    {
                       vowel++;
                    }
           else if(str1[i] >= 'a' && str1[i] <= 'z' || str1[i] >= 'A' && str1[i] <= 'Z' )
                    {
                       consonent++;
                    }
           else if(str1[i]>='0'&&str1[i]<='9')
                    {
                       digit++;
                    }
           else if(str1[i]==' ')
                    {
                      space++;
                    }
            else
            {others++;}
        }
cout<<"\n";
cout<<"Number of Vowels:"<<vowel<<endl;
cout<<"Number of Consonants:"<<consonent<<endl;
cout<<"Number of Digits:"<<digit<<endl;
cout<<"Number of Space:"<<space<<endl;
cout<<"Number of Others:"<<others<<endl;


    char ch;
    int count=0;
    cout<<"\n";
    cout<<"Enter the character you want to know the frequency :";
    cin>>ch;
    for(i=0;str1[i]!='\0';i++)
    {
        if (str1[i]==ch)
        {
            count++;
        }
    }

    cout<<"Frequency of characters"<<" "<<ch<<" "<<"in the string is  :"<<count<<endl;
    int len;
    len=strlen(str1);
    cout<<"\n";
    cout<<"The length of the str1 is :"<<len<<endl;


   char str2[100]="Hello";
   char str3[100]="World";
   char str4[100];
   strcpy(str4,str2);
   cout<<"\n";
   cout<<"copy of str2 into str4 is:"<<str4;
   cout<<"\n";
   strcat(str2,str3);
   cout<<"\n";
   cout<<"Concatenation of str2 & str3 is:"<<str2<<endl;
   cout<<"\n";
   char *point;
   point=strtok(str1," ");
   cout<<"splits of strings are :\n";
    while(point!=NULL)
    {
        cout<<point<<endl;
        point=strtok(NULL," ");
    }

    return 0;
}
