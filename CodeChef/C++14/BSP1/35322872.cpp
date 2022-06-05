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
int dx[]={-1,0,1,0};
int dy[]={0,1,0,-1};

void Sieve(bool isPrime[]){
	int N = 1000006+1;
	fill(isPrime,isPrime+N,true);
	for(int i=2;i*i<=N;i++){
		if(isPrime[i]){
			for(int j=i*i;j<=N;j+=i){
				isPrime[j] = false;
			}
		}
	}
	
}
int main()
{fast_io
#ifndef ONLINE_JUDGE
freopen("in.txt","r",stdin);
freopen("out.txt","w",stdout);
#endif
int N = 1000006+1;
bool isPrime[N];
Sieve(isPrime);

ll primes[1000005];
primes[0]=0;
primes[1]=1;
primes[2]=2;
primes[3]=primes[2];
for(int i = 3;i<=1000000;i++)
{
    if(isPrime[i])
    primes[i]+=i;
    primes[i+1]=primes[i];
}

int t;
cin>>t;
while(t--)
{
int n;
cin>>n;
cout<<primes[n]<<endl;
}
}
