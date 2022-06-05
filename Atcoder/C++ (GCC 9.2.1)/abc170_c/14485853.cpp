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
using namespace std;
int dx[]={-1,0,1,0}; 
int dy[]={0,1,0,-1};

int main()
{
long long x,n;
cin>>x>>n;
if(n==0)
{
    cout<<x<<endl;
    return 0 ; 
}
unordered_map<int,int> u ;
int num;
for(int i = 0 ;i<n ;i++)
{
    cin>>num;
    u[num]++;
}
long long ans = x;
bool flag =true;
int a = x,b = x;
while(flag)
{
    if(!u[a])
    {
        ans= a;
        flag = false;
        break;
    }
    a--;
    if(!u[b])
    {  ans = b;
        flag = false;
        break;
    }
    b++;
}
cout<<ans<<endl;
}
