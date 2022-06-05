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
    ll n;
    cin>>n;
    vector<pair<ll,ll>> v;
    ll num;
    for(int i = 0  ;i<n ;i++){
        cin>>num;
        v.push_back({num,i+1});
    }
    sort(v.begin(),v.end());
    for(int i = 0 ; i<n ;i++){
        cout<<v[i].second<<" ";
    }
    cout<<endl;
}

