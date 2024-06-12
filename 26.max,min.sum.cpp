#include<iostream>
#include<vector>
using namespace std;
vector<double> v;
int main()
{
long long int i;
double sum = 0, avg, mx = -1, mn = 1e18, x, n;
cout << "Enter the element number: ";
cin >> n;
cout << "Enter the " << n << " Elements: ";
for(i=0; i<n; i++) {
cin >> x;
v.push_back(x);
}
for(i=0; i<n; i++) {
sum+=v[i];
mx = max(mx, v[i]);
mn = min(mn, v[i]);
}
avg = sum/n;
cout << "The SUM of list is = " << sum << endl;
cout << "The AVERAGE of list is = " << avg << endl;
cout << "The MAXIMUM of list is = " << mx << endl;
cout << "The MINIMUM of list is = " << mn << endl;
}
