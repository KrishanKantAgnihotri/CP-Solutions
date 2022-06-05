#include<bits/stdc++.h>
#include<boost/multiprecision/cpp_int.hpp>
#define ull unsigned long long int
#define ll long long
#define vi vector<int>
#define pi pair<int,int>
#define vii vector<pi>
#define eb emplace_back
#define mii map<int,int>
#define all(x) x.begin(),x.end()
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define f(i,a,b) for(ll i=a ;i<=b ; i++)
#define endl "\n"
#define pb push_back
#define mp make_pair
#define MOD 1000000007
#pragma GCC optimize("O3")
#define gcd __gcd(a,b)
#define lcm(a,b) (((a)*(b))/__gcd(a,b))
#define cntb(a) __builtin_popcount(a)
#define show(x) cout<<x<<" "
//(UNCOMMENT WHEN HAVING LOTS OF RECURSIONS)\
#pragma comment(linker, "/stack:200000000")
//(UNCOMMENT WHEN NEEDED)\
#pragma GCC optimize("Ofast,unroll-loops,no-stack-protector,fast-math")
//#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
//uncoment for large int requirement
//using boost::multiprecision::cpp_int;
using namespace std;

/*bool isprime(ull n) 
{ 
    if (n <= 1) return false; 
    if (n <= 3) return true; 
    if(n%2 == 0 || n%3 == 0) return false;

    for (int i=5; i*i<=n; i=i+6) 
        if (n%i == 0 || n%(i+2) == 0) 
           return false; 
    return true; 
}
ll ipow(ll base, ll exp)
{
    ll result = 1;
    for (;;)
    {
        if (exp & 1)
            result *= base;
        exp >>= 1;
        if (!exp)
            break;
        base *= base;
    }

    return result;
}*/
bool desc(const pair<int,int> &a,  
               const pair<int,int> &b) 
{ 
       return (a.first < b.first); 
} 
int main()
{fast_io
int t;
cin>>t;
while(t--)
{ 
ll n,k;
cin>>n>>k;
vi v(n);
ll ans[n]={0};
bool flag = true;
bool factors = true;
for(int i =0;i<n;i++)
{cin>>v[i];
if(k%v[i]!=0 and flag)
 {factors = false; 
 flag =false;
 ans[i]=k/v[i]+1;
     }
}
if(factors)
{ll tmp=0;  
for(int i = n-1; i>=0;i--)
{tmp = k/v[i];
if(k>v[i])
    {if(k%v[i]==0)
    tmp= tmp-1;
    else 
    tmp = tmp+1;

    }
    ans[i]=tmp;
    k=k-v[i]*tmp;
    if(k<0)
    {
        flag = false;
        break;
    }
    
}
}
if(flag)
cout<<"NO";
else
{cout<<"YES ";
for(int i = 0 ; i<n ;i++)
cout<<ans[i]<<" ";
}
cout<<endl;
}
}
