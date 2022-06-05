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
#define rall(v) v.rbegin(),v.rend()

//#include<boost/multiprecision/cpp_int.hpp>
//#include<ext/pb_ds/assoc_container.hpp>
//#include<ext/pb_ds/tree_policy.hpp>
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
int place(int i,int j,int n){
    return i*n+j+1;
}
//use it with unordered_map<T,T,custom_hash> safe_map
const long long int MOD = 1e9+7;
int dx[]={-1,0,1,0};
int dy[]={0,1,0,-1};
const long long int N = 1e5 ;
int main(){
    fast_io
    #ifndef ONLINE_JUDGE
    freopen("inputa.txt","r",stdin);
    freopen("outputa.txt","w",stdout);
    #endif
    int t;
    cin>>t;
    //t = 1;
    while(t--){
        ll n;
        cin>>n;
        ll ans = 0  ;
        vector<vector<int>> v(n,vector<int>(n));
        for(int i = 0 ; i<n ;i++){
            for(int j = 0 ;j<n ;j++){
                cin>>v[i][j];
            }
        }
        ll cnt = 0 ;
        for(int j = n-1 ;j>=0 ;j--){
            for(int i = 0 ; i<j ;i++){

                 if((place(i,j,n)!=v[i][j]) and (cnt%2==0)){
                    cnt++;
                    break;
                 }
                 else
                    if((cnt&1) and (place(i,j,n)==v[i][j])){
                        cnt++;
                        break;
                    }
            }
        }
       cout<<cnt<<endl;
    }
}
