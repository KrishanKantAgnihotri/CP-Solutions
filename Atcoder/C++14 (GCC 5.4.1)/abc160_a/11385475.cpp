#include<bits/stdc++.h>
using namespace std;
int main()
{
  long long a,b;
  long long n;
  cin>>n>>a>>b;
  long long tnp= (n/(a+b))*a;
  long p = n%(a+b);
                  if(p>a)
                  tnp+=a;
                  else
                  tnp+=p;
                  cout<<tnp<<endl;
  
}