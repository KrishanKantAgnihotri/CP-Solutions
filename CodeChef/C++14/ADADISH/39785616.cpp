#include<bits/stdc++.h>
#define ll long long int 
using namespace std ; 
 ll  ans = INT_MAX;
void calc(int n,vector<int> v,ll one ,ll two){
    if(n==-1)
    {
        ans = min(ans,max(one,two));
        return ;
    }
    calc(n-1,v,one+v[n],two);
    calc(n-1,v,one,two+v[n]);
    
    
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i = 0 ; i<n;i ++) cin>>v[i];
        calc(n-1,v,0,0);
        cout<<ans<<endl;
        ans = INT_MAX;
    }
}