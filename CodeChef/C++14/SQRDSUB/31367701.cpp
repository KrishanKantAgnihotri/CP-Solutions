//https://stackoverflow.com/questions/61015175/how-to-find-the-number-of-contiguous-subsequences-whose-product-can-be-expressed
//https://www.geeksforgeeks.org/number-subarrays-sum-exactly-equal-k/
#include<bits/stdc++.h>
#include<boost/multiprecision/cpp_int.hpp>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

#define ull unsigned long long int
#define ll long long
#define vi vector<int>
#define mii map<int,int>
#define all(x) x.begin(),x.end()
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define endl "\n"
#define pb push_back
#define MOD 1e9+7
#define INF 0x3f3f3f3f
//#define show(x) cerr<<x#<<" "<<x<<"\n";

//typedef tree<pair<int,int>,null_type, 
//less<pair<int,int>>,rb_tree_tag,tree_order_statistics_node_update>   ordered_set;

//(UNCOMMENT WHEN HAVING LOTS OF RECURSIONS)\
#pragma comment(linker, "/stack:200000000")
//(UNCOMMENT WHEN NEEDED)\
#pragma GCC optimize("Ofast,unroll-loops,no-stack-protector,fast-math")
//#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
//#pragma GCC optimize("O3")
//uncoment for large int requirement

//using boost::multiprecision::cpp_int;
//using namespace _gnu_pbds;
using namespace std;
void sum(int n)
{ll sum = 0 ; 
    for(int i = 0 ; i<n ;i++)
    sum+=i;
}
int main()
{fast_io
#ifndef ONLINE_JUDGE
freopen("in.txt","r",stdin);
freopen("out.txt","w",stdout);
#endif
int t;
cin>>t;
while(t--)
{
ll n;
cin>>n;
vi v(n);
vi v2(n);

for(int i = 0  ; i<n ;i++)
{cin>>v[i];
if(v[i]&1)
v2[i]=0;
else
{if(v[i]%4==0)
v2[i]=4;
else
v2[i]=2;

}
 sum(100);   
}
ll ans = 0 ;
ll current=0 ; 
unordered_map<int,ll> u;
for(int i = 0 ; i<n ; i++)
{
    current+=v2[i];
    if(current==2)
    ans++;
    if(u.find(current-2)!=u.end())
    ans+=u[current-2];
    u[current]++;
}
cout<<n*(n+1)/2-ans<<endl;
}
}
