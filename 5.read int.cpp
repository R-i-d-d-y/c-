#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    int x,sum=0;
    double y;
    ifstream file;
    file.open("ridu.txt");
    while(file>>y)
    {
        x=y;
        if(x==y)
        {  cout<< y<<ends<<endl ;
            sum=sum+x;
        }
    }
    cout<<"sum="<<sum;
    file.close();

}
