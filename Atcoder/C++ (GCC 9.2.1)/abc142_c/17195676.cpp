#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long int
#define ll long long
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define endl "\n"
#define INF 1e18
/*#define Time cerr<<"\nTime Taken : "<<(float)(clock()-time_p)/CLOCKS_PER_SEC<<"\n";
clock_t time_p=clock();*/
int main(){
    fast_io
    #ifndef ONLINE_JUDGE
    freopen("inputa.txt","r",stdin);
    freopen("outputa.txt","w",stdout);
    freopen("log.txt","w",stderr);
    #endif
    ll cnt = 0 ;
    vector<ll> f;
   ll a,b;
   cin>>a>>b;
   ll g = __gcd(a,b);
  for(ll i = 2 ;i*i<=g;i++){
    if(g%i==0){
        cnt++;
        while(g%i==0)
            g/=i;

    }
  }

if(g!=1)
    cnt++;
cout<<cnt+1<<endl;


}

