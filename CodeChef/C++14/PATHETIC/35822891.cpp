#include<bits/stdc++.h>
//#include<boost/multiprecision/cpp_int.hpp>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

#define ull unsigned long long int
#define ll long long
#define FOR(i,n) for(int i = 0;i<n ;i++)
#define ii pair<int,int>
#define vii vector<ii>
#define vi vector<int>
#define mii map<int,int>
#define uii unordered_map<int,int>
#define all(x) x.begin(),x.end()
#define ff first
#define ss second
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define endl "\n"

#define pb push_back
#define MOD 1e9+7
#define INF 0x3f3f3f3f
#define print(x) cout<<x<<"\n";

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
struct custom_hash {
    static uint64_t splitmix64(uint64_t x) {
        // http://xorshift.di.unimi.it/splitmix64.c
        x += 0x9e3779b97f4a7c15;
        x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9;
        x = (x ^ (x >> 27)) * 0x94d049bb133111eb;
        return x ^ (x >> 31);
    }

    size_t operator()(uint64_t x) const {
        static const uint64_t FIXED_RANDOM = chrono::steady_clock::now().time_since_epoch().count();
        return splitmix64(x + FIXED_RANDOM);
    }
};
//use it with unordered_map<T,T,custom_hash> safe_map
int dx[]={-1,0,1,0};
int dy[]={0,1,0,-1};
vector<vector<int>> adj;
vector<int> depth;
ll p1=1,p2=1;
bool isprime(int n){
    for(int i= 2 ;i*i<=n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
ll lim =2e18+1;
void calc(int n){
    for(int i = 100;i>=2;i--){
        if(isprime(i)){
            if(p1>p2){
                
                p2*=i;
                if(p2>lim)
                p2/=i;
            }
            else
            {p1*=i;
                if(p1>lim)
                p1/=i;
            }
        }
    }
}
void dfs(int u,int v= -1){
    if(v!=-1)
    depth[u]=depth[v]+1;
    else
    depth[u]=1;
    for(auto child: adj[u]){
        if(child^v){
            dfs(child,u);
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
calc(100);
while(t--)
{int n;
cin>>n;
    adj=vector<vector<int>>(n);
    depth=vector<int>(n);
    int m = n-1;
    while(m--){
        int u,v;
        cin>>u>>v;
        u--,v--;
        adj[u].pb(v);
        adj[v].pb(u);
    }
    dfs(0);
    for(int i =0 ;i<n ;i++){
        if(depth[i]&1){
            cout<<p1<<" ";
        }  else
            cout<<p2<<" ";
        
    }
    cout<<endl;
}
}
