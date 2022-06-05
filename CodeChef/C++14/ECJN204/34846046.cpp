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

int main()
{fast_io
#ifndef ONLINE_JUDGE
freopen("in.txt","r",stdin);
freopen("out.txt","w",stdout);
#endif
int t;
cin>>t;
while(t--)
{int n;
cin>>n;
int a ,b,c;
a= b=c=0;
for(int i = 0 ;i<n ;i++)
{char p,q,r;
    cin>>p>>q>>r;
    string s ;
    s+=p;s+=q;s+=r;
    sort(all(s));
    if(s=="PRS")
    continue;
    unordered_map<char,int> u;
    u[p]++;
    u[q]++;
    u[r]++;
    if(p=='R'&&u['S'])
    a+=u['S'];
    if(p=='S'&&u['P'])
    a+=u['P'];
    if(p=='P'&&u['R'])
    a+=u['R'];
    if(p=='R'&&u['P'])
    a-=u['P'];
    if(p=='S'&&u['R'])
    a-=u['R'];
    if(p=='P'&&u['S'])
    a-=u['S'];
    
    if(q=='R'&&u['S'])
    b+=u['S'];
    if(q=='S'&&u['P'])
    b+=u['P'];
    if(q=='P'&&u['R'])
    b+=u['R'];
    if(q=='R'&&u['P'])
    b-=u['P'];
    if(q=='S'&&u['R'])
b-=u['R'];
    if(q=='P'&&u['S'])
    b-=u['S'];
    
    if(r=='R'&&u['S'])
    c+=u['S'];
    if(r=='S'&&u['P'])
    c+=u['P'];
    if(r=='P'&&u['R'])
    c+=u['R'];
    if(r=='R'&&u['P'])
    c-=u['P'];
    if(r=='S'&&u['R'])
c-=u['R'];
    if(r=='P'&&u['S'])
    c-=u['S'];
}
    cout<<a<<" "<<b<<" "<<c<<endl;
}
}
