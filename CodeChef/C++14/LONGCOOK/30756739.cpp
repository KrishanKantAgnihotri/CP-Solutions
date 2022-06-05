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
int dow(ll y, ll m, ll d)
{
  static int t[] = {0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4};
  y -= m < 3;
  return (y + y/4 - y/100 + y/400 + t[m-1] + d) % 7;
}
bool isleap(ll y)
{
        if (y % 4 == 0)
    {
        if (y % 100 == 0)
        {
            if (y % 400 == 0)
                return true;
            else
                return false;
        }
        else
           return true;
    }
    else
           return false;
}
int main()
{fast_io
int t;
cin>>t;
  while(t--)
    {
        ll y1,m1,y2,m2;
        ll cnt = 0 ;
        cin>>m1>>y1>>m2>>y2;
        if(m1>2)
        y1=y1+1;
        if(m2<2)
        y2=y2-1;
        ll diff = y2-y1;
        cnt=202*(diff/800);
        diff=diff%800;
        y1 = y2 - diff;
        for(ll  i = y1; i<=y2;i++ )
        {if(dow(i,1,1)==3||((dow(i,2,1)==0)&&(!isleap(i))))
        {
            cnt++;
           //cout<<i<<"\n";
       }
            }
            
            cout<<cnt<<"\n";
    }
}
// 1 1 to 2 1000 we have 252 months
// 2 1000 to 2 2000 we have 254 months
// 2 2000 to 2 3000 we have 252 months
//2 3000 to 2 4000 we have 254
//252
//254 
//252
//2 1
//2 100
// 25
//2 100
//2 200
//25
//2 200
//2 300
//26
//2 300
//2 400
//26
//2 500
//2 500
//2 600
//2 600
//2 700