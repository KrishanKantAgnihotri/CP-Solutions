#include<bits/stdc++.h>
//#include<boost/multiprecision/cpp_int.hpp>
//#include<ext/pb_ds/assoc_container.hpp>
//#include<ext/pb_ds/tree_policy.hpp>

#define ull unsigned long long int
#define ll long long
#define vi vector<int>
#define mii map<int,int>
#define all(x) x.begin(),x.end()
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
//#define endl "\n"
#define pb push_back
#define MOD 1e9+7
#define INF 0x3f3f3f3f
//#define show(x) cerr<<x#<<" "<<x<<"\n";
//typedef tree<pair<int,int>,null_type,
//less<pair<int,int>>,rb_tree_tag,tree_order_statistics_node_update>   ordered_set;

//(UNCOMMENT WHEN HAVING LOTS OF RECURSIONS)\
//#pragma comment(linker, "/stack:200000000")
//(UNCOMMENT WHEN NEEDED)\
//#pragma GCC optimize("Ofast,unroll-loops,no-stack-protector,fast-math")
//#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
//#pragma GCC optimize("O3")
//uncoment for large int requirement

//using boost::multiprecision::cpp_int;
//using namespace _gnu_pbds;
using namespace std;

/*bool isleap(int year)
{
    return (((year % 4 == 0) && (year % 100 != 0)) ||
             (year % 400 == 0));
}

bool isprime(ull n)
{
    if (n <= 1) return false;
    if (n <= 3) return true;
    if(n%2 == 0 || n%3 == 0) return false;

    for (int i=5; i*i<=n; i=i+6)
        if (n%i == 0 || n%(i+2) == 0)
           return false;
    return true;
}
vector<int>Primes;

void Sieve(){
	int N = 1e6+1;
	bool isPrime[N];
	fill(isPrime,isPrime+N,true);
	for(int i=2;i*i<=N;i++){
		if(isPrime[i]){
			for(int j=i*i;j<=N;j+=i){
				isPrime[j] = false;
			}
		}
	}
	for(int i=2;i<=N;i++){
		if(isPrime[i])
			Primes.pb(i);
	}
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
}
for combination
int mul(int x, int y)
{
    return (x * 1ll * y) % MOD;
}

int binpow(int x, int y)
{
    int z = 1;
    while(y)
    {
        if(y & 1) z = mul(z, x);
        x = mul(x, x);
        y >>= 1;
    }
    return z;
}

int inv(int x)
{
    return binpow(x, MOD - 2);
}

int divide(int x, int y)
{
    return mul(x, inv(y));
}

int fact[N];



int C(int n, int k)
{
    return divide(fact[n], mul(fact[k], fact[n - k]));
}
//for factorials
    fact[0] = 1;
    for(int i = 1; i < N; i++)
        fact[i] = mul(fact[i - 1], i);
        calliing statement should like this
        also keep in mind if the k>=0&&k<=n;
        C(n,k);
        for inverse factorial
        int ifact[N];
        https://www.codechef.com/viewsolution/30286340
            ifact[N-1]=pw(fact[N-1],mod-2);
    for(int i=N-2;i;i--) ifact[i]= mul(ifact[i+1],i+1);
//finding xor upto n ;
int findXOR(int n)
{
    switch(n&3)
    {
    case 0 : return n;
    case 1 : return 1;
    case 2 : return n+1;
    case 3 : return 0;
    }

}
*/
int main()
{//fast_io

ll n;
 cin>>n;
 ll ans =0 ; 
 ans+=(n/500)*1000;
 n=n%500;
 ans+=(n/5)*5;
 cout<<ans<<endl;
}
