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
bool isleap(int year)
{
    return (((year % 4 == 0) && (year % 100 != 0)) ||
             (year % 400 == 0));
}
bool dst(const pair<string,ll> &a,  
               const pair<string,ll> &b) 
{ 
       return (a.second <b.second); 
} 
int main()
{fast_io
int t;
cin>>t;
while(t--)
{int n;
cin>>n;
    vector<pair<string,ll>> v;
    string s;
    ll num;
    for(int i =0 ; i<n;i++)
    {
        cin>>s>>num;
        v.pb({s,num});
    }
    sort(all(v),dst);
    for(int i =0  ;i<n ;i++)
    {
        cout<<v[i].first<<endl;
    }
//cpp_int n;//uncoment for large no like 100 factorial;

}
}
