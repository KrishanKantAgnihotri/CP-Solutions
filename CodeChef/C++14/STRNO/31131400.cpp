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

void is(int p )
{
vector<int> primes;
bool visited[100]={false};
for(int i = 2 ;i*i<=p; i++)
{if(!visited[i])
    {visited[i]=true;
    primes.push_back(i);
        for(int j =i*i; j<=p ;j+=i)
     visited[j]=true;
    }
}
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
ll x,k;

cin>>x>>k;
bool flag = true;
int p = 100;
is(p);

ll cnt = 0 ;
while(x%2==0&&flag)
{x/=2;
cnt++;
if(cnt>=k&&flag)
{
    cout<<1<<endl;
    flag = false;
}
    
}
if(flag)
{
    for(int i= 3 ; i*i<=x;i+=2)
    {
        while(x%i==0&&flag)
        {
            x/=i;
            cnt++;
            if(cnt>=k&&flag)
            {cout<<1<<endl;
                flag=false;
            }
        }
    }
    cnt=cnt+(x>2&&flag);
    if(flag)
    cout<<!(cnt<k)<<endl;
}
    
}


 
}

