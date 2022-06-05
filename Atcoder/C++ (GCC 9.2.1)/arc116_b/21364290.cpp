#include <bits/stdc++.h>
#define MOD 998244353
using namespace std;
 
int main() {
	int n;
	cin>>n;
	long long a[200010];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n);
	long long x=a[0];
	long long pow=1;
	for(int i=1;i<n;i++){
		x=(x+pow*a[i])%MOD;
		pow=(pow*2)%MOD;
	}
	cerr<<x<<endl;
	long long sum=(x*a[0])%MOD;
	for(int i=1;i<n;i++){
		long long y=x-a[i-1]-a[i];
		if(y%2==0){
			y=y/2;
		}
		else{
			y=(y+MOD)/2;
		}
		y=(y+a[i])%MOD;
		sum=(sum+y*a[i])%MOD;
		x=y;
	}
	cout<<sum<<endl;
	for(int i=0;i<n;i++){
		cerr<<a[i]<<endl;
	}
	return 0;
}