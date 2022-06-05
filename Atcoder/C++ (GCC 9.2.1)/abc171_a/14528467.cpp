#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int main()
{
int n;
cin>>n;
ll x =  0 ; 
vector<int> v(n);
for(int   i = 0  ; i<n ; i++) cin>>v[i],x^=v[i];
for(int i = 0 ; i<n; i++) cout<<(x^v[i])<<" ";
cout<<endl;
}