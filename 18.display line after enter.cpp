#include<iostream>
#include<string>
#include<sstream>
#include<fstream>
#include<iomanip>
#include<vector>
using namespace std;
int main()
{


 ifstream infile;
 infile.open("riddy.txt");
 string str;
 cout<< "please! press Enter key to see your file line by line"
<<endl;
 while(getline(infile, str))
 {
 cin.ignore();
 cout<< str <<endl;
 }
 infile.close();
 return 0;
}
