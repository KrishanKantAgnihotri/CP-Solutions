#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int main()
{
ll sum = 0 ;     ll n,k;
 cin>>n>>k;
vector<int> v(n);
for(int i = 0 ; i<n ; i++) cin>>v[i]; sort(v.begin(),v.end());
for(int i = 0 ;i<k ;i++) sum+=v[i];
cout<<sum<<endl;
}