#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

int main()
{
   int t;
   cin>>t;
   while(t--)
   {
       int n;int ans = 0 ;
       cin>>n;
      while(n>0)
      {

          ans += n/5;
          n/=5;
      }
      cout<<ans<<endl;
   }
}
