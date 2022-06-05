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
bool is_check(int i,int j ,int r,int c)
{
    if((i>=0)&&(j>=0)&&(i<r)&&(j<c))
    return true;
    return false;
}
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
    int r,c;
    cin>>r>>c;
    int adj[r+1][c+1];
    bool ok = true;
    for(int i = 0 ;i<r ;i ++)
    {
        for(int j = 0 ;j<c ;j ++)
        cin>>adj[i][j];
    }
    for(int i = 0 ;i<r ;i++)
    {
        for(int j = 0 ;j<c;j++)
        {int  cnt = 0 ; 
            for(int k = 0 ;k<4 ;k++)
            {
                if(is_check(i+dx[k],j+dy[k],r,c))
                cnt++;
            }
            if(!(cnt>adj[i][j]))
            ok = false;
            if(!ok)
            break;
        }
        if(!ok)
        break;
    }
    if(ok)
    cout<<"Stable\n";
    else
    cout<<"Unstable\n";
}
}
