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
void traverse(int r,int c,bool visited[8][8])
{

  vector<pair<int,int>> v;
  v.push_back({8,8});
  v.push_back({7,7});
  v.push_back({8,6});
  v.push_back({3,1});
  v.push_back({4,2});
  v.push_back({5,1});
  v.push_back({8,4});
  v.push_back({7,3});
  v.push_back({8,2});
  v.push_back({7,1});
  v.push_back({1,7});
  v.push_back({2,8});
  v.push_back({4,6});
  v.push_back({5,7});
  v.push_back({4,8});
  v.push_back({1,5});
  v.push_back({2,4});
  v.push_back({1,3});
  v.push_back({6,8});
  if(r==1&&c==1)
     { cout<<"19\n";
  }
  else
  {
      if((r+c)/2==r&&(r+c)/2==c)
      {
          cout<<"20\n";
          cout<<"1 1\n";
      }
      else
      {
          cout<<"21\n";
          cout<<(r+c)/2<<" "<<(r+c)/2<<endl;
          cout<<"1 1\n";
      }
  }
  for(int i=0 ;i<19;i++)
  cout<<v[i].first<<" "<<v[i].second<<endl;
}
int main()
{fast_io
int t;
cin>>t;
while(t--)
{
int r,c;
cin>>r>>c;
bool visited[8][8];
for(int i = 0 ; i<8 ;i++)
{
    for(int j = 0 ; j<8 ;j++)
    {if((i+j)&1)
    visited[i][j]=true;
    else
    visited[i][j]=false;}
}
traverse(r,c,visited);
}
}
