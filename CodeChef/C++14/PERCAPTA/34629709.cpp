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
const int N = 2*100000+5;
vector<int> adj[N+1];
bool vis[N+1];
bool taken[N+1];
vector<int>  res;
vector<int> tmp;
void dfs(int u)
{
    vis[u]=true;
    tmp.push_back(u);
    for(auto child : adj[u])
    {
        if(taken[child]==true&&vis[child]==false)
        dfs(child);
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
{int n,m;
cin>>n>>m;
vector<ll> a(n+1),b(n+1);
for(int i = 1  ; i<=n ;i++)
{
    cin>>a[i];
    vis[i]=false;
    adj[i].clear();
    taken[i]=false;
}
for(int i=  1;i<=n ;i++)
cin>>b[i];
res.clear();
while(m--)
{int u,v;
    cin>>u>>v;
    adj[u].push_back(v);
    adj[v].push_back(u);
}
    ll mxnum=a[1];
    ll mxden=b[1];
    for(int i = 2 ; i<= n; i++)
    if(a[i]*mxden>b[i]*mxnum)
    mxnum=a[i],mxden=b[i];
    for(int i = 1;i<=n ;i++)
    if(mxnum*b[i]==mxden*a[i])
    {
        taken[i]=true;
    }
    
    for(int i=  1; i<=n;i++)
    {
        if((vis[i]==false)&&(taken[i]==true))
        {
            dfs(i);
            if(res.size()<tmp.size())
            res=tmp;
            tmp.clear();
        }
    }
    cout<<res.size()<<endl;
    for(auto it : res)
    cout<<it<<" ";
    cout<<endl;
}
}
