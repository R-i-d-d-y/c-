#include<bits/stdc++.h>
using namespace std;
int main()
{
string str;
ifstream file;
file.open("data.txt");
ofstream f;
f.open("riddy.txt");
while(getline(file,str))
{
f<<str<<endl;
}
file.close();
f.close();

}
