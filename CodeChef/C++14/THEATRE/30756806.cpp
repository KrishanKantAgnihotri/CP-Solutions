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
int main()
{fast_io

	int t;
	cin>>t;ll ans=INT_MIN;
	ll final = 0;
	while(t--)
	{int p=0;ll tmpans=0;ans=INT_MIN;
	    int n;
	    cin>>n;
	    char c;
	    int m;
	    //cin>>c>>m;
	    int v[4][4]={0};
	    for(int i =0; i<n;i++)
	    {
	        cin>>c>>m;
	        v[c-'A'][m/3-1]++;
	    }
	   int visitedr[4]={0};
	   int visitedc[4]={0};
	   vi sol;
	   for(int i = 0; i<4 ;i++)
	{ //sol.pb(v[0][i]);
	visitedr[0]=1;
	   if(!visitedc[i])
	    {	visitedc[i]=1;

	        for(int j = 0 ; j<4 ;j++)
	    {   visitedr[1]=1;
	        if(!visitedc[j])
	        {visitedc[j]=1;
	            for(int k = 0 ;k<4 ;k++)
	        {   if(!visitedc[k])
	            {visitedc[k]=1;
	                for(int l = 0 ; l<4 ;l++)
	            {
	                if(!visitedc[l])
	                {
	                sol.pb(v[0][i]);
	                sol.pb(v[1][j]);
	                sol.pb(v[2][k]);
	                sol.pb(v[3][l]);
	                sort(all(sol));
	                ll tmp = 100;p=0;tmpans=0;
	                for(int  it = 3; it>=0 ;it--)
	                {
	                    tmpans+=(sol[it]*tmp);
	                    tmp-=25;
	                    if(sol[it]==0)
	                    p++;
	                }
	                ans=max(tmpans-p*100,ans);
	                sol.clear();
	                }
	            }
	                visitedc[k]=0;
	            }
	        }
	            visitedc[j]=0;
	        }
	    }
	        visitedc[i]=0;
	    }
	}
	   cout<<ans<<endl;
	   final+=(ans);
	   ans=0;
	    }


	cout<<final<<endl;
}