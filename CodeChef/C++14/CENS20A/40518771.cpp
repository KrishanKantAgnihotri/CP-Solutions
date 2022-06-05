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

int main()
{fast_io
#ifndef ONLINE_JUDGE
freopen("in.txt","r",stdin);
freopen("out.txt","w",stdout);
#endif
int t;
//cin>>t;
t=1;
while(t--)
{int n,m;
    //int n,m;
    cin>>n>>m;
    char arr[n+1][m+1];
    ll arr2[n+2][m+2];
    memset(arr2,0,sizeof(arr2));
    /*for(int i = 1;i<=n ;i++)
    arr2[i][0]=0;
    for(int i = 1;i<=m ;i++)
    arr2[0][i]=0;*/
    for(int i = 1;i<=n ;i++){
        for(int j =1 ;j<=m ;j++)
        {cin>>arr[i][j];
        /*arr2[i][j]=arr[i][j]-'0'*/
        //cout<<arr[i][j];
        }    
            //cout<<endl;
        }
    int q;
    cin>>q;
    while(q--){
        ll x1,y1,x2,y2;
        cin>>x1>>y1>>x2>>y2;
    arr2[x1][y1]++;
		arr2[x2 + 1][y2 + 1]++;
		arr2[x1][y2 + 1]--;
		arr2[x2 + 1][y1]--;
        
    }
    for(int i=1;i<=n;i++){
		for (int j = 1; j <= m; j++) {
			arr2[i][j] += (arr2[i - 1][j] + arr2[i][j - 1] - arr2[i - 1][j - 1]);
			/*if(arr2[i][j]&1)
			cout<<((arr[i][j]-'0')^1);
			else
			cout<<arr[i][j];*/
			cout<<(arr2[i][j]+(arr[i][j]-'0'))%2;
		}
		cout<<endl;
    }
}
}
