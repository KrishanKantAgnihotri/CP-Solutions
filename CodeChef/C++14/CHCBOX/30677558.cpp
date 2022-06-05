#include<bits/stdc++.h>
#include<boost/multiprecision/cpp_int.hpp>
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

int main()
{fast_io
#ifndef ONLINE_JUDGE
freopen("in.txt","r",stdin);
freopen("out.txt","w",stdout);
#endif
int t;
cin>>t;
while(t--)
{int n;
cin>>n;
ll arr[n],maxv=0,c=0;
     for(int i=0;i<n;i++)
     {
         cin>>arr[i];
         maxv=max(maxv,arr[i]);
     }
     vector<int>v;
     ll a=0,b=0;
     for(int i=0;i<n;i++)
     {
      if(arr[i]==maxv){
          a=i;
      }
     }
     
     for(int i=n-1;i>=0;i--)
     {
      if(arr[i]==maxv){
          b=i;
      }
     }
     int dist;
     dist=n/2-(a-b);
     if(dist>=0)
     cout<<dist<<endl;
     else cout<<0<<endl;
     

}
}
