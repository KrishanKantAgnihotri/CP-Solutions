#include<bits/stdc++.h>
#include<boost/multiprecision/cpp_int.hpp>
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

int main()
{fast_io
int t;
	cin>>t;
	while(t--){
		ll n,x,d;
		cin>>n;

		if(n==1||n==2)
			cout<<-1<<"\n";
		else if(n==3)
			cout<<1<<"\n";
		else{
			x=sqrt(n);
			
		if(n%2==0){
			if(x%2==1)
				x--;
		}
		else{
			if(x%2==0)
				x--;
		}
		int check=0;
		while(x>0){
			d=(n-(x*x))/(2*x);
			if(d>0 && (d*2*x)==n-(x*x))
			{
				check=1;
				break;
			}
			x-=2;
		}
		if(!check)
			cout<<-1<<"\n";
		else
			cout<<d*d<<"\n";	
		}
}
}
