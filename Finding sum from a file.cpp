#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    cout<<"Write your file name: "<<endl;
    double sum = 0;
    int integer = 0,doublle = 0,i=0;
    double a[50];
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
        if(x==int(x))integer++;
        else
        {
            doublle++;
            a[i] = x;
            i++;
        }
        sum+=x;
        cout<<x<<" ";
    }
    cout<<endl<<"Total sum is "<<sum<<endl;
    cout<<"Number of integer "<<integer<<endl;
    cout<<"Number of double "<<doublle<<endl;
    for(int j=0;j<i;j++){
        cout<<a[j]<<" ";
    }
}

