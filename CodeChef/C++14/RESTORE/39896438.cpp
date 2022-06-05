#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int t;
    cin>>t;
    ll mx = 4*1e6+1;
    vector<int> primes;
    bool prime[mx]={false};
    for(ll i = 2 ;i <=mx ;i++){
        if(!prime[i]){
            primes.push_back(i);
        for(ll j = i*i ;j<=mx ;j+=i){
            prime[j]=true;
        }
        }
    }
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n) ;
        for(int i = 0 ; i<n ;i ++)cin>>v[i];
        map<int,int> m;
        int ptr = 0 ; 
        for(int i = 0 ; i<n;i ++){
                 if(!m[v[i]]){
                  m[v[i]]=primes[ptr];
                cout<<primes[ptr++]<<" ";
                continue;
                 }
                 cout<<m[v[i]]<<" ";
          
        }
        cout<<endl;
    }
}