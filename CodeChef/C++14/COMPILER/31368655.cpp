#include<bits/stdc++.h>
//#include<boost/multiprecision/cpp_int.hpp>
#define ull unsigned long long int
#define ll long long
#define vi vector<int>
#define pi pair<int,int>
#define vii vector<pi>
#define eb emplace_back
#define mii map<int,int>
#define all(x) x.begin(),x.end()
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define rep(i,a,b) for(ll i=a ;i<=b ; i++)
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
int main()
{fast_io
int t;
cin>>t;
while(t--)
{string s;
cin>>s;
stack<char> k;
ll cnt = 0 ; 
//bool flag = true;
int i ;
for( i = 0 ; i<s.length(); i++)
{if(s[i]=='>'){
if(k.empty())    
break;
else
{
    k.pop();
    if(k.empty())
    cnt=i+1;
    
}
}else
k.push(s[i]);
}
//if(flag==false)
cout<<cnt<<endl;
//else
//cout<<s.length()<<endl;
}
}