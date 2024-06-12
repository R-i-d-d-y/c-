
#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	float var;
	int n;
	cout<<"Enter the floating number :";
	cin>>var;
	cout<<"Enter in which place you want to round the number :";
	cin>>n;
	cout <<"Number after round is:"<< fixed << setprecision(n) << var;
	return 0;
}


