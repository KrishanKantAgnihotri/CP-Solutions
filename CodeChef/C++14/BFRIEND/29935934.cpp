#include <bits/stdc++.h>
#define ll long long
#define MAX 10000000000
//#include<boost/multiprecision/cpp_int.hpp>
//using boost::multiprecision::cpp_int;
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	int n,a,b,c;
	cin>>n>>a>>b>>c;
	vector<long long int> v(n);
	ll ans = MAX ; 
	for(int i = 0 ; i<n ;i++) 
{
    cin>>v[i];
   // cout<<ans<<" ";
ans = min((abs(a-v[i])+abs(b-v[i])+c)*1LL,ans);
//cout<<ans<<" ";
}
cout<<ans<<endl;
	}
	return 0;
}
