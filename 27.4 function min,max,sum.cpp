#include<iostream>
#include<vector>
using namespace std;
#define ll long long int
vector<double> v;
ll i;
double sum(ll n)
{
double res = 0;
for(i=0; i<n; i++) {
res+=v[i];
}
cout<<"sum:"<<res;
}
double avg(ll n)
{
double res = sum(n)/ n;
return res;
}
double mx(ll n)
{
double res = -1;
for(i=0;i<n;i++) {
res = max(res, v[i]);
}
return res;
}
double mn(ll n)
{
double res = 1e18;
for(i=0;i<n;i++) {
res = min(res, v[i]);
}
return res;
}
int main()
{
ll i, n;
double x;
cout << "Enter the element number: ";
cin >> n;
cout << "Enter the " << n << " Elements: ";
for(i=0; i<n; i++) {
cin >> x;
v.push_back(x);
}
}
