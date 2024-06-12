
#include<bits/stdc++.h>
using namespace std;
int main()
{
string str,n;
ifstream file;
file.open("data.txt");
while(getline(file,str))
{
n=n+str+"\n";
}
file.close();
cout<<n<<endl;
}
