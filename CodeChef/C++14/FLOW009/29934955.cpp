#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    int b;
	    cin>>n>>b;
	    double ans = n*b;
	    if(n>1000)
	    ans=ans-ans*0.1;
	    cout<<fixed<<setprecision(6)<<double(ans)<<endl;
	}
	return 0;
}
