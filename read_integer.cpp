
#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    cout<<"Write your file name: "<<endl;
    int i=0;
    int a[50];
    double x;
    char fileName[50];
    ifstream numbersFile;
    cin.getline(fileName,50);
    numbersFile.open(fileName);
    if(!numbersFile.is_open())
    {
        cout<<"It failed."<<endl;
        return 0;
    }

    cout<<"The File Numbers Are: ";
    while(numbersFile>>x)
    {

        if(x==int(x))
        {
            a[i] = x;
            i++;
        }
        cout<<x<<" ";
    }
    cout<<endl<<"Integer numbers are: ";
    for(int j=0;j<i;j++){
        cout<<a[j]<<" ";
    }
}

