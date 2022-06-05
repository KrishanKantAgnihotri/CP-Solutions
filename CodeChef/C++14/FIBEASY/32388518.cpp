#include<iostream>
#include<cstdint>
#include<math.h>
using namespace std;
typedef uint64_t ll;
ll power (ll x,ll y,ll n){
	ll temp=1;
	while(temp<=y){
		temp=(temp*x);
	}
	temp/=2;
	return temp;
}
void solve(){
    ll n;
    ll i=1;
    while(i<=n){
        i*=2;
    }
    i/=2;
}
int main(){
	ll  n,t,k,j,i,a=0,b=1;
	ll fib [60];
	fib[0]=0;
	fib[1]=1;
	for(i=2;i<60;i++){
		fib[i]=(fib[i-1]+fib[i-2])%10;
	}
	cin>>t;
	while(t--){
		cin>>n;
		ll temp= n;
	ll a=power(2,temp,60);
	cout<<(ll(fib[(a-1)%60]))<<endl;	
    
}
return 0;
}