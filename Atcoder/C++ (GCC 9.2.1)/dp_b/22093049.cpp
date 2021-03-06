//Author : Krishan Kant Agnihotri        
#include<bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

//ordered_set
template<class T> using oset =tree<T, null_type, less<T>, rb_tree_tag,tree_order_statistics_node_update> ;
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>

//find_by_order(k)  returns iterator to kth element starting from 0;
//order_of_key(k) returns count of elements strictly smaller than k;
//erase,insert same as normal set
//define it as oset<int> s; or oset<pair<int,int>> s;

//bunch of pragmas
#pragma GCC optimize("O3")
#pragma GCC optimize("Ofast,unroll-loops,no-stack-protector,fast-math")
#pragma comment(linker, "/stack:200000000")
#pragma GCC target("sse,sse2,sse3,sse4,popcnt,abm,mmx,tune=native")


//#pragma Gcc target("avx2,fma,avx")
//(Uncomment when needed and be sure it not give TLE bcoz it requires time)
//#pragma GCC optimize "trapv"//to check integer overflow and gives RE.

//macros
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
#define fr(i,a,b) for(int i= a ;i<=b ;i++)
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

//boost for big int 
//#include<boost/multiprecision/cpp_int.hpp>
//uncoment for large int requirement
//using boost::multiprecision::cpp_int;

//forced_functions 
void file_io(){
fast_io
    #ifndef ONLINE_JUDGE
    freopen("inputa.txt","r",stdin);
    freopen("outputa.txt","w",stdout);
    freopen("log.txt","w",stderr);
    #endif
}

//safe_hash
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

//const
const long long int MOD = 1e9+7;
const long long int MOD2 = (119<<23)+1;//(119<<23)+1==998244353
//random
ll stoii(string s){
    ll ans = 0;
    for(auto it: s){
        ll cur = it-'0';
        ans = ans*10+cur;
    }
    return ans;
}

//matrix stuff
int dx[]={-1,0,1,0};
int dy[]={0,1,0,-1};
ll n;
const ll N = 1e5+3;
ll v[N];
ll dp[N];
ll calc(ll n){
	if(n<1){
		return INF;
	}
	if(dp[n]!=-1){
		return dp[n];
	}
	if(n==1){
		return 0 ;
	}
	if(n==2){
		return abs(v[n]-v[n-1]);
	}
	
	ll ans1 = INF;
	if(n>=2)
		ans1 = min(ans1,calc(n-2)+abs(v[n]-v[n-2]));
	ans1 = min(ans1,calc(n-1)+abs(v[n]-v[n-1]));
	dp[n] = ans1;
	return ans1;
}
bool test = false;
bool file = true;
void solve(){
cin>>n;
for(int i = 1 ;i<=n ;i++)
cin>>v[i]; 
dp[0] = 0 ; 
dp[1]  = 0 ; 
dp[2] = abs(v[2]-v[1]);
for(int i = 3 ;i<=n ;i++){
	dp[i] = min(dp[i-1]+abs(v[i]-v[i-1]),dp[i-2]+abs(v[i]-v[i-2]));

}
cout<<dp[n]<<endl;

}
int main(){
    if(file)
      file_io();
    int t ;
    t = 1 ;
    if(test)
    cin>>t;
    while(t--){
            solve();

    }
    Time
}
