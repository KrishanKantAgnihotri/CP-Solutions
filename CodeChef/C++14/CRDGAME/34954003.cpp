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
int dx[]={-1,0,1,0};
int dy[]={0,1,0,-1};
ll get(ll a)
{ll res = 0 ; 
    while(a)
    {
        res+=(a%10);
        a/=10;
    }
    return res;
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
    int n;
    cin>>n;
    int pt1=0;int pt2 = 0 ; 
    ll a,b;
    for(int i = 0 ;i<n ;i ++)
    {
        cin>>a>>b;
        a = get(a);
        b = get(b);
        if(a>b)
        pt1++;
        else if(b>a)
        pt2++;
        else
        pt1++,pt2++;
        
    }
    if(pt1>pt2)
    cout<<0<<" "<<pt1<<endl;
    else
    if(pt2>pt1)
    cout<<1<<" "<<pt2<<endl;
    else 
    cout<<2<<" "<<pt1<<endl;
}
}