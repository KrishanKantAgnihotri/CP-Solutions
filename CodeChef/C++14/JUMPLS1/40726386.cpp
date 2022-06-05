#include<bits/stdc++.h>
#define int long long
using namespace std;
void file_io(){
    #ifndef ONLINE_JUDGE
    freopen("inputa.txt","r",stdin);
    freopen("outputa.txt","w",stdout);
    freopen("log.txt","w",stderr);
    #endif
}
int dp[63];
int recur(int n){
    if(n<0){
        return  0 ;
    }
    if(n==0){
        return 1 ; 
    }
    if(dp[n]!=-1)
    return dp[n];
    
    return dp[n] = recur(n-1)+recur(n-2)+recur(n-3);
    
}
signed main(){
    file_io();
    for(int i= 0 ; i<63;i++)
    dp[i]=-1;

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<recur(n)<<endl;
    }
}

