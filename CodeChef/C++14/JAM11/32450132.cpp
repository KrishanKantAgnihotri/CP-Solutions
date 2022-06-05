#include<bits/stdc++.h>
#define fast cin.tie(0); ios_base::sync_with_stdio(0);
#define REP(i,n) for(int i = 1; i <= n ; i ++)
#define mod 1000000007
#define vi vector<ll>
typedef long long int ll;
using namespace std;
vi dp(1000001,0);

int main(){
	ll t;
	cin >> t;
	dp[1] = 1;
	dp[2] = 2;
	dp[3] = 4;
	while(t --){
		ll n;
		cin >> n;
		for(ll i = 4; i <= n; i ++){
			dp[i] = (dp[i-1] + dp[i-2] + dp[i-3] )%mod;
		}
		cout << dp[n] <<"\n";
	}
}