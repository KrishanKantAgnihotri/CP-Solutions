#include<bits/stdc++.h>
using namespace std;
/*#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;*/

#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
// find_by_order(k)  returns iterator to kth element starting from 0;
// order_of_key(k) returns count of elements strictly smaller than k;
// erase,insert same as normal set

#define ull unsigned long long int
#define ll long long
#define llll(i,n) for(int i = 0;i<n ;i++)
#define ii pair<int,int>
#define vii vector<ii>
#define vi vector<int>
#define vl vector<ll>
#define mii map<int,int>
#define uii unordered_map<int,int>
#define all(x) x.begin(),x.end()
#define f first
#define s second
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define endl "\n"
#define pb push_back
#define INF 1e18
#define print(x) cout<<x<<"\n";
#define scanv(v,n) for(int i  = 0 ; i<n ;i++ ) cin>>v[i];
#define printv(v) for(auto it : v) cout<<it<<" ";
#define rall(v) v.rbegin(),v.rend()

//#include<boost/multiprecision/cpp_int.hpp>
//(Uncomment when needed and be sure it not give TLE bcoz it requires time)
//#pragma GCC optimize "trapv"//to check integer overflow and gives RE.
//typedef tree<pair<int,int>,null_type,
//less<pair<int,int>>,rb_tree_tag,tree_order_statistics_node_update>   ordered_set;
//(UNCOMMENT WHEN HAVING LOTS OF RECURSIONS)
//#pragma comment(linker, "/stack:200000000")
//(UNCOMMENT WHEN NEEDED)
//#pragma GCC optimize("Ofast,unroll-loops,no-stack-protector,fast-math")
//#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
//#pragma GCC optimize("O3")
//uncoment for large int requirement
//using boost::multiprecision::cpp_int;
template<typename T>
struct FenwickTree
{
    T N;
    vector<int> tree;

    void init(int n)
    {
        N = n;
        tree.assign(n + 1, 0);
    }

    void update(int idx, T val)
    {
        while (idx <= N)
        {
            tree[idx] += val;
            idx += idx & -idx;
        }
    }

    void updateMax(int idx, T val)
    {
        while (idx <= N)
        {
            tree[idx] = max(tree[idx], val);
            idx += idx & -idx;
        }
    }

    T pref(int idx)
    {
        T ans = 0;
        while (idx > 0)
        {
            ans += tree[idx];
            idx -= idx & -idx;
        }
        return ans;
    }

    T rsum(int l, int r)
    {
        return pref(r) - pref(l - 1);
    }

    T prefMax(int idx)
    {
        T ans = -2e9;
        while (idx > 0)
        {
            ans = max(ans, tree[idx]);
            idx -= idx & -idx;
        }
        return ans;
    }
};
//~ const int MAXN = 1e6+10;
//~ std::vector <int> prime;
//~ bool is_composite[MAXN];

//~ void sieve (int n) {
    //~ std::fill (is_composite, is_composite + n, false);
    //~ for (int i = 2; i < n; ++i) {
        //~ if (!is_composite[i]) prime.push_back (i);
        //~ for (int j = 0; j < (int)prime.size () && i * prime[j] < n; ++j) {
            //~ is_composite[i * prime[j]] = true;
            //~ if (i % prime[j] == 0) break;
        //~ }
    //~ }
//~ }

ll stoii(string s){
    ll ans = 0;
    for(auto it: s){
        ll cur = it-'0';
        ans = ans*10+cur;
    }
    return ans;
}
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
const long long int MOD = 1e9+7;
int dx[]={-1,0,1,0};
int dy[]={0,1,0,-1};
ll n;
const long long int N = 1e5+5 ;
vector<ll> adj[N+1];
vector<int> col(N+1);
vector<int> targ(N+1);
vector<ll> req(N+1);
ll cnt[2];
ll cur = 0  ;
void dfs(int v, int p, bool c) {
    targ[v] = c;
    for (auto child : adj[v]) {
        if (child!=p) {
            dfs(child, v, c ^ 1);
        }
    }
}
pair<ll, ll> dfs2(int v, int p) {
    pair<ll, ll> x = make_pair(0, 0);

    if (req[v] == 0) ++x.f;
    else if (req[v] == 1) ++x.s;

    for (ll y: adj[v]) {
        if (y!=p) {
            pair<ll, ll> z = dfs2(y, v);
            x.f += z.f;
            x.s += z.s;
        }
    }

    if (v != -1) {
        cur += max(x.f, x.s) - min(x.f, x.s);
        // cout << v << " " << x << " " << cur << endl;
    }

    return x;
}
ll help(){
cnt[0]=cnt[1]= cur = 0 ;
for(ll i = 0 ; i<n ; i++)
{
    ++cnt[col[i]];
    --cnt[targ[i]];
}
if(cnt[0]!=0 || cnt[1]!=0)
return 1e15;
for(int i = 0 ; i<n ;i++){
    if(targ[i]==col[i]) req[i]=2;
    else
        req[i]=targ[i];
}
dfs2(0,-1);
return cur;
}
int main(){
    fast_io
    #ifndef ONLINE_JUDGE
    freopen("inputa.txt","r",stdin);
    freopen("outputa.txt","w",stdout);
    #endif
    int t;
    t = 1;

    cin>>t;
    while(t--){

cin>>n;
for(int i  = 0 ; i<n ;i ++) adj[i].clear();
    for(int i = 0 ; i<n-1 ;i++){
        ll u,v;
        cin>>u>>v;
        u--;v--;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    string s;
    cin>>s;
    for(int i = 0  ; i<n ;i++) col[i] = (s[i]-'0');
        dfs(0,-1,0);
   ll ans = 1e15;
   for(ll it  = 0 ; it<2 ; it++){
    ans = min(ans,help());
    for(ll i = 0 ; i<n ;i++) col[i]^=1;
   }
if(ans==1e15) ans = -1 ;
cout<<ans<<endl;

}
}
