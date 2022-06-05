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
    ll n;
    cin>>n;
   string s;
   cin>>s;
   ll tp = 0 ;
if(s[0]=='U')
    tp++;
else
    tp--;
ll prev = -1 ;
ll ans = 0 ;
for(int i = 1 ; i<s.length();i++){
    if(tp==0 && prev<0)
        ans++;
    prev = tp;
    if(s[i]=='U')
    tp++;
else
    tp--;
}
if(tp==0 && prev <0)
ans++;
cout<<ans<<endl;
Time
}

