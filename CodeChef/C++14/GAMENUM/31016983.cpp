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

using boost::multiprecision::cpp_int;
//using namespace _gnu_pbds;
using namespace std;
ll msb(ll n)
{ll cnt = 0 ; 
    while(n>>=1)
    cnt++;
    return cnt ;
}

ll cycle(ll num,ll bit_size)
{
   ll drop_lsb = num&1;
    num = (num >> 1) ; 
    num = num^(drop_lsb <<bit_size);
  return num; 
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
ll a,b;
cin>>a>>b;
ll tmp = 0 ; 
ll mx = 0;
ll cnt = 0  ;
ll final = 0;
ll bit = max(msb(b),msb(a))+1;
ll d = bit;

bit+=2;
//cout<<bit<<endl;
while(bit)
{

if(mx<(b^a))
{
    mx=b^a;
    final=cnt;
}
//cout<<(b^a)<<endl;
//cout<<b<<endl;

    b=cycle(b,d-1);
    bit--;
    cnt++;
}
cout<<final<<" "<<mx<<endl;


}
}
