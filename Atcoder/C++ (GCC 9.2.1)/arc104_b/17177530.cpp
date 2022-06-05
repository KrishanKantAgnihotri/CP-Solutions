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
    string s;
    cin>>n>>s;
    vector<int> prefa(n+1);
    vector<int> prefg(n+1);
    vector<int> prefc(n+1);
    vector<int> preft(n+1);
   for(int i = 0 ; i<n ;i++){
    if(s[i]=='A'){
      prefa[i+1]=prefa[i]+1;
      prefg[i+1]=prefg[i];
      prefc[i+1]=prefc[i];
      preft[i+1]=preft[i];
      continue;
    }
       if(s[i]=='G'){
      prefg[i+1]=prefg[i]+1;
      prefa[i+1]=prefa[i];
      prefc[i+1]=prefc[i];
      preft[i+1]=preft[i];
      continue;
    }
       if(s[i]=='C'){
      prefc[i+1]=prefc[i]+1;
      prefg[i+1]=prefg[i];
      prefa[i+1]=prefa[i];
      preft[i+1]=preft[i];
      continue;
    }
       if(s[i]=='T'){
      preft[i+1]=preft[i]+1;
      prefg[i+1]=prefg[i];
      prefc[i+1]=prefc[i];
      prefa[i+1]=prefa[i];
      continue;
    }

   }
   ll cnt = 0 ;
for(int i = 0 ;i<n ;i++){
    for(int j = i+1; j<n ;j++){
        if(prefa[j+1]-prefa[i]==preft[j+1]-preft[i] && prefc[j+1]-prefc[i]==prefg[j+1]-prefg[i])
            cnt++;
    }
}
cout<<cnt<<endl;
}

