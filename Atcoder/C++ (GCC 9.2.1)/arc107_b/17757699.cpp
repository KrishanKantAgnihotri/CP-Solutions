#include<bits/stdc++.h>
using namespace std;
/*#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;*/

//template<class T> using oset =tree<T, null_type, less<T>, rb_tree_tag,tree_order_statistics_node_update> ;
//#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
// find_by_order(k)  returns iterator to kth element starting from 0;
// order_of_key(k) returns count of elements strictly smaller than k;
// erase,insert same as normal set
//define it as oset<int> s; or oset<pair<int,int>> s;
#define ull unsigned long long int
#define ll long long
#define ii pair<int,int>
#define vii vector<ii>
#define vi vector<int>
#define vl vector<ll>
#define mii map<int,int>
#define uii unordered_map<int,int>
#define all(x) x.begin(),x.end()
#define ff first
#define ss second
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define endl "\n"
#define pb push_back
#define INF 1e18
#define lcm(a,b) a*b/__gcd(a,b)
#define print(x) cout<<x<<"\n";
#define scanv(v,n) for(int i  = 0 ; i<n ;i++ ) cin>>v[i];
#define printv(v) for(auto it : v) cout<<it<<" ";
#define rall(v) v.rbegin(),v.rend()
#define GOOGLE(i) cout<<"Case"<<" #"<<i<<": ";
#define Time cerr<<"\nTime Taken : "<<(float)(clock()-time_p)/CLOCKS_PER_SEC<<"\n";
clock_t time_p=clock();
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
struct SegTree {
    typedef int T;
    static constexpr T unit = 0;
    T f(T a, T b) { return a+b; } // (any associative fn)
    vector<T> s; int n;
    SegTree(int _n = 0, T def = unit) : s(2*_n, def), n(_n) {}
    void update(int pos, T val) {
        for (s[pos += n] = val; pos /= 2;)
            s[pos] = f(s[pos * 2], s[pos * 2 + 1]);
    }
    T query(int b, int e) { // query [b, e)
        T ra = unit, rb = unit;
        for (b += n, e += n; b < e; b /= 2, e /= 2) {
            if (b % 2) ra = f(ra, s[b++]);
            if (e % 2) rb = f(s[--e], rb);
        }
        return f(ra, rb);
    }
};
ll num;
/*const int MAXN = 1e6+10;
vector <int> prime;
 bool is_composite[MAXN];

void sieve (int n) {
    fill (is_composite, is_composite + n, false);
     for (int i = 2; i < n; ++i) {
    if (!is_composite[i]) prime.push_back (i);
         for (int j = 0; j < (int)prime.size () && i * prime[j] < n; ++j) {
             is_composite[i * prime[j]] = true;
             if (i % prime[j] == 0) break;
         }
     }
*/
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

const long long int MOD = 998244353;
ll tmp = 499122177;
int dx[]={-1,0,1,0};
int dy[]={0,1,0,-1};
const long long int N = 1e5 ;
ll power(ll x, ll y, ll  m)
{
    if (y == 0)
        return 1;
    int p = power(x, y / 2, m) % m;
    p = (p * p) % m;

    return (y % 2 == 0) ? p : (x * p) % m;
}
void solve(){
    ll a[3];
  for(int i=0 ; i<3 ; i++)
  {
      cin>>a[i];
      a[i]=(a[i]*(a[i]+1))/2;
      a[i]%=MOD;
  }

  ll ans=a[0]*a[1];
  ans%=MOD;
  ans*=a[2];
  ans%=MOD;
  cout<<ans<<endl;
}

int main(){

    fast_io
    #ifndef ONLINE_JUDGE
    freopen("inputa.txt","r",stdin);
    freopen("outputa.txt","w",stdout);
    freopen("log.txt","w",stderr);
    #endif
    int t ;
    t = 1 ;
    //cin>>t;
    while(t--){
    solve();
    }
    Time
}
