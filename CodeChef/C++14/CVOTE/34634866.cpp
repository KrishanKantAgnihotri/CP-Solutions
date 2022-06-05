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
int dx[]={-1,0,1,0};
int dy[]={0,1,0,-1};

int main()
{fast_io
#ifndef ONLINE_JUDGE
freopen("in.txt","r",stdin);
freopen("out.txt","w",stdout);
#endif
int n;
cin>>n;
int q;
cin>>q;
string a,b;
vector<pair<string,string>> v;
unordered_map<string,int> u1;
unordered_map<string,string> u2;
unordered_map<string,int> u3;
for(int i = 0 ; i<n ;i++)
{
    cin>>a>>b;
    v.push_back({a,b});
    u2[a]=b;
    
}
while(q--)
{
    cin>>a;
    u1[a]++;
    u3[u2[a]]++;
}
sort(all(v));
string ans;
ll mx = INT_MIN;
ll mx2 = INT_MIN;
string ans2 ; 
for(auto it : v)
{
    if(u1[it.first]>mx)
    mx=u1[it.first],ans=it.first;
    if(u3[it.second]>mx2)
    mx2 = u3[it.second],ans2 = it.second;
}
for(auto it : v)
{
   
    if(u3[it.second]==mx2)
    if(ans2>it.second)
    ans2 = it.second;
}
// //string k = "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz";
// vector<string> k ;
// for(auto it : v)
// {if(u1[it.first]==mx)
// {k.push_back(it.second);
// }
// }
// sort(all(k));
cout<<ans2<<endl;
cout<<ans<<endl;
    
}
