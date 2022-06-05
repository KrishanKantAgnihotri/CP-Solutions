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
{
int t;
cin>>t;
while(t--)
{
int n;
cin>>n;
if(n==1)
{cout<<1<<endl;
cout<<1<<" "<<1<<endl;
    continue;
}
else if(n==2)
{
    cout<<1<<endl;
    cout<<2<<" "<<1<<" "<<2<<endl;
    continue;
}
cout<<n/2<<endl;

vector<int> a[n/2+1];
for(int i = 0;i<n/2 ;i++)
{
    a[i].push_back(2*(i+1));
}
int t;
if(n&1)
t=n/2+1;
else
t=n/2;
for(int i= 0;i<n/2;i++)
{
    a[i].push_back(2*(i+1)-1);
}
if(n&1)
a[0].push_back(n);
for(int i=0; i<n/2 ;i++)
{cout<<a[i].size()<<" ";
    for(int j = 0 ; j<a[i].size();j++)
    {
        if(j!=a[i].size()-1)
        cout<<a[i][j]<<" ";
        else
        cout<<a[i][j];
    }
    cout<<endl;
}
}
}
