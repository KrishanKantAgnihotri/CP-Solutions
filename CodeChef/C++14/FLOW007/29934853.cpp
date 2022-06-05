#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
	while(t--)
	{
	   int n;
	   cin>>n;
	   int ans = 0 ; 
	   while(n)
	   {
	        int digit=n%10;
	        ans = ans*10+digit;
	        n/=10;
	   }
	   cout<<ans<<endl;
	}
	return 0;
}
