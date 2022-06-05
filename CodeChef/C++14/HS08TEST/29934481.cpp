#include<bits/stdc++.h>
#define ll long long 
#define ull unsigned long long 
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl "\n"
using namespace std;
int main()
{
fastio;
int number;
double amt;
double ans; 
cin>>number;
double x =number;
cin>>amt;
   if((amt>=(x+0.5))&&(number%5==0))
     ans=amt-number-0.5;
   else
   ans=amt;
cout<<fixed<<setprecision(2)<<ans<<endl;

	return 0 ; 
}