#include<iostream>
#include<sstream>
#include<fstream>
#include<iomanip>
#include<vector>
#include<string>
using namespace std;
int main()
{
 ifstream infile;
 infile.open("data.txt");
 string Search_word, word;
 int found=0;
 cout<< "Enter your word " <<endl;
 cin>>Search_word;
 while(infile>>word)
 {
 if(word == Search_word)
 found++;
 }
 cout<<"Your word found "<< found << "th times in this file"<<endl;

 infile.close();
 return 0;
}
