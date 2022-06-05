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
string a,b;
cin>>a>>b;
int m;
cin>>m;
int dp[26][26]={0};
string s;

while(m--)
{
cin>>s;
char p = s[0];
char q = s[3];
//cout<<p<<" "<<q<<endl;
dp[p-'a'][q-'a']=1;
dp[p-'a'][p-'a']=1;
dp[q-'a'][q-'a']=1;
}
for(int k = 0 ; k<26 ;k++)
{for(int i = 0 ; i<26 ; i++)
for(int j = 0  ; j<26 ; j++)
    dp[i][j]|=dp[i][k]&dp[k][j];
}
if((int)a.length()!=(int)b.length())
{
    cout<<"NO\n";
    continue;
}
bool flag = true;
for(int i = 0 ; i<(int)a.length();i++)
if(a[i]!=b[i])
{
    if(dp[a[i]-'a'][b[i]-'a']!=1)
    {flag= false;
        break;
    }
}
    if(flag)
    cout<<"YES\n";
    else
    cout<<"NO\n";
    
}
}
