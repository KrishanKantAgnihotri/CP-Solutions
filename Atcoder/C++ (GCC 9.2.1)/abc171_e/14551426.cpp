#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int main()
{
ll sum = 0 ;     ll n,k;
 cin>>n;
vector<int> v(n);
unordered_map<int,int> u;
for(int i = 0 ; i<n ; i++) cin>>v[i],u[v[i]]++; 
for(int i = 0 ;i<n ;i++) sum+=v[i];
cin>>k;
while(k--)
{
int a,b;
cin>>a>>b;
int cnt = u[a];
u[a]=0;
u[b]+=cnt;
sum+=(-cnt*a+b*cnt);
cout<<sum<<endl;
}
}