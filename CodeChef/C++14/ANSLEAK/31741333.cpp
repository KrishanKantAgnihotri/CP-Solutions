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
{
int n,m,k;
cin>>n>>m>>k;
int tmp;
ll sum=0 ; 
//cout<<k<<" ";
unordered_map<int,int> u;
for(int i = 0  ; i<n;i++)
{

    for(int j =0 ;j<k ;j++)
    {cin>>tmp;
        u[tmp]++;
    }
    
}
int mx =INT_MAX;
int ans = 0;
for(auto it :u )
{if(mx>it.second)
{
    mx=it.second;
    ans=it.first;
}

}
bool flag =true;
    for(int i =1 ; i<=n ;i++)
     {if(flag)
         {cout<<(ans+i)%m+1<<" ";
             flag=true;
         }
         else
         {cout<<(ans+i-1)%m+1<<" ";
             flag=true;
             
         }
    
        
    }
}

}

