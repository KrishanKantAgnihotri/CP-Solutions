#include<bits/stdc++.h>
#define ull unsigned long long int
#define ll long long
#define f(i,n) for(int i = 0;i<n ;i++)
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
#define INF 0x3f3f3f3f
#define print(x) cout<<x<<"\n";
#define printv(v) for(auto it : v) cout<<it<<" ";


//#include<boost/multiprecision/cpp_int.hpp>
//#include<ext/pb_ds/assoc_container.hpp>
//#include<ext/pb_ds/tree_policy.hpp>
//(Uncomment when needed and be sure it not give TLE bcoz it requires time)
//#pragma GCC optimize "trapv"//to check integer overflow and gives RE.
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
const long long int MOD = 1e9+7;
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
ll sum(ll a){
    return a*(a+1)/2;
}
ll rsum(ll s,ll n){
    return (-1 + sqrtl(1LL+8LL*s))/2LL;
    ll sm = 0 ;
    ll l = 1 ;ll r = n ;
    ll mid = 0 ; 
    while(l<=r){
        mid = (l+r)/2;
       ll sm = sum(mid);
       if(sm==s){
           return mid ;
       }
       else if(sm>s)
            r = mid-1;
       else 
       l = mid+1;
            
    }
    return l ;
     
  for(int  i = 1 ;i<=n ;i++){
    sm +=i;
    if(sm==s){
        return i;

    }else if(sm>s)
    return i-1;
  }
}
ll c(ll a,ll b){
ll res1 = 0 ;
ll res2 = 0 ;
if(a<=1){
res1 = 0 ;
}
else
res1 = a*(a-1)/2;
if(b<=1)
res2 = 0  ;
else
res2 = b*(b-1)/2;
return res1 +res2;

}
int main(){
    fast_io
    #ifndef ONLINE_JUDGE
    freopen("inputfor3.txt","r",stdin);
    freopen("outputa.txt","w",stdout);
    #endif
    int t;
    t = 1;
    cin>>t;

    while(t--){
 ll n;
 cin>>n;
 //ll ans ;
 //cin>>ans;
 ll my = sum(n);
 ll myans = 0 ;
 if(my&1){
myans = 0 ;
 }
 else{
    ll final_ans = 0 ;
    ll tmp = sum(n)/2;
ll tmp2 = rsum(tmp,n);
//cout<<tmp<<" "<<(n-tmp)<<endl;
ll ans2 = sum(tmp2);
if(ans2==tmp)
myans=c(tmp2,n-tmp2); 

 myans+=(n-tmp2);
}
cout<<myans<<endl;
}
}