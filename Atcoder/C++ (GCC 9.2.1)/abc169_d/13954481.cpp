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
long long a,b;
cin>>a>>b;
bool flag = false;

    for(ll j = 0; j<=a ;j++)
    {
        if((a-j)*4+j*2==b)
        {
            flag = true;
            break;
        }    
    }

if(flag)
cout<<"Yes\n";
else
cout<<"No\n";
}
