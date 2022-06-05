         
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
ll n,k;
bool calc(ll i ,ll cnt ,ll pref ,vector<int> &v){
    if(i==n){
        if(k==cnt){
            return true ; 
        }
        return false;
    }
    v[i]=1;
    pref+=(i+1);
    bool ok = false;
    ll cnt1 = cnt ;
    if(pref>0)
    cnt1++; 
    ok = calc(i+1,cnt1,pref,v);

    if(ok)
        return true;
    pref-=(i+1);
    pref-=(i+1);
    v[i]=0;
    ll cnt2 = cnt ; 
    if(pref>0)
        cnt2++;
    ok = calc(i+1,cnt2,pref,v);
    if(ok)
        return true;
    return false;

}
int main()
{
    #ifndef ONLINE_JUDGE 
    freopen("inputa.txt","r",stdin);
    freopen("outputa.txt","w",stdout);
    freopen("log.txt","w",stderr);
    #endif
   
int t;
t = 1;
cin>>t;
while(t--){
   //ll n,k;
   cin>>n>>k;
   vector<int> v(n);
   ll p = 0 ; 
   ll c = 0 ; 
   //calc(0,0,0,v);
   for(int i = 0 ; i<n ; i++){
    if(i&1){
        v[i] = -(i+1),c--;
    }
    else
        v[i] = i+1,p++ ; 
   }
   if(p==k){
    for(auto it : v)
        cout<<it<<" ";
    cout<<endl;

    continue;
   }
   else {
    if(p>k){
        for(int i = n-1 ; i>=0 ; i--){
            if(p==k)
                break;
            if(v[i]>0)
                v[i]=-v[i],p--;
        }
    }
    else{
        for(int i = n-1 ;i>=0 ; i--){
            if(p==k)
                break;
            if(v[i]<0)
                v[i] = -v[i],p++;
        }

    }
   }
   for(auto it : v){
    cout<<it<<" ";
   }
   cout<<endl;

}
Time
}
