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
    //#ifndef ONLINE_JUDGE
    //freopen("inputa.txt","r",stdin);
    //freopen("outputa.txt","w",stdout);
    //freopen("log.txt","w",stderr);
    //#endif
    ll n,k;
    cin>>n>>k;
    set<int> s;
    while(k--){
        ll d;
        cin>>d;
        ll num;
        for(int i = 0 ; i<d;i++)
            cin>>num,s.insert(num);

    }
    cout<<(n-s.size())<<endl;
}

