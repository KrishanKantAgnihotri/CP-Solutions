         
#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long int
#define ll long long
#define ii pair<int,int>
#define vii vector<ii>
#define vi vector<int>
#define vl vector<ll>
#define mii map<int,int>
#define uii unordered_map<int,int>
#define all(x) x.begin(),x.end()
#define ff first
#define fr(i,a,b) for(int i= a ;i<=b ;i++)
#define ss second
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define endl "\n"
#define pb push_back
#define INF 1e18
#define lcm(a,b) a*b/__gcd(a,b)
#define print(x) cout<<x<<"\n";
#define scanv(v,n) for(int i  = 0 ; i<n ;i++ ) cin>>v[i];
#define printv(v) for(auto it : v) cout<<it<<" ";
#define rall(v) v.rbegin(),v.rend()
#define GOOGLE(i) cout<<"Case"<<" #"<<i<<": ";
#define Time cerr<<"\nTime Taken : "<<(float)(clock()-time_p)/CLOCKS_PER_SEC<<"\n";
clock_t time_p=clock();

int main()
{
   #ifndef ONLINE_JUDGE
    freopen("inputa.txt","r",stdin);
    freopen("outputa.txt","w",stdout);
    freopen("log.txt","w",stderr);
    #endif
int t;
t = 1;
//cin>>t;
while(t--){
ll n;
cin>>n;
ll x;
cin>>x;
ll a[n+1],b[n+1],c[n+1];
map<ll,ll> m;
for(int i =  1 ;i<=n ;i++){
    cin>>a[i]>>b[i]>>c[i];
    m[a[i]]+=c[i];
    m[b[i]+1]-=c[i];
}
ll pr = 0 ;
ll ans = 0 ;  
ll cur = 0 ; 
for(auto it : m){
    ans += min(x,cur)*(it.first-pr);
    pr = it.first ;
    cur += it.second ; 

}
cout<<ans<<endl;
}
Time
}
