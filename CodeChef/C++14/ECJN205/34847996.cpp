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
const int N=10000+5;
vector<int> adj[N+1];
bool vis[N+1];
bool tre[N+1];
int dist[N+1];
void dfs(int u)
{
    vis[u]=true;
    for(auto child : adj[u])
    {
        if((!vis[child])&&tre[child])
        {
            dist[child]=dist[u]+1;
            dfs(child);
        }
        else{
            
        if(tre[child])
        dist[child]=min(dist[child],dist[u]+1);
        }
        
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
    int n,m;
    cin>>n>>m;int num;
    for(int i = 1;i<=n ;i++)
    vis[i]=false,dist[i]=INF,tre[i]=0,adj[i].clear();
    
    for(int i = 0 ;i<m ;i++) {cin>>num;tre[num]=1;}
    int k ;
    cin>>k;
    int u,v;
    while(k--)
    {
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    int s,d;
    cin>>s>>d;
    dist[s]=0;
    //dfs(s);
    queue<int> q;
    q.push(s);
    while(!q.empty())
    {int u = q.front();
    q.pop();
    if(vis[u]&&tre[u]==0)
    continue;
    vis[u]=true;
    for(auto child : adj[u])
    {   if(!vis[child]&&tre[child])
        {dist[child]=min(dist[u]+1,dist[child]);
        q.push(child);}
    }
        
    }
    if(vis[d])
    cout<<dist[d]<<endl;
    else
    cout<<"-1"<<endl;
}
}
