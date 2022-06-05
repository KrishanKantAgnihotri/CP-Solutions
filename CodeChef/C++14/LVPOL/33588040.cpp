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
const int N=100005;
vector<int> adj[N+1];
bool vis[N+1];
int cc_size;
void dfs(int u )
{
    vis[u]=true;
    cc_size++;
    for(auto it : adj[u])
    {
        if(!vis[it])
        {
            dfs(it);
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
    int n;
    cin>>n;
    for(int i = 0 ; i<=n ;i++)
    adj[i].clear(),vis[i]=false;
    int k ; 
    cin>>k;
    int u,v;
    while(k--)
    {
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    vi ans;
    int cc = 0 ; 
    for(int  i = 0 ; i<n ;i++)
    {
        if(!vis[i])
        {cc++;
        //cout<<i<<" ";
        dfs(i);
        ans.push_back(cc_size);
        cc_size=0;
            
        }
    }
    sort(all(ans));
    cout<<ans.size()<<endl;
    for(auto it : ans )
    cout<<it<<" ";
    cout<<endl;
}
}
