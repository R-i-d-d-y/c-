#include<iostream>
using namespace std;
int x;
int sum(int a[])
{
int s=0,j;
for(j=0;j<x;j++)
{
s=s+a[j];
}
return s;
}
int main()
{
int i,k;
cout<< "How many numbers do you input in your array :";
cin>>x;
int arr[x];
cout<< "Please input your numbers : ";
for(i=0;i<x;i++)
{
cin>>arr[i];
}
k=sum(arr);
cout<< "Sum : ";
cout<<k<<endl;
}
