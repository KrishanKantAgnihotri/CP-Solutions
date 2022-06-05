#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define fast_io ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
int main() {
fast_io
int t;
cin>>t;

while(t--)
{ int prev = INT_MAX ;int num;
   int n;
   cin>>n;
   int cnt = 0 ; 
   for(int i = 0 ;i<n ;i++)
   {
       cin>>num;
       if(num<=prev)
       cnt++;
      // cout<<prev<<num;
       prev = min(num,prev) ;
   }
   cout<<cnt<<endl;
}
	return 0;
}
