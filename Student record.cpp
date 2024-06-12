//Creating student record and write 5 student record in file
#include<iostream>
#include<fstream>
using namespace std;
 main()
{
 int rollno;
float cgpa;
string name;
ofstream file("stdfile.txt");
if(!file)
{
    cout<<"File not created";
}
else
    {
        cout<<"File created successfully";
    }
    int n,i;
    cout<<"Enter how many record you want to create: ";
    cin>>n;
    cout<<"Enter"<<n<<"students record\n";
    for(i=0;i<n;i++)
    {
        cout<<"*****student "<< i+1 <<"  record  :"<<endl;
        cout<<"Roll no :";
        cin>>rollno;
        cout<<"Name :";
        cin>>name;
        cout<<"CGPA :";
        cin>>cgpa;
        file<<"  Roll No :    "<< rollno<<"       Name :    "<< name<<"       CGPA :    "<< cgpa <<endl;
    }
}

