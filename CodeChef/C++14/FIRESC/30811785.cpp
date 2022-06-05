#include<bits/stdc++.h>
//#include<boost/multiprecision/cpp_int.hpp>
//#include<ext/pb_ds/assoc_container.hpp>
//#include<ext/pb_ds/tree_policy.hpp>

#define ull unsigned long long int
#define ll long long
#define vi vector<int>
#define mii map<int,int>
#define all(x) x.begin(),x.end()
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define endl "\n"
#define pb push_back
#define MOD 1000000007
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
const int N=100000;
int cnt=0;
vector<int> adj[N+1];
bool visited[N+1]={false};
void dfs(int v )
{
    visited[v]=true;
    cnt++;
    for(int i : adj[v])
    {
        if(!visited[i])
         dfs(i);
        
    }

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
for(int i = 1 ; i<=N ; i++)
{adj[i].clear();
visited[i]=false;
}
int n,m;
cin>>n>>m;
int a,b;
while(m--)
{
    cin>>a>>b;
    adj[a].push_back(b);
    adj[b].push_back(a);
    
}
int cc=0 ; 
ll ans = 1;

for(int i =1 ; i<=n ;i++)
{
    if(!visited[i])
    {    cnt=0;
    dfs(i);
        cc++;
        ans=(ans*cnt)%MOD;
    }
}
cout<<cc<<" "<<ans%MOD<<endl;
}

}
