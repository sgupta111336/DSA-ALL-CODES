#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define for(i,n) for(ll i=0;i<n;i++)

int main()
{
ll n;
cin>>n;
ll a[n];
for(i,n)
cin>>a[i];

ll max=INT_MIN,min= INT_MAX;

for(i,n)
{
  if(a[i]>max)
  max=a[i];

  if(a[i]<min)
  min=a[i];
}

cout<<"MAX : "<<max<<endl;
cout<<"MIN : "<<min<<endl;
return 0;

}
