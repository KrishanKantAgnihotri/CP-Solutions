#include<bits/stdc++.h>
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
#define INF 1e17
#define print(x) cout<<x<<"\n";

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

ll k,n;
vector<int> v;
//vector<vector<int> freq;
int rec(int i , int lst , int cur,int table){
    if(i>n)
    {unordered_map<int,int> u;
    int cnt = 0 ;

        for(int j  = lst ;j<i ; j++){
            u[v[j]]++;
            if(u[v[j]]==2)
                cnt+=2;
            else
            if(u[v[j]]>2)
            cnt++;
        }
      return (k*table+cnt+cur);
    }
    int op1 = rec(i+1,lst,cur,table);
    //int neww =  0 ;
int cnt = 0 ;
unordered_map<int,int> u;
        for(int j  = lst ;j<i ; j++){
            u[v[j]]++;
            if(u[v[j]]==2)
                cnt+=2;
            else
            if(u[v[j]]>2)
            cnt++;
        }
    int op2 = rec(i+1,i,cur+cnt,table+1);
    return(min(op1,op2));
}
int main(){
fast_io;
int t;
cin>>t;
int tp = 0 ;
while(t--){
cin>>n>>k;

v = vector<int>(n+1);
for(int i = 0 ;i<n;i++)
    cin>>v[i+1];
if(k==1){
    ll ans = 1 ; 
unordered_map<int,int> u;
for(int i = 1;i<=n ;i++){
     if(u[v[i]]==1){
        ans++;
        u.clear();
    }
    u[v[i]]++;
}
cout<<ans<<endl;
continue;
}    
//cout<<rec(0,0,0,1)<<endl;
vector<vector<ll>> dp(n+1,vector<ll>(n+1));
vector<vector<ll>> dp2(101,vector<ll>(n+1));
unordered_map<int,int> u;
for(int i = 1;i<=n ;i++){
    ll cnt = 0 ;
    for(int j = i;j<=n ;j++){
    //int cnt = 0 ; 
    //dp[i][j]=dp[i-1][j];
    u[v[j]]++;
     if(u[v[j]]==2)
        cnt+=2;
        if(u[v[j]]>2)
            cnt++;
dp[i][j]=cnt;
}

    u.clear();
}
//Now we have all the possible i -> j people placed on same table cost
//think of some thing to.......
for(int i = 1;i<=n ;i++)
dp2[1][i]=dp[1][i];

for(int i = 2;i<=100 ;i++){
    for(int j = 2;j<=n ;j++){
        dp2[i][j]=INF;
        for(int tmp =1;tmp<j ;tmp++){
            dp2[i][j]=min(dp2[i][j],dp2[i-1][tmp]+dp[tmp+1][j-1]);
        }
    }
}
ll final_ans = INF;
for(ll i = 1;i<=100 ;i++){
   final_ans = min(final_ans,k*i+dp2[i][n]);
}
cout<<final_ans<<endl;
}
}
