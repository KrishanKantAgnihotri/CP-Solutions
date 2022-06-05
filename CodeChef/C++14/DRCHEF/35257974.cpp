#include<bits/stdc++.h>
//#include<boost/multiprecision/cpp_int.hpp>
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

//typedef tree<pair<int,int>,null_type,less<pair<int,int>>,rb_tree_tag,tree_order_statistics_node_update>   ordered_set;

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
int dx[]={-1,0,1,0};
int dy[]={0,1,0,-1};

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
    ll n,x;
    cin>>n>>x;
    vector<ll> v(n);
    //unordered_map<int,int> u;
    for(int i = 0 ;i<n ;i++)
    cin>>v[i];
    sort(all(v));
    ll mx = v[n-1];
    ll cnt = 0 ; 
    ll cnt2 = 0 ; 
    ll i  = 0 ; 
     while(i<n&&v[i]<x)
     i++,cnt2++;
    if(i>0&&x-v[i-1]<=x/2)
    i--,cnt2--;
    while(i<n)
    {cnt++;
    //cout<<x<<" "<<v[i]<<endl;
    if(v[i]<=x)
     {
         x=v[i];
         i++;
     }
        x*=2;
    }
    cout<<cnt+cnt2<<endl;
}
}
