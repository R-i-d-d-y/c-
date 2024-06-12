#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    double k;
    ifstream file;
    file.open("ridu.txt");
    while(file>>k)
    {
        if(k>100)
        {
            cout<<k<<ends;
        }
    }

}
