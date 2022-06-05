#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

int main()
{
 int t;
 cin>>t;
 while(t--)
 {int g;
 cin>>g;
 int i,n,q;
 for(int j = 0 ; j<g ; j++)
    {cin>>i>>n>>q;
    if(n%2==0)
   {

            cout<<(n/2);

   }
   else
   {

       (i==q)?cout<<(n/2):cout<<(n/2)+1;

   }
    cout<<endl;
    }


 }
}
