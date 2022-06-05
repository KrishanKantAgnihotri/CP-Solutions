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
long long ans, md = 1000000000 + 7;
int i, v, n, k, j;
int inf = 1000000000;
int a[1000333], f[1000033];

int get(int x){
    int res = inf;
    while (x > 0){
        res = min(res, f[x]);
        x = (x & (x+1)) - 1;
    }      
    return res;
}

void upd(int x, int d){
     while (x <= 1000000){
         f[x] = min(f[x], d);
         x = x | (x+1);
     }
}

int main(){
    scanf("%d%d", &n, &k);
    for (i = 1; i <= n; i++)
        scanf("%d", &a[i]);
    for (i = 1; i <= 1000000; i++)
        f[i] = inf;
    ans = 1;
    for (i = n; i >= 1; i--){
        v = get(a[i] - 1);
        upd (a[i], i); 
        if (v == inf) continue;
        long long x = (v - i + 1);
        ans = (ans * x) % md;
    }        
    printf("%lld\n", ans);
}