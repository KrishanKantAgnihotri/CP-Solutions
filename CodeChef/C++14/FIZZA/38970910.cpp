#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long int
#define ll long long
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define endl "\n"
#define INF 1e18
#define Time cerr<<"\nTime Taken : "<<(float)(clock()-time_p)/CLOCKS_PER_SEC<<"\n";
clock_t time_p=clock();

int main(){
    fast_io
    #ifndef ONLINE_JUDGE
    freopen("inputa.txt","r",stdin);
    freopen("outputa.txt","w",stdout);
    freopen("log.txt","w",stderr);
    #endif
    int t;
    cin>>t;
    while(t--){
      ll n;
      cin>>n;
      vector<ll> v(n+2);
      vector<ll> p(n+2);
      for(int i = 0 ; i<n ;i++){
        cin>>v[i];

      }
      for(int i = n-1 ;i>=0 ; i--){
        if(v[i]==v[i+1]){
            p[i] = max(p[i],p[i+1]+1);
        }
        if(v[i]==v[i+2]){
            p[i] = max(p[i],p[i+2]+1);
        }
      }
      ll ans = -1 ;
      for(int  i = 0 ; i<n ;i++){
        ans = max(ans,p[i]);
      }
      cout<<ans<<endl;
    }
Time
}

