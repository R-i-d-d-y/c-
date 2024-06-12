#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    double x;
    int p,j,i;
    ifstream file;
    file.open("ridu.txt");
    while(file>>x)
    {
        p=x;
        if(p!=x)
            cout<<x <<ends;

}
 file.close();
}
